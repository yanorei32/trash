package main

import (
	"time"
	"regexp"
	"os"
	"bufio"
	"fmt"
	"io"
	"log"
)

func formatLrc(d time.Duration) string {
	msec := d.Round(10 * time.Millisecond).Milliseconds()
	min := msec / time.Minute.Milliseconds()
	msec -= (time.Minute * time.Duration(min)).Milliseconds()
	sec := msec / time.Second.Milliseconds()
	msec -= (time.Second * time.Duration(sec)).Milliseconds()
	centisec := msec / 10

	return fmt.Sprintf("[%02d:%02d.%02d]", min, sec, centisec)
}

func main() {
	if len(os.Args) != 3 {
		log.Fatal("go run 2020-11-08_1.go [filename] [OFFSET]")
	}

	f, err := os.Open(os.Args[1])
	defer f.Close()

	if err != nil {
		log.Fatal(err)
	}

	offset, err := time.ParseDuration(os.Args[2])
	if err != nil {
		log.Fatal("Failed to parse OFFSET")
	}

	rd := bufio.NewReader(f)

	re := regexp.MustCompile(`^\[(\d+):(\d+\.\d+)\](.*)\n$`)

	for {
		l, err := rd.ReadString('\n')

		if err == io.EOF {
			break
		}
		
		if err != nil {
			log.Fatal("Failed to readline")
		}

		m := re.FindStringSubmatch(l)
		if m == nil {
			fmt.Print(l)
			continue
		}

		t, err := time.ParseDuration(m[1] + "m" + m[2] + "s")

		if err != nil {
			log.Fatal("Failed to parse line: " + l)
		}

		fmt.Println(
			formatLrc(t + offset) + m[3],
		)
	}
}



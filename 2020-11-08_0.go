package main

import (
	"fmt"
	"log"
	"os"
	"strconv"
	"time"
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
	if len(os.Args) < 4 {
		log.Fatal("go run 2020-11-08_0.go [BPM] [LIMIT] [OFFSET]")
	}

	bpm, err := strconv.Atoi(os.Args[1])
	if err != nil {
		log.Fatal("Failed to parse BPM")
	}

	limit, err := time.ParseDuration(os.Args[2])
	if err != nil {
		log.Fatal("Failed to parse LIMIT")
	}

	offset, err := time.ParseDuration(os.Args[3])
	if err != nil {
		log.Fatal("Failed to parse OFFSET")
	}

	tick := 0

	for {
		pos := time.Minute * time.Duration(tick) / time.Duration(bpm) + offset

		if limit < pos {
			os.Exit(0)
		}

		fmt.Println(formatLrc(pos))

		tick += 1
	}
}




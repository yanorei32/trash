import random
import sys
import time

def main():
    targetStr = list("ポプテピピック")
    targetStrLen = len(targetStr)
    matchCounter = 0
    tryCounter = 0

    begin = time.time()

    while True:
        tryCounter += 1

        c = random.choice(targetStr)

        sys.stdout.write(c)

        if c != targetStr[matchCounter]:
            matchCounter = 0
            continue

        if matchCounter == targetStrLen - 1:
            break

        matchCounter += 1

    deltaTime = time.time() - begin
    sys.stdout.write('\n')
    sys.stdout.flush()
    print(f'Done ({tryCounter} chars printed. Δt={deltaTime:.3f} sec. {tryCounter/deltaTime:.1f} chars/sec)')

if __name__ == '__main__':
    main()


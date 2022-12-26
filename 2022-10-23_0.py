import time
import itertools


def servo_angle_generator():
    servo0_angle_generator = itertools.cycle([60, 120])
    servo1_angle_generator = itertools.cycle(range(70, 25, -5))

    while True:
        yield [0, next(servo0_angle_generator)]
        yield [1, next(servo1_angle_generator)]



def main():
    generator = servo_angle_generator()
    # counter = itertools.cycle(range(3))
    frame_counter = 0
    while True:
        frame_counter += 1
        # value = next(counter)
        print("Value:", frame_counter)
        if frame_counter % 3 == 0:
            motor, angle = next(generator)
            print("Motor:", motor, "Angle:", angle)
        time.sleep(1/2)


if __name__ == '__main__':
    main()

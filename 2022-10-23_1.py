import time
import itertools


def func():
    for x in range(2):
        for y in range(2):
            yield ["x", x]
            yield ["y", y]


generator = func()

for variable, value in generator:
    print("variable:", variable, "value:", value)
    time.sleep(0.5)

# -*- coding: utf-8 -*-

import random

colors = list("赤青黄白")
categories = list("ABCDEF")

for _ in range(0, 100):
    print(
        "{0},{1},{2}".format(
            random.choice(colors),
            random.choice(categories),
            random.random(),
        )
    )


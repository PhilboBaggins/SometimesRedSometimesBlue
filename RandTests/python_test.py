#!/usr/bin/env python

import random

counts = 0;
red = 0.0;
blue = 0.0;

while (counts < 1000 * 1000):
    color = random.choice(['red', 'blue'])
    counts = counts + 1
    if color == 'red':
        red = red + 1
    else:
        blue = blue + 1

print 'Red  = ', red,  ',', (red  / counts * 100), 'percent'
print 'Blue = ', blue, ',', (blue / counts * 100), 'percent'

#!/bin/sh

cd "$(dirname -- $0)"

make && while true; do
    ./sometimesredsometimesblue-vala-curses
done

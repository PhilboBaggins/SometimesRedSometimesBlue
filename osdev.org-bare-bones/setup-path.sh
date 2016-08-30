#!/bin/sh

export PATH=$HOME/opt/cross-i386-elf/bin/:$PATH

echo -en "Path is now:\n  "
echo $PATH | sed 's/:/\n  /g'

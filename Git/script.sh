#!/bin/sh

SHUF_CMD=$(which shuf 2>/dev/null || which gshuf 2>/dev/null)

if [ ! -x "$SHUF_CMD" ]; then
    echo "You'll need to install the `shuf` command or rewrite this script" >&1
    exit 1
fi

if [ $("$SHUF_CMD" -i0-1 -n1) -eq 0 ]; then
    COLOUR="Red"
else
    COLOUR="Blue"
fi

echo "$COLOUR"
if [ $(head -n1 output.txt) = "$COLOUR" ]; then
    echo "$COLOUR" >> output.txt # Same colour last time - Append to file
else
    echo "$COLOUR" > output.txt  # Different colour - Overwrite file
fi

git add output.txt
git commit -m "Git script: $COLOUR" output.txt

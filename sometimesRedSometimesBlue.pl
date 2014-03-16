#!/usr/bin/perl
# Set console background colour to red or to blue

if (rand() < 0.5)
{
    print "\033[44m"; # Blue
}
else
{
    print "\033[41m"; # Red
}

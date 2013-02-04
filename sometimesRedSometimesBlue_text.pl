#!/usr/bin/perl
# Set console text colour to red or to blue

if (rand() < 0.5)
{
    print "\033[0;34m"; # Blue
}
else
{
    print "\033[0;31m"; # Red
}

# Sometimes red, sometimes blue PCB

*Warning: Design is not finished yet*

## TODO

After playing with the initial prototype, I think I should do the following:

* [ ] Replace the resonator circuit with an off the shelf oscillator device
* [ ] Round the PCB corners even if that means losing some or all of the screw/necklace/keyring holes - just to make Joel happy ... also because it's a good idea
* [ ] Fix the foot print for the D-type flip-flop ... not sure what happened there but it's all wrong
* [ ] Consider a dual channel AND gate IC instead of two single channel ICs
* [ ] Consider larger IC for everything ... they were all very fiddly to hand solder
* [ ] Test points
    * [ ] Consider making these bigger
    * [ ] Rearrange the silkscreen labels so they're easier to read
* [ ] Make the "Red" and "Blue" silkscreen labels larger ... people don't know what this this thing does by looking at it
* [ ] Consider how much current I want to drive the LEDs with, then choose resistors and consider adding a FET between the AND gate output and the resistor
* [ ] BAttery holder:
    * [ ] Make sure a battery fits properly in the holder ... BTW: an AUD$2 coin fits in quite nicely
    * [ ] Is it a good idea to add a blob of solder on the battery negative pad?
* [ ] Larger LEDs?
* [ ] Check via diameter against www.pcbs.io's specifications ... the holes aren't centred especially well. It's not really a problem but I should make sure it's not the design's fault (like if the holes are smaller than the manufacturer allows)
* [ ] Remove the thick trace linking pins 6, 7 & 8 on the D-type flip-flop; it's unnecessary and looks bad
* [ ] Stop staring at my PCB so much, no one else is going to notice crap like this

## Design files

This board was designed using the [Upverter](https://upverter.com) web service.

The schematic, board layout and bill of materials can be viewed [here](https://upverter.com/Trebuchetindustries/149a2c4d1a1b71fa/Sometimes-red-sometimes-blue/). Exports from Upverter are [available in a subdirectory](./Upverter%20exports).

## Licence

Copyright © 2017, 2018 Phil Baldwin

This work is licensed under a Creative Commons Attribution-ShareAlike 4.0 International License.

You should have received a copy of the license along with this work. If not, see <http://creativecommons.org/licenses/by-sa/4.0/>.

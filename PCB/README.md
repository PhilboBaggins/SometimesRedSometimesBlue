# Sometimes red, sometimes blue PCB

*Warning: Design is not finished yet*

## TODO

After playing with the initial prototype, I think I should do the following:

* [ ] Add a hole so the PCB can be used a keyring, necklace, etc
* [x] Replace the resonator circuit with an off the shelf oscillator device
* [x] Round the PCB corners even if that means losing some or all of the screw/necklace/keyring holes - just to make Joel happy ... also because it's a good idea
* [...] Fix the foot print for the D-type flip-flop ... not sure what happened there but it's all wrong
* [x] Consider a dual channel AND gate IC instead of two single channel ICs
* [x] Consider larger IC for everything ... they were all very fiddly to hand solder
* [ ] Consider adding test points
* [...] Consider how much current I want to drive the LEDs with, then choose resistors and consider adding a FET between the AND gate output and the resistor
* [ ] Make sure a battery fits properly in the holder

## Design files

This board was designed using [EasyEDA](https://easyeda.com/).

Exports from EasyEDA are [available in a subdirectory](./Exports-v1.0).

## Licence

Copyright © 2017, 2018, 2022 Phil Baldwin

This work is licensed under a Creative Commons Attribution-ShareAlike 4.0 International License.

You should have received a copy of the license along with this work. If not, see <http://creativecommons.org/licenses/by-sa/4.0/>.

Juno rev. 1, aka THE SNOOT BOOPER
# Build Guide

## Parts
### Required

| Name | Pieces/Units | Comments |
|:-|:-|:-|
| Juno PCB | 1 | |
| MCU | 1 | [ProMicro](https://smile.amazon.com/gp/product/B08BJNV1J3/), [Elite C](https://smile.amazon.com/gp/product/B087CLFKW9/), and equivalents |
| Through-hole diode | 1 | [1N4148](https://smile.amazon.com/gp/product/B08RHFHJFF/) |
| Key switch, MX style | 1 | |
| Keycap | 1 | |
| USB Cable | 1 | MicroUSB if ProMicro, USB C if Elite C |

You will also need a soldering iron and solder.

### Optional
| Name | Pieces/Units | Comments |
|:-|:-|:-|
| Reset Switch - 6mm, 2 pin | 1 | [Example](https://smile.amazon.com/gp/product/B07WF76VHT/) |
| MCU Sockets | 1 set of 24 pins | Can be millmax; I instead use [these](https://smile.amazon.com/gp/product/B07BS126FK/) (sacrifices elegance but works great) |
| Bumpons/Feet | 4 | If socketing MCU, use [big bumpons like these](https://smile.amazon.com/gp/product/B07PDJ7T71/). Else, [these small ones could work](https://smile.amazon.com/dp/B06XCNM69B/). |

Useful tools for soldering include tweezers, a wire cutter, and helping hands.

## Let's get building!
### Diode
Bend both the legs of the diode sharpely against its body. Before mounting it on the board, note the marking on the diode -- **diode direction matters**. The through-hole diode will have a black marking on one side, and that side should be closest to the square hole. Insert into its slot on the front side of the board.

Solder the legs from the back side and clip the extra lengths off.

![IMG_7686](/photos/IMG_7686.jpeg)![IMG_7687](/photos/IMG_7687.jpeg)

### Reset Switch (Optional)

Insert the reset button into its dedicated cutout, with the button on the backside. Solder and clip the excess legs.

### Sockets for the MCU (Optional)

I find it helpful to stick the legs into the side of the MCU to measure how many pins I need (rather than counting). I like to gently push in one direction and then the opposite in order to achieve a clean break.

Then, I insert the male pins into the female sockets - firm pressure is needed to make the pins click into each other tightly.

### Switch

Insert the switch and solder the legs.

### MCU

Fit the MCU to the outline on the back of the board, with the components facing out (i.e. visible). Solder and clip the legs.

### Feet

Attach four feet on the back.

## Firmware

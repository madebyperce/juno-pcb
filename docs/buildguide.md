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

<img src="https://raw.githubusercontent.com/na-che-x/juno-pcb/main/docs/photos/IMG_7686.jpeg" width="400">

In the above image, the diode marking is on the left (the black band). This will be the side adjacent to the square hole (the inner corner of Juno's eye).

<img src="https://raw.githubusercontent.com/na-che-x/juno-pcb/main/docs/photos/IMG_7687.jpeg" width="400">

Solder the legs from the back side and clip the extra lengths off.

### Reset Switch (Optional)

Insert the reset button into its dedicated cutout, with the button on the backside. Solder and clip the excess legs.

<img src="https://raw.githubusercontent.com/na-che-x/juno-pcb/main/docs/photos/IMG_7689.jpeg" width="400">

### Sockets for the MCU (Optional)

I find it helpful to stick the legs into the side of the MCU to measure how many pins I need (rather than counting). I like to gently push in one direction and then the opposite in order to achieve a clean break.

<img src="https://raw.githubusercontent.com/na-che-x/juno-pcb/main/docs/photos/IMG_7691.jpeg" width="400">

Then, I insert the male pins into the female sockets - firm pressure is needed to make the pins click into each other tightly.

<img src="https://raw.githubusercontent.com/na-che-x/juno-pcb/main/docs/photos/IMG_7693.jpeg" width="400">

Place the sockets and solder from the front side. In order to ensure the sockets are soldered straight on, you can use a bread board or masking tape (or your fingers) to hold them in place while soldering.

<img src="https://raw.githubusercontent.com/na-che-x/juno-pcb/main/docs/photos/IMG_7694.jpeg" width="400">

### Switch

Insert the switch and solder the legs.

<img src="https://raw.githubusercontent.com/na-che-x/juno-pcb/main/docs/photos/IMG_7703.jpeg" width="400">

<img src="https://raw.githubusercontent.com/na-che-x/juno-pcb/main/docs/photos/IMG_7704.jpeg" width="400">
### MCU

Fit the MCU to the outline on the back of the board, with the components facing out (i.e. visible). Solder and clip the legs.

<img src="https://raw.githubusercontent.com/na-che-x/juno-pcb/main/docs/photos/IMG_7706.jpeg" width="400">

(Above image is before the pin legs have been clipped.)

### Feet

Attach four self-adhesive rubber feet on the back.

<img src="https://raw.githubusercontent.com/na-che-x/juno-pcb/main/docs/photos/IMG_7708.jpeg" width="400">

### Final Touches

You can use rubbing alcohol and a q-tip, or toothbrush, to gently clean off the excess flux. This is the yellowy stuff that gets on the board from soldering.

Pop the keycap on, and we're done with the hardware!

## Firmware

Firmware is [located here](https://github.com/na-che-x/juno-pcb/tree/main/firmware).

You will need to clone the firmware repo (option to do so manually using https://download-directory.github.io/) and build and flash the firmware using QMK CLI. Documentation on setting up QMK CLI (QMK MSYS) is here: https://beta.docs.qmk.fm/tutorial/newbs.

### Keymap

I have the keymap set to output random strings from a predefined library. You can easily modify the strings by replacing the preconfigured strings in the `keymap.c` file in `/keymaps/default/keymap.c`. The code for generating random numbers was liberally borrowed from https://github.com/cbbrowne (based on a google search).

# OpenDeck Platform

OpenDeck MIDI platform is a combination of microcontroller firmware, PCB board and GUI application. (At the moment GUI application is still in design phase).

The platform allows hassle-free building of MIDI controllers and their configuration via MIDI System Exclusive messages, without any need of reprogramming the chip.

## Repository content
* firmware (MCU code)
* part list
* schematic (PDF)
* PCB files (gerbers)

# Configurable features

### MIDI channels

* Note
* Program change
* Control change
* Pitch bend
* MIDI input

### MIDI settings

* Enable/disable standard note off
* Enable/disable running status (DIN MIDI only)
* Enable/disable DIN MIDI in to USB MIDI out converter

### Button configuration

* Button type (momentary/latching)
* Enable/disable program change send instead of notes
* MIDI note

### Analog configuration

* Enable/disable analog input
* Analog input type (only potentiometer at the moment)
* Invert analog value
* CC number
* Lower CC limit
* Upper CC limit

### LED configuration

* Hardware parameters:
  - total LED number
  - blink time
  - start-up LED switch time
  - start-up animation routine
  - fade speed
* LED activation note
* LED start-up number
* Test LED state (constant on/off, blink on/off)

### Encoder configuration

* Enable/disable encoder
* Encoding type
* Invert encoder value
* CC number

### Data restoration

* Restoration of single parameter back to default (ie. restore potentiometer 6 CC number to default)
* Restoration of all parameters within message type (ie. restore all button notes to default)
* Complete factory reset of all values

### SysEx configuration
All configuration is done using MIDI System Exclusive messages. For more information, see examples in /examples folder.

## Firmware compilation
MCU Code is available as Atmel Studio 7.0 project. Simply open 'OpenDeck_AVRC.atsln' using the IDE and everything should work.


## Licence
All code is available under GNU GPL v3 licence.
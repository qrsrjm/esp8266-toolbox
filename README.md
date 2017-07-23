# esp8266-toolbox
Motley of servers and clients for the ESP8266 with signed OTA updates

# Completed
- HTTP server framework
  - Multiple simultaneous clients
  - GET and POST methods
- SHA256 implementation

# Forthcoming
- Signed OTA updates
  - Triggered by HTTP POST and scheduled checks
- Misc. sensor drivers
- MQTT client framework
- SMTP client framework

# Installation (Linux)
1. Install the ESP8266 toolchain and SDK if not already installed:
   https://github.com/pfalcon/esp-open-sdk
1. Modify the variables at the top of the Makefile if necessary
1. Run `make` to build the binaries
1. Power and connect the ESP8266 via USB/serial
1. Put the ESP8266 in flash mode by holding GPIO0 low during boot
1. Run `make flash` to flash the bins (as root or user with appropriate perms)

# Coding style
- 80 character line limits (for multiple horizontally-split editor views)
- Prefer to put function-scope variables at the top of the function; to help
  facilitate calculation of stack space used by the function

# License
This software is freely available for non-commerical use, commerical use requires
an expressed agreement from the author. The preceding clause must be included in
all derivative software developed with commerical rights retained by the author
of this software.

The author takes no responsibility for the consequences of the use of this
software.

Use of the software in any form indicates acknowledgement of the licensing terms.

Copyright (c) 2017 J. O. Makar <jomakar@gmail.com>

# RS232ArduinoTempSensor
Protoype temperature sensor

I made a prototype temperature sensor to interface with Crestron control systems.  The idea was to
make a cheap off the shelf temperature sensor to monitor rack temps.  It works, but due to the way hardware is sold and installed
in commercial applications, requiring things like UL listing, the company I worked ofr decided not to move forward with it.
However, it's an item in my portfolio.

You'll need the following hardware:
* Arduino Uno or compatible
* DHT11 or compatible temperature sensor: https://osepp.com/electronic-modules/sensor-modules/63-humidity-temperature-sensor
* RS232 SchmartModule
* Sainsmart LCD for Arduino
* This case from Thingiverse: https://www.thingiverse.com/thing:709749

I last built this years ago, so I will recreate this and update the docs.  Unfortunately, the device died.  I left it on my vehicle
and it fell off and a passing SUV crushed it.

As I recall, the device was set up to display temp and humidity for 2 sensors on the LCD, and spit out the data via the 232 port
so that a control system could listen to it.




# Arduino-Tachometer-Controller
Project that can control a 6 cylinder automotive tachometer without code modification. This uses the fact that modern day automotive tachometer is controlled by frequencies with a 50% duty cycle. We use a 12V transistor controlled by a tone pin on the arduino to modulate frequencies at 12V for the tachometer.

Usage:
- Connect the tachometer based on the schematic provided in the files or on the Arduino page linked below:
- Modify the code's tone values to change the angle of the tachometer's needle. **Note: Higher cylinder count tachometers will require different frequencies**

Links:
- https://create.arduino.cc/projecthub/tylerpeppy/arduino-car-tachometer-simulator-no-simhub-9edc2c?ref=user&ref_id=426997&offset=2 

# Arduino Binary Counter

This project was designed to help me learn about Arduino, the basics of electricity, and how to wire components on a breadboard. The program counts from 0 to 15 in binary using LEDs connected to Arduino pins.

## Circuit Description

The circuit consists of an Arduino board, LEDs, resistors, and a breadboard. Here's how the circuit is wired:

1. Connect the voltage (VCC) pin of the Arduino to the positive rail of the breadboard.
2. Connect the ground (GND) pin of the Arduino to the negative rail of the breadboard.
3. Connect a leg of a resistor to the positive rail of the breadboard.
4. Connect the large leg of an LED to the other leg of the resistor.
5. Connect a ground (GND) pin of the Arduino to the small leg of the LED.

The LEDs will light up based on the current number being iterated through the list of binary numbers. When a binary digit is '1', the corresponding LED will turn on, and when it's '0', the LED will turn off.

## Code Explanation

The Arduino code is responsible for counting from 0 to 15 and controlling the LEDs. Here are the main components of the code:

- The `binaryList` array stores the binary numbers from 0 to 15 as strings.
- The `setup()` function initializes the serial communication and sets the pin modes for the LEDs.
- The `loop()` function is the main code that runs repeatedly.
- The code uses boolean flags (`led1`, `led2`, `led3`, `led4`) to control the state of each LED.
- The `display` flag is used to indicate when to display the lights.
- The code iterates through the `binaryList` array and turns on/off the LEDs based on the current binary number.
- The `delay(1000)` function is used to display the corresponding binary number for one second.

## Getting Started

To get started with this project, follow these steps:

1. Set up the circuit as described in the "Circuit Description" section.
2. Upload the Arduino code to your Arduino board.
3. Open the serial monitor to view the console logs.
4. Observe how the LEDs light up according to the binary numbers being counted.

Feel free to modify the code and experiment with different LED configurations or binary patterns.

## Youtube Video Link




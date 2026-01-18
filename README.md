# Arduino Transistor Control: Active High and Active Low

This project provides a simple way to control both PNP and NPN transistors using Arduino. You can switch between Active High and Active Low configurations depending on your needs. The `DigitalOutput` class allows you to control the state of a transistor with methods like `on()`, `off()`, and `toggle()`, making it flexible for various use cases.

## Requirements

- Arduino board (e.g., Arduino Uno or any other compatible board)
- Necessary wiring for connections
- Arduino IDE

## Code Explanation

### `DigitalOutput` Class

This class allows you to control a digital pin connected to a transistor. You can configure whether the transistor is Active High or Active Low:

- **PNP Transistor (Active Low)**: The transistor is activated when the voltage is low.
- **NPN Transistor (Active High)**: The transistor is activated when the voltage is high.

The class provides the following methods:

- `begin()`: Initializes the pin as an output and sets the initial state based on whether it's Active High or Active Low.
- `on()`: Turns the transistor on by setting the pin to the appropriate state.
- `off()`: Turns the transistor off by setting the pin to the opposite state.
- `toggle()`: Switches the state of the transistor.
- `getState()`: Returns the current state of the transistor (on or off).

### Code Breakdown

The following defines two transistors: one PNP (Active Low) and one NPN (Active High):

```cpp
DigitalOutput pnpTransistor(4, false);  // PNP (Active Low)
DigitalOutput npnTransistor(11);        // NPN (Active High)

![Alt text](/diagram.PNG)

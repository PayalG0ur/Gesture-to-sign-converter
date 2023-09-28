# Gesture-to-sign-converter:
It is very difficult for mute people to convey their message to regular people. Since regular people are not trained on hand sign language, communication becomes very difficult. In an emergency or other times when a mute person traveling or among new people communication with nearby people or conveying a message becomes very difficult. Here we propose a LCD display that helps mute people in conveying
their message to regular people using hand motions and gestures.

# Objectives of Study:
1.	To implement a hand talk system for deaf-mute people using IOT.
2.	To help bridge the communication gap between the deaf-mute community and the rest of society.

# Concept behind components used:
1.	Limit Switch: A limit switch is an electromechanical device operated by a physical force applied to it by an object. Limit switches are used to detect the presence or absence of an object.

2.	Arduino Nano: The Arduino Nano is a microcontroller board that acts as the brain of the system. It receives the analog input from the Limit switch and processes it using a sign recognition algorithm.


3.	Sign Recognition Algorithm: The sign recognition algorithm analyzes the analog input from the Limit switch and compares it against predefined thresholds or ranges. It maps the sensor readings to specific finger positions or movements, allowing it to identify the recognized sign gestures.


4.	LCD: LCD (Liquid Crystal Display) is a type of flat panel display which uses liquid crystals in its primary form of operation.

5.	Zero PCB: The Zero PCB is the physical platform that integrates all the components together, providing the necessary connections and power supply for the system.

The overall workflow involves the user performing sign gestures, which are captured by the Limit switch. The Arduino Nano processes the sensor readings using the sign recognition algorithm, identifying the recognized sign gestures. The Arduino Nano then sends commands to the DF Mini Player to play the corresponding audio files stored on the microSD card. The text output is produced through the Speaker, providing audible communication based on the recognized sign gestures.

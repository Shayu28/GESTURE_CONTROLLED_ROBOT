# Gesture_controlled_robot
The Automated car robot can be operated  by wearing gloves that possess a transmitter circuit that has an Arduino lilypad board, and an accelerometer. The receiver circuit that has been set up on the robot car, is assembled with an RF 433 transmitter module and two ICs an HT12D and L293DNE.


Components Required:
Accelerometer
HT12E
HT12D 
Arduino Lilypad
RF Module
Voltage Regulator  
L293D
BO Motor 


Software Required:
Arduino IDE


Working:
The working principle of a hand gesture control robot using Arduino Lilypad, accelerometer, RF module 433, encoder, and decoder can be explained as follows:

* The accelerometer is a device that measures acceleration forces in three axes - X, Y, and Z. The accelerometer is connected to the Arduino LilyPad.

*	A microcontroller board called the LilyPad is based on the ATmega328P. The software reads the accelerometer measurements, which then processes them to identify hand gestures.

*	The RF module 433 is used for wireless communication between the LilyPad and the robot. The encoder is connected to the LilyPad and encodes the data to be transmitted wirelessly, while the decoder is connected to the robot and decodes the received data.

*	The robot is equipped with motors controlled by the decoder based on the received data from the RF module 433.

*	To control the robot using hand gestures, the LilyPad reads the values from the accelerometer and recognizes the hand gestures based on the patterns of the acceleration forces. The LilyPad then encodes and transmits the recognised gesture wirelessly using the RF module 433.

*	The decoder on the robot receives the encoded gesture and decodes it to determine the corresponding action to be taken. The decoder then sends the control signals to the motors to move the robot in the desired direction.

*	The program is uploaded in the Arduino Lilypad using Arduino IDE software to perform the transmission operation via an accelerometer.

In summary, the hand gesture control robot using Arduino Lilypad, accelerometer, RF module 433, encoder, and decoder works by recognizing hand gestures through the accelerometer, encoding and transmitting the gesture wirelessly using the RF module 433, decoding the received data on the robot, and controlling the motors based on the decoded gesture to move the robot in the desired direction.


Future Scope:
The robot is devised to have tremendous scopes in the future. The robot can be turned to for surveillance intentions and is particularly beneficial for a disabled individual, as that person can handle the control of the robot vehicle without any hardships in a wheelchair where the wheelchair can be navigated by the actions of the rider's hand. There are limitless possibilities so the technique has a lot of hereafter abilities. The device that has been constructed is on the cheaper flank and is manageable to carry from one spot to another.


Conclusion:
The system's goal is to utilize an Arduino Lilypad and the specified components for the building of the gesture-controlled car. Simple hand actions can be used to make the robot move in any path. We have worked to take this system to the level that its response to the hand motion is well stabilized. Gesticulation control is a more genuine way of operating machines making the control of robots additionally efficient and uncomplicated.




# PID Line Follower Bot with Arduino Uno

Welcome to the PID Line Follower Bot repository! This project showcases an advanced line-following robot built with Arduino Uno, an L298 motor driver, two high-torque 600 RPM motors, 8 IR sensors, and a reliable 11.1V LiPo battery. The robot employs a PID (Proportional-Integral-Derivative) control algorithm for precise and smooth navigation along the black line.

## Hardware Components

- **Arduino Uno**: The central processing unit serving as the microcontroller.
- **L298 Motor Driver**: An H-Bridge motor driver responsible for controlling the speed and direction of the motors.
- **Two 600 RPM Motors**: Robust DC motors powering the wheels of the robot.
- **8 IR Sensors**: Infrared sensors strategically positioned to detect the black line.
- **11.1V LiPo Battery**: A high-capacity battery providing ample power for extended operation.

## Wiring Diagram

![Wiring Diagram](wiring_diagram.png)

Refer to the wiring diagram for accurate connections between the components. Proper wiring is essential for optimal performance.

## Getting Started

1. **Assemble the Hardware**: Connect the Arduino Uno, L298 motor driver, motors, IR sensors, and LiPo battery according to the wiring diagram.

2. **Upload the Code**: Use the Arduino IDE to upload the provided Arduino code (`pid_line_follower_bot.ino`) to the Arduino Uno.

3. **Calibrate IR Sensors**: Fine-tune the sensitivity of the IR sensors to ensure accurate black line detection. Adjust PID parameters in the code for optimal performance.

4. **Power Up**: Energize the robot using the 11.1V LiPo battery.

5. **Place on Track**: Position the line follower bot on a track with a discernible black line.

6. **Observe Movement**: Witness the robot autonomously follow the black line with precision, thanks to the PID control algorithm.

## Customization

- **PID Parameters**: Modify the PID controller parameters (Proportional, Integral, Derivative gains) in the Arduino code to fine-tune the robot's behavior.
- **Sensor Calibration**: Adjust sensor thresholds and positions to optimize performance on different surfaces and lighting conditions.
- **Motor Control Logic**: Customize motor speed and direction control based on PID outputs and sensor inputs to suit specific requirements.

## Issues and Contributions

Encountered an issue or have suggestions for improvement? Feel free to open an issue on the repository. Contributions are highly appreciated via pull requests.

Enjoy exploring the capabilities of your PID Line Follower Bot!

Feel free to tailor this README to match your project's personality and details. If you require further assistance, don't hesitate to reach out!

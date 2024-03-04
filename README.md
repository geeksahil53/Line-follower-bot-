# Line Follower Bot with Arduino Uno

This repository contains the code and necessary information to build a line follower robot using Arduino Uno, an L298 motor driver, two 600 RPM motors, 8 IR sensors, and an 11.1V LiPo battery.
![WhatsApp Image 2024-03-05 at 01 20 28_e1c20d86](https://github.com/geeksahil53/Line-follower-bot/assets/136248824/67206849-f50c-4cb9-9727-14d6456c642c)

## Hardware Components
- **Arduino Uno:** Microcontroller board used as the brain of the robot.
- **L298 Motor Driver:** H-Bridge motor driver used to control the speed and direction of the motors.
- **Two 600 RPM Motors:** DC motors used to drive the wheels of the robot.
- **8 IR Sensors:** Infrared sensors used to detect the black line on the surface.
- **11.1V LiPo Battery:** Power source for the robot.

## Wiring Diagram
Ensure the proper connections between the components as per the provided wiring diagram.

![Wiring Diagram](wiring_diagram.png)

## How to Use
1. **Assemble the Hardware:** Connect the Arduino Uno, L298 motor driver, motors, IR sensors, and LiPo battery as per the wiring diagram.
2. **Upload the Code:** Upload the provided Arduino code (`line_follower_bot.ino`) to the Arduino Uno using the Arduino IDE.
3. **Calibrate IR Sensors:** Adjust the sensitivity of the IR sensors to detect the black line accurately. This may require tweaking the thresholds in the code.
4. **Power Up:** Power up the robot using the 11.1V LiPo battery.
5. **Place on Track:** Place the line follower bot on a track with a black line to follow.
6. **Observe Movement:** The robot should start moving along the black line, adjusting its speed and direction based on the sensor inputs.

## Customization
- **Sensor Calibration:** Adjust the sensor thresholds and positions to optimize the performance of the line follower bot on different surfaces and lighting conditions.
- **Motor Speed and Direction:** Modify the motor control logic in the Arduino code to adjust the speed and direction of the motors based on the sensor inputs.

## Issues and Contributions
If you encounter any issues or have suggestions for improvements, please create an issue on the repository. Contributions are welcome through pull requests.

Happy line following!

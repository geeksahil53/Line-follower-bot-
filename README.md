# Professional Line Follower Robot with PID Control

Welcome to the repository for our Professional Line Follower Robot with PID Control. This project showcases an advanced line-following robot designed with precision and efficiency in mind. Using an Arduino Uno microcontroller, an L298 motor driver, two powerful 600 RPM motors, 8 IR sensors, and a dependable 11.1V LiPo battery, our robot employs a PID (Proportional-Integral-Derivative) control algorithm for accurate and smooth navigation along black lines.

## Key Components

- **Arduino Uno**: The core microcontroller unit responsible for processing and executing control commands.
- **L298 Motor Driver**: An H-Bridge motor driver facilitating precise control over motor speed and direction.
- **Two 600 RPM Motors**: High-torque DC motors providing robust propulsion for the robot's wheels.
- **8 IR Sensors**: Infrared sensors strategically positioned to detect and follow black lines accurately.
- **11.1V LiPo Battery**: A reliable and high-capacity power source ensuring uninterrupted operation.

## Wiring Schematic

Please refer to the comprehensive wiring schematic provided in the repository (`wiring_diagram.png`) for accurate and optimized connections between the various components. Proper wiring is essential for optimal performance and reliability.

## Getting Started

1. **Hardware Assembly**: Carefully assemble the components according to the wiring schematic, ensuring precise connections and proper positioning.

2. **Code Upload**: Utilize the Arduino IDE to upload the provided Arduino code (`pid_line_follower_bot.ino`) to the Arduino Uno microcontroller.

3. **Sensor Calibration**: Fine-tune the sensitivity of the IR sensors to accurately detect black lines. Adjust PID parameters within the code for optimal performance and responsiveness.

4. **Power On**: Activate the robot by connecting the 11.1V LiPo battery, providing it with the necessary power to commence operation.

5. **Placement**: Position the line follower robot on a track featuring clearly defined black lines for navigation.

6. **Observation**: Witness the robot's autonomous navigation along the black lines with precision and efficiency, thanks to the PID control algorithm.

## Customization Options

- **PID Parameters**: Modify the PID controller parameters (Proportional, Integral, Derivative gains) within the Arduino code to fine-tune the robot's behavior based on specific requirements and environmental conditions.
- **Sensor Calibration**: Adjust sensor thresholds and positions to optimize performance across different surfaces and lighting conditions.
- **Motor Control Logic**: Customize motor speed and direction control algorithms based on PID outputs and sensor inputs for tailored performance.

## Issues and Contributions

Should you encounter any issues or have suggestions for further enhancements, please feel free to open an issue on the repository. We welcome contributions and improvements through pull requests, as we continuously strive to refine and expand the capabilities of our line follower robot.

Thank you for exploring our Professional Line Follower Robot with PID Control. We hope you enjoy the precision and reliability it offers in line-following applications.

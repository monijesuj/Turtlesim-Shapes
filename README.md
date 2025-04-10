# Turtlesim-Shapes
Draw Circle, Square, Infinity sign and Star with turtlesim

## Running the Nodes

Start turtlesim node:

```sh
ros2 run turtlesim turtlesim_node
```

Run the path planner node:

```sh
ros2 launch turtle_path_planner path_planner_launch.py trajectory:=infinity_sign
```

*(Replace 'infinity_sign' with circle, star or square as needed)*

## Overview

Turtle Path Planner is a ROS2 package that controls a turtlesim robot along multiple trajectories using the `turtle_path_planner` node. It publishes [`geometry_msgs/Twist`](https://docs.ros.org/en/api/geometry_msgs/html/msg/Twist.html) messages on the `/turtle1/cmd_vel` topic and clears the drawing using the `/clear` service from [`std_srvs/Empty`](http://wiki.ros.org/std_srvs).

## Package Structure

```
ros2_ws/
├── build/
├── install/
└── src/
    └── turtle_path_planner/
        └── turtle_path_planner/
            └── path_planner.py   # Main node
```

## Requirements

- **ROS2 (Foxy, Galactic, Humble, etc.)**
- **Python 3**
- ROS2 packages:
  - `rclpy`
  - `geometry_msgs`
  - `std_srvs`

## Installation

1. **Navigate to your ROS2 workspace:**

   ```sh
   cd ros2_ws
   ```

2. **Build the package using colcon:**

   ```sh
   colcon build --packages-select turtle_path_planner
   ```

3. **Source the setup file:**

   ```sh
   . install/setup.bash
   ```

## Parameters

The node accepts a `trajectory` parameter to select the movement pattern:

- `circle` (default)
- `square`
- `infinity_sign`
- `star`

For example, to run the node with a circle trajectory:

```sh
ros2 run turtle_path_planner path_planner --ros-args -p trajectory:=circle
```

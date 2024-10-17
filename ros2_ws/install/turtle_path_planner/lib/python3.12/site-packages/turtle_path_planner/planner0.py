import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import math


class PathPlanner(Node):
    def __init__(self):
        super().__init__('path_planner')

        # Publisher to send velocity commands to turtlesim
        self.cmd_vel_pub = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)

        # Timer to update the turtle's velocity
        self.timer = self.create_timer(0.1, self.timer_callback)

        # Variable to store the selected trajectory
        self.trajectory = 'circle'  # Default to circle, you can pass this via launch parameters

        # Time tracking for trajectory calculation
        self.start_time = self.get_clock().now().seconds_nanoseconds()[0]

    def timer_callback(self):
        current_time = self.get_clock().now().seconds_nanoseconds()[0] - self.start_time

        # Choose the appropriate trajectory
        if self.trajectory == 'square':
            self.move_square(current_time)
        elif self.trajectory == 'star':
            self.move_star(current_time)
        elif self.trajectory == 'infinity':
            self.move_infinity(current_time)
        elif self.trajectory == 'circle':
            self.move_circle(current_time)

    def move_square(self, current_time):
        twist = Twist()
        twist.linear.x = 2.0
        twist.linear.y = 0.0
        twist.linear.z = 0.0
        twist.angular.x = 0.0
        twist.angular.y = 0.0
        twist.angular.z = 0.0
        self.cmd_vel_pub.publish(twist)
        time.sleep(1.2)
        twist = Twist()
        twist.linear.x = 0.0
        twist.linear.y = 0.0
        twist.linear.z = 0.0
        twist.angular.x = 0.0
        twist.angular.y = 0.0
        twist.angular.z = pi / 2
        self.cmd_vel_pub.publish(twist)
        time.sleep(1.2)

    def move_star(self, current_time):
        twist = Twist()
        segment_duration = 1.0  # Time for each segment of the star
        angle_duration = 0.5    # Time to rotate for the star's angle

        # Move forward for the segment
        if int(current_time // segment_duration) % 2 == 0:
            twist.linear.x = 1.0
            twist.angular.z = 0.0
        else:
            twist.linear.x = 0.0
            twist.angular.z = 4.0 * math.pi / 5  # Rotate by 144 degrees for the star

        self.cmd_vel_pub.publish(twist)

    def move_infinity(self, current_time):
        twist = Twist()
        frequency = 0.5  # Controls the speed of the infinity loop
        amplitude = 2.0  # Controls the size of the loop

        # Generate the figure-eight pattern using sine and cosine functions
        twist.linear.x = amplitude * math.cos(frequency * current_time)
        twist.angular.z = math.sin(frequency * current_time)

        self.cmd_vel_pub.publish(twist)

    def move_circle(self, current_time):
        twist = Twist()
        twist.linear.x = 1.0  # Constant forward speed
        twist.angular.z = 1.0  # Constant angular speed for a circle

        self.cmd_vel_pub.publish(twist)


def main(args=None):
    rclpy.init(args=args)
    path_planner = PathPlanner()

    # Set the desired trajectory from a parameter passed via launch
    # For simplicity, I'm using 'circle' as a placeholder here
    # In the launch file, you should pass the desired trajectory
    path_planner.trajectory = 'circle'  # This can be 'square', 'star', or 'infinity'

    rclpy.spin(path_planner)

    path_planner.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

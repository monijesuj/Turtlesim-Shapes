import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from std_srvs.srv import Empty
import math
from math import pi,cos,sin,tan,atan
import time

class PathPlanner(Node):
    def __init__(self):
        super().__init__('path_planner')
        self.publisher_ = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.srv_client = self.create_client(Empty, '/clear')
        self.declare_parameter('trajectory', 'circle')  # Default trajectory: circle
        self.trajectory = self.get_parameter('trajectory').get_parameter_value().string_value

        # Main loop for trajectory execution
        self.timer = self.create_timer(0.1, self.move_turtle)

    def move_turtle(self):
        msg = Twist()

        if self.trajectory == 'circle':
            msg.linear.x = 2.0
            msg.angular.z = 1.0  # Makes the turtle move in a circle
        elif self.trajectory == 'square':
            self.move_square(msg)
        elif self.trajectory == 'infinity_sign':
            self.move_infinity(msg)
        elif self.trajectory == 'star':
            self.move_star(msg)
        else:
            self.get_logger().info('Unknown trajectory')

        self.publisher_.publish(msg)

    def move_square(self, msg):
        msg.linear.x = 2.0
        msg.angular.z = 0.0
        # Implement logic for square movement
        # You can set up an internal state to alternate between moving straight and turning 90 degrees

    def move_infinity(self, msg):
        # Logic to follow an infinity shape path (figure 8)
        #msg.linear.x = 2.0
        #msg.angular.z = math.sin(rclpy.clock.Clock().now().nanoseconds / 1e9) * 2.0
        #curve
        msg.linear.x = 2.0
        msg.angular.z = 4.0
        self.publisher_.publish(msg)
        time.sleep(1.2)
        # stop
        msg.linear.x = 0.0
        msg.angular.z = 0.0
        self.publisher_.publish(msg)
        time.sleep(.5)
        #straight
        msg.linear.x = 2.0
        msg.angular.z = 0.0
        self.publisher_.publish(msg)
        time.sleep(1.2)
        #stop
        msg.linear.x = 0.0
        msg.angular.z = 0.0
        self.publisher_.publish(msg)
        time.sleep(.5)
        #curve opposite
        msg.linear.x = 2.0
        msg.angular.z = -4.0
        self.publisher_.publish(msg)
        time.sleep(1.2)
        #stop
        msg.linear.x = 0.0
        msg.angular.z = 0.0
        self.publisher_.publish(msg)
        time.sleep(.5)
        # straight
        msg.linear.x = 2.0
        msg.angular.z = 0.0
        self.publisher_.publish(msg)
        time.sleep(1.2)
        #stop
        msg.linear.x = 0.0
        msg.angular.z = 0.0
        self.publisher_.publish(msg)
        time.sleep(.5)

    def move_star(self, msg):
        # Logic to follow a star path
        pass  # Implement star trajectory

def main(args=None):
    rclpy.init(args=args)
    path_planner = PathPlanner()

    # Call the /clear service to reset the turtle environment
    while not path_planner.srv_client.wait_for_service(timeout_sec=1.0):
        path_planner.get_logger().info('/clear service not available, waiting...')

    clear_turtle = Empty.Request()
    path_planner.srv_client.call_async(clear_turtle)

    rclpy.spin(path_planner)
    path_planner.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

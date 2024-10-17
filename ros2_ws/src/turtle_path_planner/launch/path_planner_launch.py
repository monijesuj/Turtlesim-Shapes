from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument(
            'trajectory',
            default_value='circle',
            description='Trajectory for the turtle to follow'
        ),
        Node(
            package='turtle_path_planner',
            executable='path_planner',
            name='path_planner',
            parameters=[{'trajectory': LaunchConfiguration('trajectory')}],
            output='screen'
        )
    ])

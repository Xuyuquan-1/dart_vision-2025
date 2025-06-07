from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
        return LaunchDescription([
                Node(
                        package='resolve',
                        namespace='duck',
                        executable='resolve',
                        name='resolve_node'

                ),

                Node(
                        package='serial',
                        namespace='duck',
                        executable='serial',
                        name='serial_node'
                )
        ])
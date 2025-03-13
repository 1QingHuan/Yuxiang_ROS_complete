import os
import launch
import launch_ros
from ament_index_python.packages import get_package_share_directory
from launch.substitutions import LaunchConfiguration
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():
    fishbot_navigation2_dir = get_package_share_directory('fishbot_navigation2')
    nav2_bringup_dir = get_package_share_directory('nav2_bringup')

    rviz_config_file = os.path.join(nav2_bringup_dir, 'rviz', 'nav2_default_view.rviz')
    map_yaml = LaunchConfiguration('map')
    use_sim_time = LaunchConfiguration('use_sim_time')
    params_file = LaunchConfiguration('params_file')

    return launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            'use_sim_time', default_value='true',
            description='Use simulation time'),
        launch.actions.DeclareLaunchArgument(
            'map', default_value=os.path.join(fishbot_navigation2_dir, 'maps', 'room.yaml'),
            description='Full path to map file to load'),
        launch.actions.DeclareLaunchArgument(
            'params_file', default_value=os.path.join(fishbot_navigation2_dir, 'config', 'nav2_params.yaml'),
            description='Full path to param file to load'),

        launch.actions.IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(nav2_bringup_dir, 'launch', 'bringup_launch.py')),
            launch_arguments={
                'map': map_yaml,
                'use_sim_time': use_sim_time,
                'params_file': params_file
            }.items(),
        ),

        launch_ros.actions.Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            arguments=['-d', rviz_config_file],
            parameters=[{'use_sim_time': use_sim_time}],
            output='screen')
    ])

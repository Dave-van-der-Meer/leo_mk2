from setuptools import find_packages, setup
import os
from glob import glob
package_name = 'docker_stats'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch','*launch.[pxy][yma]')))

    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='alexandre.frantz',
    maintainer_email='alexandre.frantz@uni.lu',
    description='ROS2 Package to monitor resources for docker containers and publish for foxglove visualization',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        'docker_stats_node = docker_stats.docker_stats_node:main'
        ],
    },
)

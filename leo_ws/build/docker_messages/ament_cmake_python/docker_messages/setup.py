from setuptools import find_packages
from setuptools import setup

setup(
    name='docker_messages',
    version='0.0.0',
    packages=find_packages(
        include=('docker_messages', 'docker_messages.*')),
)

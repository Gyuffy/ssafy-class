from setuptools import find_packages
from setuptools import setup

setup(
    name='dobot_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('dobot_msgs', 'dobot_msgs.*')),
)

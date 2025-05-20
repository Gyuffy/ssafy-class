from setuptools import find_packages
from setuptools import setup

setup(
    name='dobot_driver',
    version='1.0.0',
    packages=find_packages(
        include=('dobot_driver', 'dobot_driver.*')),
)

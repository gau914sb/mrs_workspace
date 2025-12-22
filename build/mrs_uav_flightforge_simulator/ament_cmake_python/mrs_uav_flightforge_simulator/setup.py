from setuptools import find_packages
from setuptools import setup

setup(
    name='mrs_uav_flightforge_simulator',
    version='2.0.0',
    packages=find_packages(
        include=('mrs_uav_flightforge_simulator', 'mrs_uav_flightforge_simulator.*')),
)

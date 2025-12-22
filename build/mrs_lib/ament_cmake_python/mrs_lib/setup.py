from setuptools import find_packages
from setuptools import setup

setup(
    name='mrs_lib',
    version='2.0.0',
    packages=find_packages(
        include=('mrs_lib', 'mrs_lib.*')),
)

from setuptools import find_packages
from setuptools import setup

setup(
    name='robomas_plugins',
    version='0.0.1',
    packages=find_packages(
        include=('robomas_plugins', 'robomas_plugins.*')),
)

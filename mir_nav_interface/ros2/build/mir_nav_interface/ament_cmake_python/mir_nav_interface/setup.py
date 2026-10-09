from setuptools import find_packages
from setuptools import setup

setup(
    name='mir_nav_interface',
    version='0.0.0',
    packages=find_packages(
        include=('mir_nav_interface', 'mir_nav_interface.*')),
)

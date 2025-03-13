from setuptools import find_packages
from setuptools import setup

setup(
    name='autopatrol_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('autopatrol_interfaces', 'autopatrol_interfaces.*')),
)

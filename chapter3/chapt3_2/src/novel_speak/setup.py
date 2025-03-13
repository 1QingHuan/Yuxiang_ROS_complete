from setuptools import find_packages, setup

package_name = 'novel_speak'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=[
        'setuptools',
        'espeakng'
        ],
    zip_safe=True,
    maintainer='qing',
    maintainer_email='qing@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'novel_pub_node = novel_speak.novel_pub_node:main',
            'novel_sub_node = novel_speak.novel_sub_node:main',
        ],
    },
)

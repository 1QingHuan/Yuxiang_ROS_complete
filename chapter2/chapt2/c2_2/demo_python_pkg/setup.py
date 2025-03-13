from setuptools import find_packages, setup

package_name = 'demo_python_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='qing',
    maintainer_email='qing@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            # 当执行python_node时，会调用python_node.py文件中的main函数 
            'python_node = demo_python_pkg.python_node:main',
        ],
    },
)

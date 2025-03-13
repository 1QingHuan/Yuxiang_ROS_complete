from setuptools import find_packages, setup

package_name = 'demo_python_tf'

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
            "static_tf_broadcaster = demo_python_tf.static_tf_broadcaster:main",
            'dynamic_tf_broadcaster = demo_python_tf.dynamic_tf_broadcaster:main',
            'tf_listener = demo_python_tf.tf_listener:main'
        ],
    },
)

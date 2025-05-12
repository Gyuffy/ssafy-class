from setuptools import find_packages, setup
from glob import glob

package_name = "lecture"

setup(
    name=package_name,
    version="0.0.0",
    packages=find_packages(exclude=["test"]),
    data_files=[
        ("share/ament_index/resource_index/packages", ["resource/" + package_name]),
        ("share/" + package_name, ["package.xml"]),
        ("share/" + package_name + "/launch", glob("launch/*.launch.py")),
    ],
    install_requires=["setuptools"],
    zip_safe=True,
    maintainer="ssafy",
    maintainer_email="dan360@naver.com",
    description="TODO: Package description",
    license="TODO: License declaration",
    tests_require=["pytest"],
    entry_points={
        "console_scripts": [
            "qr_code_detection_node = lecture.qr_code_detection_node:main",
            "face_recognizer_node = lecture.face_recognizer_node:main",
            "subscriber = lecture.subscribe:main",
        ],
    },
)

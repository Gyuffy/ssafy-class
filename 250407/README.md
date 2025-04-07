# 240407 ROS 기반 통신 인터페이스 : ROS tool

## ros2 실행 명령어

### ros2 run

- 패키지 내에서 단일 노드를 실행할 때 사용
- 개별 노드를 테스트하거나 디버깅할 때 많이 활용
- `ros2 run <패키지명> <실행파일명>`
- 특징
    - 단일 노드 실행
    - 별도의 설정이나 환경 구성 없이 빠르게 실행 가능
    - 디버깅 및 테스트에 유용
- 실행파일명 명시는 `setup.py` 의 `console scripts` 에
- 나중에 완성된 node를 개별적으로 실행하지 않게끔 작업하게됨 ex) `ros2 launch` 이용

### ros2 launch

- 여러 노드를 동시에 실행
- 복잡한 시스템이나 다수의 노드를 동시에 실행할 때 사용
- `ros2 launch <패키지명> <실행파일명>`
- 특징
    - 여러 노드 실행
    - 파라미터 설정, 환경 설정 등 복잡한 구성 가능
    - ROS2 시스템의 전체적인 실행과 관리에 용이함
- `launch`는 노드뿐만 아니고 다른 launch 파일까지 실행시킬 수도 있다.

### rqt_console

- 습관을 들이면 개발시간을 단축가능
- GUI tool used to introspect log messages in ROS2

- `ros2 run rqt_console rqt_console`

![image.png](240407%20ROS%20%E1%84%80%E1%85%B5%E1%84%87%E1%85%A1%E1%86%AB%20%E1%84%90%E1%85%A9%E1%86%BC%E1%84%89%E1%85%B5%E1%86%AB%20%E1%84%8B%E1%85%B5%E1%86%AB%E1%84%90%E1%85%A5%E1%84%91%E1%85%A6%E1%84%8B%E1%85%B5%E1%84%89%E1%85%B3%20ROS%20tool%201ce6637ce9a180cbb19ecbd5cc198abd/image.png)

→ `ros2 run turtlesim turtlesim_node` 해보기

![image.png](240407%20ROS%20%E1%84%80%E1%85%B5%E1%84%87%E1%85%A1%E1%86%AB%20%E1%84%90%E1%85%A9%E1%86%BC%E1%84%89%E1%85%B5%E1%86%AB%20%E1%84%8B%E1%85%B5%E1%86%AB%E1%84%90%E1%85%A5%E1%84%91%E1%85%A6%E1%84%8B%E1%85%B5%E1%84%89%E1%85%B3%20ROS%20tool%201ce6637ce9a180cbb19ecbd5cc198abd/image%201.png)

실행되고 있는 노드의 정보가 표시됨 : `info` 

→ 거북이를 맵 끝까지 이동시켜보기

![image.png](240407%20ROS%20%E1%84%80%E1%85%B5%E1%84%87%E1%85%A1%E1%86%AB%20%E1%84%90%E1%85%A9%E1%86%BC%E1%84%89%E1%85%B5%E1%86%AB%20%E1%84%8B%E1%85%B5%E1%86%AB%E1%84%90%E1%85%A5%E1%84%91%E1%85%A6%E1%84%8B%E1%85%B5%E1%84%89%E1%85%B3%20ROS%20tool%201ce6637ce9a180cbb19ecbd5cc198abd/image%202.png)

Warning 메시지의 발생 : `warning`

- logger levels
    - Info
    - Warning
    - Fatal
    - Error
    - Debug

### Launching nodes

- `ros2 launch turtlesim multisim.launch.py`

![image.png](240407%20ROS%20%E1%84%80%E1%85%B5%E1%84%87%E1%85%A1%E1%86%AB%20%E1%84%90%E1%85%A9%E1%86%BC%E1%84%89%E1%85%B5%E1%86%AB%20%E1%84%8B%E1%85%B5%E1%86%AB%E1%84%90%E1%85%A5%E1%84%91%E1%85%A6%E1%84%8B%E1%85%B5%E1%84%89%E1%85%B3%20ROS%20tool%201ce6637ce9a180cbb19ecbd5cc198abd/image%203.png)

- `ros2 topic list -t`

![image.png](240407%20ROS%20%E1%84%80%E1%85%B5%E1%84%87%E1%85%A1%E1%86%AB%20%E1%84%90%E1%85%A9%E1%86%BC%E1%84%89%E1%85%B5%E1%86%AB%20%E1%84%8B%E1%85%B5%E1%86%AB%E1%84%90%E1%85%A5%E1%84%91%E1%85%A6%E1%84%8B%E1%85%B5%E1%84%89%E1%85%B3%20ROS%20tool%201ce6637ce9a180cbb19ecbd5cc198abd/image%204.png)

`turtlesim2` 까지 추가된 모습

## ROS2 프로젝트 설정

### Creating a workspace & package

- Source ROS2 environment
    - source /opt/ros/humble/setup.bash
- Create a new directory
    - mkdir -p ~/ros2_ws/src
    - cd ~/ros2_ws/src
- Create a package
    - ros2 pkg create —build-type ament_python —license Apache-2.0 <package_name>
- Build a package
    - cd ~/ros2_ws
    - colcon build
        
        → `source ~/.bashrc` 와 짝꿍처럼 사용하기
        
- Source the setup file
    - source install/local_setup.bash
- Use the package
    - ros2 run my_package my_node
- 생성 폴더/파일 목록 확인
- Customize package.xml
    
    → Python에서는 안 넣어도 실행하는데에 지장이 없어서 이 내용을 배제하고 설명
    

### Creating a custom msg and srv files

많이 안 씀

- Create a new package
- Create custom definitions
- … 등등

### msg, srv, action

1. `dobot magician ros2 humble` 검색
2. 제일 상단의 깃허브 페이지 이동 https://github.com/jkaniuka/magician_ros2
3. `./dobot_msgs` 이동 후 살펴보기

![image.png](240407%20ROS%20%E1%84%80%E1%85%B5%E1%84%87%E1%85%A1%E1%86%AB%20%E1%84%90%E1%85%A9%E1%86%BC%E1%84%89%E1%85%B5%E1%86%AB%20%E1%84%8B%E1%85%B5%E1%86%AB%E1%84%90%E1%85%A5%E1%84%91%E1%85%A6%E1%84%8B%E1%85%B5%E1%84%89%E1%85%B3%20ROS%20tool%201ce6637ce9a180cbb19ecbd5cc198abd/image%205.png)

![image.png](240407%20ROS%20%E1%84%80%E1%85%B5%E1%84%87%E1%85%A1%E1%86%AB%20%E1%84%90%E1%85%A9%E1%86%BC%E1%84%89%E1%85%B5%E1%86%AB%20%E1%84%8B%E1%85%B5%E1%86%AB%E1%84%90%E1%85%A5%E1%84%91%E1%85%A6%E1%84%8B%E1%85%B5%E1%84%89%E1%85%B3%20ROS%20tool%201ce6637ce9a180cbb19ecbd5cc198abd/image%206.png)

![image.png](240407%20ROS%20%E1%84%80%E1%85%B5%E1%84%87%E1%85%A1%E1%86%AB%20%E1%84%90%E1%85%A9%E1%86%BC%E1%84%89%E1%85%B5%E1%86%AB%20%E1%84%8B%E1%85%B5%E1%86%AB%E1%84%90%E1%85%A5%E1%84%91%E1%85%A6%E1%84%8B%E1%85%B5%E1%84%89%E1%85%B3%20ROS%20tool%201ce6637ce9a180cbb19ecbd5cc198abd/image%207.png)

## ROS2 RViz

### Introduction

- ROS에서 가장 강력한 툴
- 시각화
- RViz is a 3D visualizer for the Robot Operating System (ROS) framework.

### RViz tf2

- turtlebot demo를 통해 3개의 좌표계에 대한 이해

1. `ros2 run rviz2 rviz2`
2. `rviz2` 로 입력해도 실행가능

![image.png](240407%20ROS%20%E1%84%80%E1%85%B5%E1%84%87%E1%85%A1%E1%86%AB%20%E1%84%90%E1%85%A9%E1%86%BC%E1%84%89%E1%85%B5%E1%86%AB%20%E1%84%8B%E1%85%B5%E1%86%AB%E1%84%90%E1%85%A5%E1%84%91%E1%85%A6%E1%84%8B%E1%85%B5%E1%84%89%E1%85%B3%20ROS%20tool%201ce6637ce9a180cbb19ecbd5cc198abd/image%208.png)

1. Add 클릭 - 자주 사용하는 목록 : 축, 카메라, 뎁스, 이미지, 마커, 포인트클라우드2, 로봇 모델, TF
2. RobotModel 클릭 후 OK
3. Grid 열어보기, 숫자를 10 → 20으로 바꿔보기 : 맵의 사이즈 변환

![image.png](240407%20ROS%20%E1%84%80%E1%85%B5%E1%84%87%E1%85%A1%E1%86%AB%20%E1%84%90%E1%85%A9%E1%86%BC%E1%84%89%E1%85%B5%E1%86%AB%20%E1%84%8B%E1%85%B5%E1%86%AB%E1%84%90%E1%85%A5%E1%84%91%E1%85%A6%E1%84%8B%E1%85%B5%E1%84%89%E1%85%B3%20ROS%20tool%201ce6637ce9a180cbb19ecbd5cc198abd/image%209.png)

### urdf 실습

1. ros2_ws 에서 code 열기
2. simple_robot.urdf 생성

![image.png](240407%20ROS%20%E1%84%80%E1%85%B5%E1%84%87%E1%85%A1%E1%86%AB%20%E1%84%90%E1%85%A9%E1%86%BC%E1%84%89%E1%85%B5%E1%86%AB%20%E1%84%8B%E1%85%B5%E1%86%AB%E1%84%90%E1%85%A5%E1%84%91%E1%85%A6%E1%84%8B%E1%85%B5%E1%84%89%E1%85%B3%20ROS%20tool%201ce6637ce9a180cbb19ecbd5cc198abd/image%2010.png)

1. urdf 파일 작성

```xml
<?xml version="1.0"?>

<robot name ="simple_robot">
    <!-- Base link -->
    <link name="base_link">
        <visual>
            <geometry>
                <box size="1 1 0.5"/>
            </geometry>
            <material name="blue">
                <color rgba = "0 0 1 1"/>
            </material>
        </visual>
    </link>
</robot>
```

![image.png](240407%20ROS%20%E1%84%80%E1%85%B5%E1%84%87%E1%85%A1%E1%86%AB%20%E1%84%90%E1%85%A9%E1%86%BC%E1%84%89%E1%85%B5%E1%86%AB%20%E1%84%8B%E1%85%B5%E1%86%AB%E1%84%90%E1%85%A5%E1%84%91%E1%85%A6%E1%84%8B%E1%85%B5%E1%84%89%E1%85%B3%20ROS%20tool%201ce6637ce9a180cbb19ecbd5cc198abd/image%2011.png)

1. Fixed Frame까지 base_link로 바꿔주면 위와 같이 나온다

### 거북이 실습

1. `ros2 run turtlesim turtlesim_node` 실행
2. `ros2 pkg create --build-type ament_python tf_broadcaster` 로 src 폴더 내에 패키지 생성
3. `tf_broadcaster.py` 생성

```python
import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from tf2_ros import TransformBroadcaster
from geometry_msgs.msg import TransformStamped

class TFBroadCaster(Node):
    def __init__(self):
        super().__init__('turtle_tf_broadcaster')
        
        self.subscription = self.create_subscription(
            Pose,
            '/turtle1/pose',
            self.handle_turtle_pose,
            10
        )
        self.tf_broadcaster = TransformBroadcaster(self)
    
    def handle_turtle_pose(self, msg):
        t = TransformStamped()

        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'world'
        t.child_frame_id = 'turtle1'

        t.transform.translation.x = msg.x
        t.transform.translation.y = msg.y
        t.transform.translation.z = 0.0

        t.transform.rotation.x = 0.0
        t.transform.rotation.y = 0.0
        t.transform.rotation.z = 0.0
        t.transform.rotation.w = 1.0

        self.tf_broadcaster.sendTransform(t)

def main(args=None):
    rclpy.init(args=args)
    node = TFBroadCaster()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
```

1. [`setup.py`](http://setup.py) 작성 `'tf_broadcaster = tf_broadcaster.tf_broadcaster:main'`
2. `colcon build` 후 `source ~/.bashrc`
3. `ros2 run tf_broadcaster tf_broadcaster`
4. rviz에서 TF추가
5. `Fixed Frame` ’world’로 변경
6. `Grid` 다음과 같이 설정
    
    ![image.png](240407%20ROS%20%E1%84%80%E1%85%B5%E1%84%87%E1%85%A1%E1%86%AB%20%E1%84%90%E1%85%A9%E1%86%BC%E1%84%89%E1%85%B5%E1%86%AB%20%E1%84%8B%E1%85%B5%E1%86%AB%E1%84%90%E1%85%A5%E1%84%91%E1%85%A6%E1%84%8B%E1%85%B5%E1%84%89%E1%85%B3%20ROS%20tool%201ce6637ce9a180cbb19ecbd5cc198abd/image%2012.png)
    
7. `ros2 run turtlesim turtle_teleop_key`

![image.png](240407%20ROS%20%E1%84%80%E1%85%B5%E1%84%87%E1%85%A1%E1%86%AB%20%E1%84%90%E1%85%A9%E1%86%BC%E1%84%89%E1%85%B5%E1%86%AB%20%E1%84%8B%E1%85%B5%E1%86%AB%E1%84%90%E1%85%A5%E1%84%91%E1%85%A6%E1%84%8B%E1%85%B5%E1%84%89%E1%85%B3%20ROS%20tool%201ce6637ce9a180cbb19ecbd5cc198abd/image%2013.png)
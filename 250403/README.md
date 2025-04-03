# 250403 ROS 기반 통신 인터페이스 : ROS 환경구축

## ROS 소개

### ROS는 왜 필요한가?

- 로봇 개발 10년 경력자 → 만약 좋은 기회가 생겨 이직한다면 바로 적응할 수 있을까?
    
    → 적응하기 어렵다.
    
- 로봇을 여러 회사가 협업하여 개발한다면 → 각 회사가 보유한 역량이 다 다르다.
- 그래서 ROS가 필요하다.

### Robot Operating System

- 로봇 응용 프로그램 개발을 위한 운영체제와 같은 로봇 플랫폼
- 기존 로봇 개발 방식의 한계
    - 하드웨어 설계, 제어기, 제어, 시각화 등 모든 것을 개발해야 함
    - API마다 인터페이스가 다르고, 적용하는데 학습 시간이 필요
    - 하드웨어에 의존적인 소프트웨어는 로봇 변경시 수정이 필수적임

### Why ROS?

1. Global Community
    
    → 최대 장점, 많은 노하우의 누적
    
2. Proven in Use
3. Shorten Time to Market
4. Multi-domain
5. Multi-platform
6. 100% Open-source
7. Commercial Friendly
8. Industry Support

### ROS1 vs ROS2

- 아키텍처 및 설계 철학
- 보안
- 실시간 처리
- 운영 체제 지원
- 개발 및 유지보수
- 패키지 및 생태계
- 커뮤니티 지원

## 개발환경

### Ubuntu 22.04 + ROS2 Humble

- LTS(Long-Term Support)
    - 장기 지원 버전
- 최신 24.04 LTS와 ROS2 Jazzy를 왜 쓰지 않을까?
    - 배포된지 얼마 되지 않은 경우 장치, 부품 등의 제조사 SW 업데이트까지 시간 필요
    - 발생한 에러가 OS 업데이트 관련 이슈인 경우가 다수 발생

### 자주 사용하는 리눅스 기초 명령어

- `Ctrl + Alt + T` : Terminal 창 오픈
- `ls` : 현재 폴더 안에 있는 파일 목록 확인
- `cd` : 폴더 이동
- `sudo apt install <packaage>` : 필요한 패키지 설치
- `rm` : 파일 또는 폴더 삭제
- `cp` : 파일 또는 폴더 복사

### ROS2 Humble 설치

- https://docs.ros.org/en/humble/Installation.html
- 구글에서 ros2 humble install 검색하여 Ubuntu(Debian packages) 클릭
- 주의사항
    - 설치하면서 나오는 명령어를 모두 이해하려 너무 노력하지 말 것
    - 개발 과정에서 우리의 목적을 로봇 제어, 센서 데이터 처리, 시뮬레이터 등임을 주기적으로 상기시킬 것

**Set locale**

```bash
locale  # check for UTF-8

sudo apt update && sudo apt install locales
sudo locale-gen en_US en_US.UTF-8
sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
export LANG=en_US.UTF-8

locale  # verify settings
```

**Setup Soures**

```bash
sudo apt install software-properties-common
sudo add-apt-repository universe
```

```bash
sudo apt update && sudo apt install curl -y
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
```

```bash
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
```

**Install ROS 2 packages**

```bash
sudo apt update
```

```bash
sudo apt upgrade
```

```bash
sudo apt install ros-humble-desktop
```

```bash
sudo apt install ros-dev-tools
```

**Environment setup**

```bash
code ~/.bashrc
```

code 창의 맨 밑에 다음 행 추가

```bash
source /opt/ros/humble/setup.bash
```

터미널에서 다음 행 입력 후 완료

```bash
source ~/.bashrc
```
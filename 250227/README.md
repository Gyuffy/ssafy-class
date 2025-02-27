# 250227

# 코딩 테스트 대비

## 짚고 넘어가야 할 것들

### A형 테스트 전 여러분들이 암기해야 할 것

1. BFS
2. Kruskal
3. Dijkstra

### 변수를 반복문 안에서 선언하는 것은 어떠한가?

1. 차이는 미미한 수준
2. 하지만 엄청난 수준이 되는 경우가 있다!
    
    ⇒ 일반적인 변수는 상관 없는데,
    
    동적 할당을 하는 것을 이런 식으로 쓰는 경우
    

### 초기화 문제에 마주하는 상황

- `priority_queue`와 `queue`는 `claer()`가 없다.

```cpp
// pq와 q의 초기화 방안
void init()
{
while(!q.empty()) q.pop();
while(!pq.empty()) pq.pop();
}
```

# 대표 문제 풀이

## 5-8-2

### A형 유형 분석

SWEA 모의 SW 역량 테스트 문제를 볼 때 DFS 30%

BFS 20%

Queue 10%

시뮬레이션 40%

Dijkstra ???

but, 실제로는 Dijkstra 출제 비중이 50%!!!

### 등산 로봇
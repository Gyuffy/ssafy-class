import math
from collections import Counter


def euclidean_distance(point1, point2):
    distance = 0.0
    for i in range(len(point1)):
        distance += (point1[i] - point2[i]) ** 2
    return math.sqrt(distance)


def get_neighbors(train_data, test_point, k):
    distances = []
    for train_point in train_data:
        distance = euclidean_distance(test_point, train_point[:-1])
        distances.append((train_point, distance))
    distances.sort(key=lambda x: x[1])
    neighbors = [distances[i][0] for i in range(k)]
    return neighbors


def predict_classification(neighbors):
    labels = [neighbor[-1] for neighbor in neighbors]
    return Counter(labels).most_common(1)[0][0]


def knn(train_data, test_point, k):
    neighbors = get_neighbors(train_data, test_point, k)
    return predict_classification(neighbors)


train_data = [
    [300, 150, 50, 1.2, 20, "A"],
    [310, 145, 55, 1.3, 22, "A"],
    [290, 152, 48, 1.1, 19, "A"],
    [255, 90, 60, 0.8, 11, "B"],
    [250, 100, 62, 0.7, 10, "B"],
    [255, 96, 62, 0.85, 11.5, "B"],
    [260, 105, 59, 0.9, 13, "B"],
    [300, 160, 45, 1.2, 25, "A"],
    [285, 135, 68, 1.05, 16, "C"],
    [275, 120, 65, 1.0, 14, "C"],
    [295, 140, 72, 1.1, 17, "C"],
]

test_points = [
    [300, 140, 60, 1.1, 18],
    [270, 125, 66, 0.95, 14],
    [310, 155, 53, 1.4, 23],
]

k = 3

for i, test_point in enumerate(test_points):
    prediction = knn(train_data, test_point, k)
    print(f"Test point {i+1} {test_point} → 예측된 카테고리: {prediction}")

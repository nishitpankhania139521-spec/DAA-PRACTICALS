from itertools import permutations

def tsp(graph, start):
    n = len(graph)
    cities = list(range(n))
    cities.remove(start)

    min_cost = float("inf")
    best_path = []

    for p in permutations(cities):
        path = [start] + list(p) + [start]

        cost = 0
        for i in range(n):
            cost += graph[path[i]][path[i + 1]]

        if cost < min_cost:
            min_cost = cost
            best_path = path

    return min_cost, best_path


graph = [
    [0, 10, 15, 20],
    [10, 0, 35, 25],
    [15, 35, 0, 30],
    [20, 25, 30, 0]
]

cost, path = tsp(graph, 0)

print("Minimum Cost:", cost)
print("Best Path:", path)

def floyd_warshall(graph):
    # Number of vertices in the graph
    V = len(graph)
    # Initialize solution matrix same as input graph matrix
    dist = [list(row) for row in graph]
    
    # Standard three nested loops for Floyd-Warshall
    for k in range(V):
        for i in range(V):
            for j in range(V):
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j])
    return dist

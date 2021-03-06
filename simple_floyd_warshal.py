inf = float('inf')
def floyd_warshall(graph):
    n = len(graph)
    D = graph
    for k in range(n):
        for i in range(n):
            if i == k:
                continue
            for j in range(n):
                if j == k:
                    continue
                if i==j:
                    D[i][j] = 0
                else:
                    #print i,j,'comparison', D[i][j], D[i][k], '+', D[k][j]
                    D[i][j] = min(D[i][j], D[i][k] + D[k][j])
                    D[j][i] = D[i][j]
        #print D
    return D
N,M = map(int, raw_input().split(' '))
stations = raw_input().split(' ')
graph = [[inf for i in range(N)] for i in range(N)]
for m in range(M):
    (istr, jstr, wstr) = raw_input().split()
    i = stations.index(istr)
    j = stations.index(jstr)
    graph[i][j] = int(wstr)
    graph[j][i] = graph[i][j]

tcases = int(raw_input())
D = floyd_warshall(graph)
while tcases:
    istr, jstr = raw_input().split()
    i = stations.index(istr)
    j = stations.index(jstr)
    print D[i][j]
    tcases = tcases - 1

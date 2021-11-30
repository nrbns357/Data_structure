# def dfs(v):
#     visited[v] = True
#     print(v,end=' ')
#     for i in graph[v]:
#         if not visited[i]:
#             dfs(i)
#
#
# graph = [ #0번은 사용안함
#     [],
#     [2,3,8],
#     [1,7],
#     [1,4,5],
#     [3,5],
#     [3,4],
#     [7],
#     [2,6,8],
#     [1,7]
#
# ]
#
# visited = [0] * 9 # [0,0,0,0,0,0,0,0,0]
# dfs(1) # 1번 노드 부터 출발
#
# # 1 2 7 6 8 3 4 5
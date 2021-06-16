# Dijstra-s-Algorithm

The single source shortest path algorithm is dijkstras algorithm.
Dijkstra's algorithm is an algorithm for finding the shortest paths between nodes in a graph.road networks.
The code for its implementation is provided.

## time complexities of algorithm

Time Complexity of the implementation is O(V^2). If the input graph is represented using adjacency list, it can be reduced to O(E log V) with the help of binary heap. 

## Explaining  code

1)take input from user as n nodes and m edges.

2)take input in loop of m edges and weights on it(u,v,w).

3)store these in 2d vector or vector of arrays.

4)make an distance array to store distances, intialize in with constant infinity.

5)take the input source from user.

6)make the set of pair or vector to store the (weight , edge).

7)The minimum weight of adjacent edges of each node will be at the top.

8)insert source in set .Take top element of set at work on it in loop.print it out and update distance in dist array .go to its adjacent edge which has minimum weight among all adjacent edges.

9)check dis[node]>dis[privious]+present distance.
if its greater than update it with dis[privious]+present distance.

10)print out the distance array


## acknowledgement

A thanks to apna college for helping me out learning and understanding it.

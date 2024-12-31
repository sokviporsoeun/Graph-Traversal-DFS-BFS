# Week10-Graph-Traversal-DFS-BFS
#DFS and BFS traversal of graphs.
##Overview

This project implements graph traversal algorithms: Depth-First Search (DFS) and Breadth-First Search (BFS). The graph is represented using an adjacency list. The implementation demonstrates how these algorithms work and the order in which nodes are visited during traversal.

The graph used for traversal consists of 5 vertices (numbered 0 to 4) and the following edges:

-> Edges: (0, 1), (0, 4), (1, 2), (1, 3), (3, 4)

Graph Structure (Adjacency List)

0: 1 4 
1: 0 2 3 
2: 1 
3: 1 4 
4: 0 3 

##Depth-First Search (DFS)

#Process

DFS starts at a specified vertex (in this case, vertex 0).

It explores as far as possible along each branch before backtracking.

A stack is used to manage the traversal process, ensuring the last-in, first-out (LIFO) order.

#Results

For the given graph, DFS starting from vertex 0 produces the following traversal order:

-> 0 4 3 1 2

#Insights

DFS dives "deep" into the graph, exploring a branch completely before moving to another branch.

The traversal order is influenced by the adjacency list and the stack's behavior.

Reverse iteration ensures consistent traversal order when there are multiple neighbors.

##Breadth-First Search (BFS)

#Process

BFS starts at a specified vertex (in this case, vertex 0).

It explores all neighbors of a node before proceeding to the next depth level.

A queue is used to manage the traversal process, ensuring the first-in, first-out (FIFO) order.

#Results

For the given graph, BFS starting from vertex 0 produces the following traversal order:

-> 0 1 4 2 3

#Insights

BFS explores nodes level by level, making it ideal for finding the shortest path in an unweighted graph.

The traversal order depends on the adjacency list and the queue's behavior.



#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <stack>

class Graph {
private:

    int V;
    std::vector<std::vector<int>> adj;

public:
    Graph(int V) : V(V), adj(V) {}

    void addEdge(int u, int v) {
        adj[u].push_back(v);
    }

    void DFS(int s) {
        std::vector<bool> visited(V, false);
        std::stack<int> stack;
        stack.push(s);
        visited[s] = true;

        while (!stack.empty()) {
            int u = stack.top();
            stack.pop();
            std::cout << u << " ";

            for (int v : adj[u]) {
                if (!visited[v]) {
                    visited[v] = true;
                    stack.push(v);
                }
            }
        }
    }

    void BFS(int s) {
        std::vector<bool> visited(V, false);
        std::queue<int> queue;
        queue.push(s);
        visited[s] = true;

        while (!queue.empty()) {
            int u = queue.front();
            queue.pop();
            std::cout << u << " ";

            for (int v : adj[u]) {
                if (!visited[v]) {
                    visited[v] = true;
                    queue.push(v);
                }
            }
        }
    }
};

#endif

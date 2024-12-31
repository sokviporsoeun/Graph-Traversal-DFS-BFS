#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>

using namespace std;

class Graph {
private:
    int V;  
    vector<std::list<int>> adj; 

public:
    
    Graph(int V) : V(V), adj(V) {}

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);  
    }

    void Display() {
        cout << "Graph Structure (Adjacency List):" << std::endl;
        for (int i = 0; i < V; ++i) {
            cout << i << ": ";
            for (int neighbor : adj[i]) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }

    void DFS(int s) {
        vector<bool> visited(V, false);
        stack<int> stack;
        stack.push(s);
        visited[s] = true;

        cout << "Depth-First Search (DFS) starting from vertex 0: ";
        while (!stack.empty()) {
            int u = stack.top();
            stack.pop();
            cout << u << " ";

            for (auto it = adj[u].rbegin(); it != adj[u].rend(); ++it) {  // Iterate in reverse order for consistent output
                if (!visited[*it]) {
                    visited[*it] = true;
                    stack.push(*it);
                }
            }
        }
        cout << endl;
    }

    void BFS(int s) {
        vector<bool> visited(V, false);
        queue<int> queue;
        queue.push(s);
        visited[s] = true;

        cout << "Breadth-First Search (BFS) starting from vertex 0: ";
        while (!queue.empty()) {
            int u = queue.front();
            queue.pop();
            cout << u << " ";

            for (int v : adj[u]) {
                if (!visited[v]) {
                    visited[v] = true;
                    queue.push(v);
                }
            }
        }
        cout << endl;
    }
};

#endif

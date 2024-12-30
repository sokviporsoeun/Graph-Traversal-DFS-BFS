#include <iostream>
#include "Graph.hpp"


int main() {
    int V = 5;
    Graph g(V);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(3, 4);

    std::cout << "Depth First Traversal (starting from vertex 0): ";
    g.DFS(0);
    std::cout << std::endl;

    std::cout << "Breadth First Traversal (starting from vertex 0): ";
    g.BFS(0);
    std::cout << std::endl;

    return 0;
}

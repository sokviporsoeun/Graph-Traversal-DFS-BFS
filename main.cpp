#include <iostream>
#include "Graph.hpp"

int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(3, 4);

    g.Display();

    g.DFS(0);
    g.BFS(0);

    return 0;
}

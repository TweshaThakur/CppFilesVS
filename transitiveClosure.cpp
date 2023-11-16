#include <iostream>
#include <vector>

void transitiveClosure(std::vector<std::vector<int>>& graph, int V) {
    std::vector<std::vector<int>> reach(V, std::vector<int>(V, 0));

    // Initialize reach matrix with the original graph
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            reach[i][j] = graph[i][j];
        }
    }

    // Update the reach matrix
    for (int k = 0; k < V; ++k) {
        for (int i = 0; i < V; ++i) {
            for (int j = 0; j < V; ++j) {
                reach[i][j] = reach[i][j] || (reach[i][k] && reach[k][j]);
            }
        }
    }

    // Print the transitive closure matrix
    std::cout << "Transitive Closure Matrix:\n";
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            std::cout << reach[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int main() {
    int V;
    std::cout << "Enter the number of vertices: ";
    std::cin >> V;

    std::vector<std::vector<int>> graph(V, std::vector<int>(V));

    std::cout << "Enter the adjacency matrix:\n";
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            std::cin >> graph[i][j];
        }
    }

    transitiveClosure(graph, V);

    return 0;
}

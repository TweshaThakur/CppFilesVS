#include <iostream>
#include <vector>
#include <climits>

void floydWarshall(std::vector<std::vector<int>>& graph, int V) {
    std::vector<std::vector<int>> dist(graph);

    for (int k = 0; k < V; ++k) {
        for (int i = 0; i < V; ++i) {
            for (int j = 0; j < V; ++j) {
                if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX && dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    // Print the final distance matrix
    std::cout << "Shortest Distance Matrix:\n";
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            if (dist[i][j] == INT_MAX) {
                std::cout << "INF ";
            } else {
                std::cout << dist[i][j] << " ";
            }
        }
        std::cout << "\n";
    }
}

int main() {
    int V;
    std::cout << "Enter the number of vertices: ";
    std::cin >> V;

    std::vector<std::vector<int>> graph(V, std::vector<int>(V));

    std::cout << "Enter the weighted adjacency matrix (use INT_MAX for infinity):\n";
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            std::cin >> graph[i][j];
        }
    }

    floydWarshall(graph, V);

    return 0;
}

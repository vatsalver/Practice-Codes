#include <iostream>
#include <queue>
#include <vector>
#include <unordered_set>

using namespace std;

// Graph class representing an undirected graph using an adjacency list
class Graph
{
public:
    int vertices;                      // Number of vertices
    vector<vector<int>> adjacencyList; // Adjacency list to store edges

    // Constructor
    Graph(int v) : vertices(v), adjacencyList(v) {}

    // Function to add an edge to the graph
    void addEdge(int v, int w)
    {
        adjacencyList[v].push_back(w);
        adjacencyList[w].push_back(v); // Assuming an undirected graph
    }

    // Function to perform BFS traversal starting from a given vertex
    void BFS(int startVertex)
    {
        // Mark all vertices as not visited
        vector<bool> visited(vertices, false);

        // Create a queue for BFS
        queue<int> bfsQueue;

        // Mark the current node as visited and enqueue it
        visited[startVertex] = true;
        bfsQueue.push(startVertex);

        while (!bfsQueue.empty())
        {
            // Dequeue a vertex from the queue and print it
            int currentVertex = bfsQueue.front();
            cout << currentVertex << " ";
            bfsQueue.pop();

            // Get all adjacent vertices of the dequeued vertex
            for (int adjacentVertex : adjacencyList[currentVertex])
            {
                // If the adjacent vertex is not visited, mark it as visited and enqueue it
                if (!visited[adjacentVertex])
                {
                    visited[adjacentVertex] = true;
                    bfsQueue.push(adjacentVertex);
                }
            }
        }
    }
};

int main()
{
    // Create a sample graph
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 3);
    g.addEdge(1, 2);
    g.addEdge(1, 4);
    g.addEdge(2, 4);
    g.addEdge(3, 5);

    cout << "BFS traversal starting from vertex 0: ";
    g.BFS(0);

    return 0;
}

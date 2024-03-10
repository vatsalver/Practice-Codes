#include <iostream>
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

    // Recursive function for DFS traversal
    void DFSUtil(int currentVertex, vector<bool> &visited)
    {
        // Mark the current node as visited and print it
        visited[currentVertex] = true;
        cout << currentVertex << " ";

        // Recur for all adjacent vertices
        for (int adjacentVertex : adjacencyList[currentVertex])
        {
            if (!visited[adjacentVertex])
            {
                DFSUtil(adjacentVertex, visited);
            }
        }
    }

    // Function to perform DFS traversal starting from a given vertex
    void DFS(int startVertex)
    {
        // Mark all vertices as not visited
        vector<bool> visited(vertices, false);

        // Call the recursive helper function to perform DFS traversal
        DFSUtil(startVertex, visited);
    }
};

int main()
{
    // Create a sample graph
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 4);
    g.addEdge(3, 5);

    cout << "DFS traversal starting from vertex 0: ";
    g.DFS(0);

    return 0;
}

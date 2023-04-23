#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// define edge structure to store the edge and its weight
struct Edge {
    int u, v, w;
};

// function to compare two edges based on their weights
bool cmp(Edge a, Edge b) {
    return a.w < b.w;
}

// function to find the parent of a node in the disjoint set
int find(int x, vector<int>& parent) {
    if (parent[x] == x)
        return x;
    return parent[x] = find(parent[x], parent);
}

// function to perform union operation on two disjoint sets
void unite(int x, int y, vector<int>& parent) {
    parent[find(x, parent)] = find(y, parent);
}

// main function to find the minimal spanning tree
int main() {
    // initialize the edge list
    vector<Edge> edges = {
        {1, 2, 10}, {1, 4, 12},
        {2, 3, 15}, {2, 5, 18},
        {3, 4, 20}, {3, 5, 8}, {3, 6, 14},
        {4, 5, 5}, {4, 6, 50},
        {5, 7, 11},
        {6, 7, 17}
    };
    
    // sort the edges in increasing order of weights
    sort(edges.begin(), edges.end(), cmp);
    
    // initialize the parent array for disjoint set
    vector<int> parent(8);
    for (int i = 1; i <= 7; i++)
        parent[i] = i;
    
    // initialize variables to store the MST and its weight
    vector<Edge> mst;
    int mstWeight = 0;
    
    // iterate through all the edges in increasing order of weights
    for (Edge e : edges) {
        // if the edge connects two disjoint sets, add it to the MST
        if (find(e.u, parent) != find(e.v, parent)) {
            mst.push_back(e);
            mstWeight += e.w;
            unite(e.u, e.v, parent);
        }
    }
    
    // print the edges and their weights in the MST
    cout << "Edges in the minimal spanning tree:" << endl;
    for (Edge e : mst)
        cout << "(" << e.u << ", " << e.v << ") " << e.w << endl;
    
    // print the total weight of the MST
    cout << "Total weight of the minimal spanning tree: " << mstWeight << endl;
    
 return 0;
}
// #include <vector>
// #include <unordered_set>

// class Solution {
// public:
//     bool validTree(int n, std::vector<std::vector<int>>& edges) {
//         // Check for the number of edges
//         if (edges.size() != n - 1) {
//             return false;  // A tree must have exactly n-1 edges
//         }

//         // Create an adjacency list to represent the graph
//         std::vector<std::unordered_set<int>> adjList(n);
//         for (const auto& edge : edges) {
//             adjList[edge[0]].insert(edge[1]);
//             adjList[edge[1]].insert(edge[0]);
//         }

//         // Use a set to keep track of visited nodes during DFS
//         std::unordered_set<int> visited;
        
        

//         // Check if the graph is acyclic and fully connected
//         if (!dfs(0, -1, adjList, visited) || visited.size() != n) {
//             return false;
//         }
    
//         return true;
//     }

// private:
//     bool dfs(int node, int parent, const std::vector<std::unordered_set<int>>& adjList, std::unordered_set<int>& visited) {
//         if (visited.count(node)) {
//             return false;  // Detected a cycle
//         }

//         visited.insert(node);

//         for (int neighbor : adjList[node]) {
//             if (neighbor != parent && !dfs(neighbor, node, adjList, visited)) {
//                 return false;
//             }
//         }

//         return true;
//     }
// };

// #include <iostream>
// #include <vector>

// int main() {
//     Solution solution;

//     // Example 1: Valid Tree
//     int n1 = 5;
//     std::vector<std::vector<int>> edges1 = {{0, 1}, {0, 2}, {0, 3}, {1, 4}};
//     bool result1 = solution.validTree(n1, edges1);
//     std::cout << "Example 1 is " << (result1 ? "valid" : "invalid") << " tree.\n";

//     // Example 2: Invalid Tree (contains a cycle)
//     int n2 = 5;
//     std::vector<std::vector<int>> edges2 = {{0, 1}, {1, 2}, {2, 3}, {3, 4}, {4, 0}};
//     bool result2 = solution.validTree(n2, edges2);
//     std::cout << "Example 2 is " << (result2 ? "valid" : "invalid") << " tree.\n";

//     // Example 3: Invalid Tree (not fully connected)
//     int n3 = 4;
//     std::vector<std::vector<int>> edges3 = {{0, 1}, {2, 3}};
//     bool result3 = solution.validTree(n3, edges3);
//     std::cout << "Example 3 is " << (result3 ? "valid" : "invalid") << " tree.\n";

//     return 0;
// }


#include <iostream>
#include <vector>
 
using namespace std;

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr;

    for (int i = 0; i <= 5; i++) {
        arr.push_back(i);
    }

    cout << "Output of vector elements: ";
    for (auto i = arr.begin(); i != arr.end(); ++i) {
        cout << *i << " ";
    }

    return 0;
}

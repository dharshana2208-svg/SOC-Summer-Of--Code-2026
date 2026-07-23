#include <iostream>
#include <vector>
#include <string>

using namespace std;

int fun(int current_node, const vector<vector<int>>& children, const string& node_colors, int& total_balanced_subtrees) {
    int balance = (node_colors[current_node] == 'W') ? 1 : -1;

    for (int child : children[current_node]) {
        balance += fun(child, children, node_colors, total_balanced_subtrees);
    }

    if (balance == 0) {
        total_balanced_subtrees++;
    }

    return balance;
}

int main(){
    int test_cases;
    cin >> test_cases;
    
    while (test_cases--) {
        int num_vertices;
        cin >> num_vertices;

        vector<vector<int>> children(num_vertices + 1);

        for (int current_node = 2; current_node <= num_vertices; ++current_node) {
            int parent;
            cin >> parent;
            children[parent].push_back(current_node);
        }

        string node_colors;
        cin >> node_colors;
        
        node_colors = " " + node_colors;

        int total_balanced_subtrees = 0;
        fun(1, children, node_colors, total_balanced_subtrees);
        cout << total_balanced_subtrees << "\n";
    }
}
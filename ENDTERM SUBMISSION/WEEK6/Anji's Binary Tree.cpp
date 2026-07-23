#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Node {
    int left_child = 0;
    int right_child = 0;
};
vector<Node> tree;
string labels;
int find_min_changes(int current_node) {
    int left = tree[current_node].left_child;
    int right = tree[current_node].right_child;

    if (left == 0 && right == 0) {
        return 0;
    }

    int cost_to_leaf = 1e9;

    if (left != 0) {
        int direction_cost = (labels[current_node - 1] == 'L') ? 0 : 1;
        cost_to_leaf = min(cost_to_leaf, direction_cost + find_min_changes(left));
    }

    if (right != 0) {
        int direction_cost = (labels[current_node - 1] == 'R') ? 0 : 1;
        cost_to_leaf = min(cost_to_leaf, direction_cost + find_min_changes(right));
    }

    return cost_to_leaf;
}
int main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int total_nodes;
        cin >> total_nodes;
        cin >> labels;

        tree.assign(total_nodes + 1, Node());

        for (int i = 1; i <= total_nodes; ++i) {
            cin >> tree[i].left_child >> tree[i].right_child;
        }

        cout << find_min_changes(1) << "\n";
    }
}
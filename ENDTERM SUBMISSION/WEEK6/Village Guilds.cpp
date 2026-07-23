#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct VillageTracker {
    int total_houses;
    vector<vector<int>> tree;
    vector<int> max_depth_reached;
    long long unique_guilds_count;

    VillageTracker(int houses) {
        total_houses = houses;
        tree.resize(houses);
        max_depth_reached.resize(houses, 0);
        unique_guilds_count = houses; 
    }

    void add_edge(int parent, int child) {
        tree[parent].push_back(child);
    }

    void explore_village(int current_house, int current_depth) {
        max_depth_reached[current_house] = current_depth;

        int deepest_branch = current_depth;
        int second_deepest_branch = current_depth;

        for (int child : tree[current_house]) {
            explore_village(child, current_depth + 1);

            max_depth_reached[current_house] = max(max_depth_reached[current_house], max_depth_reached[child]);

            int child_reach = max_depth_reached[child];

            if (child_reach >= deepest_branch) {
                second_deepest_branch = deepest_branch;
                deepest_branch = child_reach;
            } else if (child_reach >= second_deepest_branch) {
                second_deepest_branch = child_reach;
            }
        }

        if (second_deepest_branch > current_depth) {
            int new_layers_discovered = second_deepest_branch - current_depth;
            unique_guilds_count += new_layers_discovered;
        }
    }

    long long get_total_guilds() {
        explore_village(0, 0);
        return unique_guilds_count;
    }
};

int main() {

    int total_testcases;
    if (cin >> total_testcases) {
        while (total_testcases--) {
            int total_houses;
            cin >> total_houses;

            VillageTracker tracker(total_houses);

            for (int child_house = 1; child_house < total_houses; ++child_house) {
                int parent_house;
                cin >> parent_house;
                --parent_house; 
                tracker.add_edge(parent_house, child_house);
            }

            cout << tracker.get_total_guilds() << "\n";
        }
    }
}
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int r;
    if (!(cin >> r)) return 0;
    
    while (r--) {
        int n;
        cin >> n;
        
        map<int, long long> first;
        for (int j = 0; j < n; j++) {
            int val;
            cin >> val;
            first[val]++;
        }
        
        long long result = 0;
        for (map<int, long long>::iterator it = first.begin(); it != first.end(); ++it) {
            long long count = it->second;
            if (count >= 2) {
                result += (count * (count - 1)) / 2;
            }
        }
        
        if (first.count(1) && first.count(2)) {
            result += first[1] * first[2];
        }
        
        cout << result << "\n";
    }
    
    return 0;
}

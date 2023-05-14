#include <iostream>
#include <vector>
using namespace std;

int main(){
    int budget, keyboardsCount, drivesCount;
    cin >> budget >> keyboardsCount >> drivesCount;
    vector<int> keyboards(keyboardsCount), drives(drivesCount);
    for (int i = 0; i < keyboardsCount; i++) cin >> keyboards[i];
    for (int i = 0; i < drivesCount; i++) cin >> drives[i];

    int max_cost = -1;
    for (int i = 0; i < keyboardsCount; i++) {
        for (int j = 0; j < drivesCount; j++) {
            int cost = keyboards[i] + drives[j];
            if (cost <= budget) max_cost = max(max_cost, cost);
        }
    }
    cout << max_cost << endl;
    return 0;
}
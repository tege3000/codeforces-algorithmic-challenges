#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int num;
    int sum = 0;
    int index = 0;
    
    vector<int> v1;
    
    for(int i = 0; i < 7; i++) {
        cin >> num;
        v1.push_back(num);
    }
    
    while(sum < n) {
        for(int i = 0; i < 7; i++) {
            if(sum >= n) {
                break;
            }
            
            sum += v1[i];
            index = i+1;
        }
    }
    
    cout << index << endl;
}


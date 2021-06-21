#include <iostream>
#include <cmath>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int findLHS(vector<int>& nums) {
        int m = 0;
        unordered_map <int, int> umap;
        for (int i = 0; i < nums.size(); i++) {
            umap[nums[i]]++;

            // if (umap.find(nums[i]) == umap.end() && umap.find(nums[i]-1) == umap.end()) { 
            //     umap[nums[i]-1] = 1;
            //     umap[nums[i]] = 1;
            // } else { // if int found, increment count
            //     umap[nums[i]]++;
            //     umap[nums[i]-1]++;
            //     int maxOf2 = max(umap[nums[i]], umap[nums[i-1]]);
            //     if (maxOf2 > m) m = maxOf2;
            // }
            
        }

        for (auto x : umap) {
            if (umap.find(x.first+1) != umap.end()) {
                m = max(m, x.second + umap.find(x.first+1)->second);
            }
        }
        
                    
        unordered_map<int, int>:: iterator itr; 
        for (itr = umap.begin(); itr != umap.end(); itr++) cout << itr->first << "  " << itr->second << endl; 
    
        return m;
    }
};

int main() {
    Solution ob;
    vector<int> v  = {3,1,2,2,5,2,3,7};
    cout << ob.findLHS(v) << endl;
    return 0;
}
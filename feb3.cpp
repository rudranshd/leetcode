#include <iostream>
#include <unordered_map>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *howdy = head;
        unordered_map <int, int> umap;
        int i = 0;
        while (howdy) {
            if (umap.find(head->val) == umap.end())  // if val not found, add to map
                umap[head->val] = i;
            else {
                
            }
            howdy = howdy->next;
                
            
        }
    }
};

int main() {
    return 0;
}
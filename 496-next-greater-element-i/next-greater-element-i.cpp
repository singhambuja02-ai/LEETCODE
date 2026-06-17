

class Solution {
public:
    std::vector<int> nextGreaterElement(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::unordered_map<int, int> next_greater;
        std::stack<int> st;
        
        
        for (int i = nums2.size() - 1; i >= 0; --i) {
            int current = nums2[i];
            
            
            while (!st.empty() && st.top() <= current) {
                st.pop();
            }
            
            
            if (st.empty()) {
                next_greater[current] = -1;
            } else {
                next_greater[current] = st.top();
            }
            
            
            st.push(current);
        }
        
        
        std::vector<int> ans;
        for (int num : nums1) {
            ans.push_back(next_greater[num]);
        }
        
        return ans;
    }
};
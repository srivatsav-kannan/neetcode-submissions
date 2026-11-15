class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> st;
        for (int a:nums){
            st.insert(a);
        }
        return (st.size() != nums.size());
    }
};
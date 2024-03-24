class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        if(nums.size()<=2){
            return nums;
        }
         vector<int> even_indices, odd_indices;
    
    
    for (int i = 0; i < nums.size(); ++i) {
        if (i % 2 == 0)
            even_indices.push_back(nums[i]);
        else
            odd_indices.push_back(nums[i]);
    }

    
    sort(odd_indices.rbegin(), odd_indices.rend());


    sort(even_indices.begin(), even_indices.end());

    
    for (int i = 0, j = 0; i < nums.size(); i += 2, ++j) {
        nums[i] = even_indices[j];
    }
    for (int i = 1, j = 0; i < nums.size(); i += 2, ++j) {
        nums[i] = odd_indices[j];
    }

    return nums;
        
    }
};
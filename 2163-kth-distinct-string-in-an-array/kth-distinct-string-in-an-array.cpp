class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<int>ok;
        k-=1;
        for(int i=0;i<arr.size();i++){
            //cout<<arr[i]<<" "<<mp[arr[i]]<<"/ ";
            if(mp[arr[i]]==1 and k!=0){
                k--;
            }
            else if(mp[arr[i]]==1 and k==0){
                return arr[i];
            }
        }
        return "";
    }
};
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        vector<int>v1(arr.size(), 0);
        stack<pair<int,int>>st;
        for(int i=0;i<arr.size();i++){
            int flag=0;
            //for(int j=i+1;j<arr.size();j++){
                if(st.empty()){
                    st.push(make_pair(arr[i],i));
                }
                else if(!st.empty()){
                    if(st.top().first>arr[i]){
                        st.push(make_pair(arr[i],i));
                    }
                    else {
    while (!st.empty() && st.top().first < arr[i]) {
        v1[st.top().second] = i - st.top().second;
        st.pop();
    }
    st.push(make_pair(arr[i], i));
}

                }

            //}
            
        }
        //v1.push_back(0);
        return v1;
    }
};
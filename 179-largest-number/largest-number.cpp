class Solution {
public:
static bool fun(string a, string b){
	    string t1 = a+b;
	    string t2 = b+a;
	    return t1>t2;
	}
    string largestNumber(vector<int>& arr) {
         string s = "";
         vector<string>ok;
        for(auto it : arr){
	        ok.push_back(to_string(it));
	    }
	    sort(ok.begin(),ok.end(),fun);
	    for(auto it : ok){
            if(s=="0" and it=="0"){
                continue;
            }
	        s += it;
	    }
	    return s;
    }
};
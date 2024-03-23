class Solution {
public:
bool self(int n){
    if (n == 0) {
    return false;
  }

  int temp = n;
  while (temp > 0) {
    int digit = temp % 10;
    if (digit == 0 || n % digit != 0) {
      return false;
    }
    temp /= 10;
  }

  return true;
}
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v1;
        for(int i=left;i<=right;i++){
            if(self(i)){
                v1.push_back(i);
            }
        }
        return v1;
    }
};
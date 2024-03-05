class RandomizedSet {
public:
    //map<int,int>mp;
    unordered_map<int,int>mp1;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
         if(mp1.find(val)==mp1.end()){
            
            mp1[val]=1;
            return true;
        }
            return false;
        
    }
    
    bool remove(int val) {
        if(mp1.find(val)==mp1.end()){
            return false;
        }
        else{
            
            mp1.erase(val);
            return true;
        }
    }
    
    int getRandom() {
        if(!mp1.empty()){
         auto it = next(begin(mp1), rand() % mp1.size());
         return it->first;
         }
        return 0;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
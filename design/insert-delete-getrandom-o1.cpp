class RandomizedSet {
public:
    RandomizedSet() {
        
    }

    vector<int> getRandomVector;
    unordered_map<int, int> getRandomMap;
    
    bool insert(int val) {
        if (find(getRandomVector.begin(), getRandomVector.end(), val) != getRandomVector.end()) {
            //value exists
            return false;
        }

        getRandomVector.push_back(val);
        getRandomMap[val] = getRandomVector.size() - 1;
        return true;
    }
    
    bool remove(int val) {
        if (find(getRandomVector.begin(), getRandomVector.end(), val) == getRandomVector.end()) {
            //doesnt exists
            return false;
        }

        int lasValue = getRandomVector.back();
        int index = getRandomMap[val];

        getRandomMap[lasValue] = index;
        getRandomVector[index] = lasValue;

        getRandomVector.pop_back();
        getRandomMap.erase(val);

        return true;
    }
    
    int getRandom() {
        return getRandomVector[rand() % getRandomVector.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
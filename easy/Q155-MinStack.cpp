/**
 * @file Q155-MinStack.cpp
 * @author Ryo-Ura
 * @brief   This implementation of the stack uses vector, which Im not sure is allowed to do.
 *              Runtime: 202 ms, faster than 5.03% of C++ online submissions for Min Stack.
 *              Memory Usage: 16.2 MB, less than 99.04% of C++ online submissions for Min Stack.
 * 
 *          
 * @version 0.1
 * @date 2022-05-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <math.h>
#include <utility>
#include <limits>
#include <unordered_set>

using namespace std;

class MinStack {
public:
    vector<int> myVec;
    MinStack() {
        vector<int>* toMyVec = &myVec;
    }
    
    void push(int val) {
        myVec.push_back(val);
    }
    
    void pop() {
        myVec.pop_back();
    }
    
    int top() {
        return myVec.back();
    }
    
    int getMin() {
        return *min_element(myVec.begin(), myVec.end());
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
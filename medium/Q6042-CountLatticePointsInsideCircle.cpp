/**
 * @file Q6042-CountLatticePointsInsideCircle.cpp
 * @author Ryo-Ura
 * @brief   from Weekly Contest 290
 *          O(nlog(n)) im not so certain about this.
 * @version 0.1
 * @date 2022-04-23
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

using namespace std;
class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        int x, y, r;
        int numCircles = circles.size();
        set<pair<int, int>> list;
        for (int i = 0; i < numCircles; i++)
        {
            x = circles[i][0];
            y = circles[i][1];
            r = circles[i][2];
            filter(x, y, r, list);
        }
        return list.size();
    }
    void filter(int x, int y, int r, set<pair<int, int>>& ret){

        pair<int, int> centre = make_pair(x,y);
        pair<int, int> ll = make_pair(x-r, y-r);
        pair<int, int> tr = make_pair(x+r, y+r);

        for (int x_coord = ll.first; x_coord <= tr.first; x_coord++)
        {
            for (int y_coord = ll.second; y_coord <= tr.second; y_coord++)
            {
                double dist = sqrt(pow(centre.first-x_coord, 2) + pow(centre.second-y_coord, 2));
                if (dist <= r)
                {
                    ret.insert(make_pair(x_coord, y_coord));
                }
            }
        }
    }
};
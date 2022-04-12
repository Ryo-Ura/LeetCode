/**
 * @file FindPlayersWithZeroOrOneLosses.cpp
 * @author Ryo-Ura
 * @brief   Runtime: 1296 ms
 *          Memory Usage: 196.4 MB
 *          O(n)
 * @version 0.1
 * @date 2022-04-11
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
using namespace std;

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        set<int> players;
        map<int, int> lose;
        for(int i = 0; i < matches.size(); i++){
            players.insert(matches[i][0]);
            players.insert(matches[i][1]);
            lose[matches[i][1]]++;
        }
        vector<int> winner;
        vector<int> loser;
        for(int player : players){
            if(lose[player] == 0){
                winner.push_back(player);
            }
            if(lose.find(player)->second == 1){
                loser.push_back(player);
            }
        }
        vector<vector<int>> ret;
        ret.push_back(winner);
        ret.push_back(loser);
        return ret;
    }
};

int main()
{
    vector<vector< int> > a = {{2,3}, {4,6}};
    // int * [int*] v = [[1,2],[1,3],[1,5],[1,9],[1,11],[2,4],[2,5],[2,6],[2,9],[2,13],[2,14],[3,4],[3,5],[3,6],[3,8],[3,9],[3,11],[3,12],[4,5],[4,10],[4,11],[4,14],[5,7],[5,8],[5,9],[5,10],[5,12],[5,14],[6,7],[6,10],[6,11],[6,12],[7,8],[7,9],[7,10],[7,12],[7,14],[8,11],[8,12],[8,13],[8,14],[9,10],[9,11],[9,14],[10,11],[10,12],[10,14],[11,13],[11,14],[12,13],[13,14]];
    return 0;
}

/*
valid sudoku : 
- https://leetcode.com/problems/valid-sudoku/description/
- use hash set
- 9, 10
*/

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool validSudoku(vector<vector<char>>& board){
    vector<unordered_set<char>> row(9), col(9), box(9);

    for(int i=0 ; i<9; i++){
        for(int j=0 ; j<9; j++){
            char val = board[i][j];

            if(val=='.')    continue;

            //row
            if(row[i].count(val)){
                return false;
            }
            row[i].insert(val);

            //col
            if(col[j].count(val)){
                return false;
            }
            col[j].insert(val);

            //box
            int boxIndex = (i/3)*3 + j/3;
            if(box[boxIndex].count(val)){
                return false;
            }
            box[boxIndex].insert(val);
        }
    }
    return true;
}
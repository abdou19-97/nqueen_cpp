//Nqueen
#ifndef NQUEEN_Q_EXISTS
#include <iostream>
#include <vector>

//Nqueen class
class Nqueen{
    public: 
       std::vector<int> row;
       std::vector<int> col;
       int boardsize;
       Nqueen(int n){boardsize=n;}
       bool checkConflict(int r, int c);
       void push(int r, int c); 
       void top(int *r, int *c);
       void pop();
       void show();

};
#endif

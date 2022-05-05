#include <iostream>
#include <vector>
#include "Nqueen.h"
using namespace std;

       //checking if there is conflict 	
bool Nqueen::checkConflict(int r, int c){
      if(r<1 || r > boardsize || c<1 || c>boardsize) // check if the row or the colum out of the board 
	   return false;                    //return false
      for(int i = 0; i < row.size(); i++){   // if there is confict with other queen
            if(row[i] == r ||                   // check if the 
		col[i] == c ||
		row[i] - r == col[i] - c ||
		row[i] - r == -(col[i] - c))
                return false;
             }
         return true;
};

//this function place the queens
void Nqueen::push(int r, int c){
       row.push_back(r);
       col.push_back(c);
};

//this function will show the last queen placed
void Nqueen::top(int *r, int* c){
	*r = row.back();
	*c = col.back();
};
//creating function pop is there is a conflict
void Nqueen::pop(){
	row.pop_back();
	col.pop_back();
};
 
//this function the queens location
void Nqueen::show(){
       cout<<"Board size: "<<boardsize<<"x"<<boardsize<<" row,col\n";
       for(int i=0; i<row.size(); i++){
		cout<<row[i]<<"  "<<col[i]<<endl;
	}
};


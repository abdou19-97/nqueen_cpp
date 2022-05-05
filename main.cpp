//main.cpp
#include<cstdlib>
#include <iostream>
#include <vector>
#include "Nqueen.h"
using namespace std;

int main(int argc, char* argv[])
{            
        int N; // default board size is 4x4
        cout<< "enter the position of the queen: " <<endl;
        cin>>N;
        if(argc>1) // if there is any argument passed, get it as the board size
        {
                N = atoi(argv[1]);
        }
        //passing the user input as the board size to the constructor 
        Nqueen board=Nqueen(N);
        int qrow =1;
        int qcol =1;
                      
        while(qrow<=N)                     //while the row is less or equal than the board size
        {
                if(qrow==1 && qcol>N)                    //check if the row is 1 and the col great than
                {                                       //the board size return 0
                        cout<<"No solution\n";
                        return 0;
                }

                if( board.checkConflict(qrow, qcol)==true )         //check if theere's no conflict 
                {
                        board.push(qrow, qcol); // place this queen on board
                        qrow++; qcol=1;         // get the next queen
                }
                else
                {
                        qcol++;               //shift the queen
                        if(qcol>N) // this queen cannot be placed on the board. We need to pop another queen
                        {
                                board.top(&qrow, &qcol); // get the previous queen back
                                qcol++;                  // shift the queen
                                board.pop();             // pop the queen out of the board
                        }
                }
        }
        //show the board
        board.show();
 }

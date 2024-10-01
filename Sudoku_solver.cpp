#include <iostream>

using namespace std;

class Sudoku_solver
{
private:
    int j,i;
    int sudoku[9][9];
public:
    void get_sudoku();
    bool solver();
    bool isSafe(int row,int col,int val,int sudoku[][9]);
    void print_sudoku();
};

bool Sudoku_solver::isSafe(int row ,int col,int val,int sudoku[][9]){
    for (int i=0;i<9;i++){
        // to check in row
        if (sudoku[row][i]==val){
            return false;
        }
        // to check in column
        if(sudoku[i][col]==val){
            return false;
        }
        // to check in the belonging metrix
        if (sudoku[3*(row/3)+i/3][3*(col/3)+i%3]==val){
            return false;
        }
    }
    return true;
}

void Sudoku_solver::get_sudoku(){
    for (i=0;i<9;i++){
        for (j=0;j<9;j++){
            // cout << "enter the " << i << " "<< j<<" element"<<endl;
            cin>>sudoku[i][j];
        }
    }
}

void print_line(){
    int k;
    for (k=0;k<9;k++){
        cout << "--";
    }
    cout << endl;
}


void Sudoku_solver::print_sudoku(){
    print_line();
    for (i=0;i<9;i++){
        for (j=0;j<9;j++){
            cout << "|"<<sudoku[i][j];
        }
        cout<< endl;
        print_line();
    }
    print_line();
}



bool Sudoku_solver::solver(){
    for(i=0;i<9;i++){
        for (j=0;j<9;j++){
            if (sudoku[i][j]==0){
                for(int val=1;val<=9;val++){
                    if (isSafe(i,j,val,sudoku)){
                        sudoku[i][j]=val;
                        // backtrack for next values.
                        bool isPossible = solver();
                        if(isPossible){
                            return true;
                        }
                        else{
                            sudoku[i][j]=0;
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}


int main(){
    Sudoku_solver Get;
    Get.get_sudoku();
    Get.print_sudoku();
    bool ans=Get.solver();
    cout<<ans<<endl;
    Get.print_sudoku();
    return 0;
}
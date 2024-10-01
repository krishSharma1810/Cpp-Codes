#include<iostream>
#include<conio.h>

using namespace std;


int Tie(char A[3][3],int count,char Winner)
{
    while (Winner != 'v')
    {
        return 0;
        break;
    }
    return 1;
}



void Pattern (char A[3][3],int count,char Winner)
{
    int i,j;
    for (i=0;i<3;i++)
    {
        cout << "\t\t\t-------------"<<endl;
        for (j=0;j<3;j++)
        {
            if (j==0)
            {
                cout <<"\t\t\t";
            }
            cout<< "| "<<A[i][j]<<" ";
        }
        cout << "|"<<endl;
    }
    cout << "\t\t\t-------------"<<endl;
    if(count == 0)
    {
        cout << "\t\t\tInvalid Move"<<endl;
    }
}



int Turn(char chance[2],int c)
{
    char ch;
    if (c%2==0)
    {
        ch=chance[0];
    }
    else{
        ch=chance[1];
    }
    cout << "\t\t\t"<<ch <<"'s turn"<<endl;
    return (ch);
}


int Move(char A[3][3],char inp,int c,char ch)
{
    if (inp<49 || inp>58)
    {
        cout << "\t\t\tInvalid Move"<<endl;
        return 0;
    }
    else
    {
        switch (inp)
        {
            case 49:
                if(A[0][0] == ' ')
                {
                    A[0][0]=ch;
                }
                else
                {
                    // cout<<"\t\t\tInvalid Move"<<endl;
                    return 0;
                }
                break;
            case 50:
                if(A[0][1] == ' ')
                {
                    A[0][1]=ch;
                }
                else
                {
                    // cout<<"\t\t\tInvalid Move"<<endl;
                    return 0;
                }
                break;
            case 51:
                if(A[0][2] == ' ')
                {
                    A[0][2]=ch;
                }
                else
                {
                    // cout<<"\t\t\tInvalid Move"<<endl;
                    return 0;
                }
                break;
            case 52:
                if(A[1][0] == ' ')
                {
                    A[1][0]=ch;
                }
                else
                {
                    // cout<<"\t\t\tInvalid Move"<<endl;
                    return 0;
                }
                break;
            case 53:
                if(A[1][1] == ' ')
                {
                    A[1][1]=ch;
                }
                else
                {
                    // cout<<"\t\t\tInvalid Move"<<endl;
                    return 0;
                }
                break;
            case 54:
                if(A[1][2] == ' ')
                {
                    A[1][2]=ch;
                }
                else
                {
                    // cout<<"\t\t\tInvalid Move"<<endl;
                    return 0;
                }
                break;
            case 55:
                if(A[2][0] == ' ')
                {
                    A[2][0]=ch;
                }
                else
                {
                    // cout<<"\t\t\tInvalid Move"<<endl;
                    return 0;
                }
                break;
            case 56:
                if(A[2][1] == ' ')
                {
                    A[2][1]=ch;
                }
                else
                {
                    // cout<<"\t\t\tInvalid Move"<<endl;
                    return 0;
                }
                break;
            case 57:
                if(A[2][2] == ' ')
                {
                    A[2][2]=ch;
                }
                else
                {
                    // cout<<"\t\t\tInvalid Move"<<endl;
                    return 0;
                }
                break;
            default:
                break;
            }
        return 1;
    }
}


int Win(char A[3][3])
{
    char Win='a';
    if (A[0][0]==A[0][1] && A[0][1]==A[0][2] && A[0][0]!=' '){Win='v';}
    if (A[1][0]==A[1][1] && A[1][1]==A[1][2] && A[1][0]!=' '){Win='v';}
    if (A[2][0]==A[2][1] && A[2][1]==A[2][2] && A[2][0]!=' '){Win='v';}
    if (A[0][0]==A[1][0] && A[1][0]==A[2][0] && A[0][0]!=' '){Win='v';}
    if (A[0][1]==A[1][1] && A[1][1]==A[2][1] && A[0][1]!=' '){Win='v';}
    if (A[0][2]==A[1][2] && A[1][2]==A[2][2] && A[0][2]!=' '){Win='v';}
    if (A[0][0]==A[1][1] && A[1][1]==A[2][2] && A[0][0]!=' '){Win='v';}
    if (A[0][2]==A[1][1] && A[1][1]==A[2][0] && A[0][2]!=' '){Win='v';}
    return (Win);
}



int main()
{
    char play;
    do{
        char A[3][3],player,Winner ;
        char chance[2]={'X','O'},inp;
        cout << "\t\t\tEnter any key to start the game: "<<endl<<"\t\t\t";
        getch();
        int count=-1,draw=1;
        int c=0;
        for (int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                A[i][j]=' ';
            }
        }

        while(c != 9)
        {
            system("cls");
            Pattern(A,count, Winner);
            player=Turn(chance,c);
            inp=getch();
            count=Move(A,inp,c,player);
            Winner=Win(A);
            if (Winner == 'v')
            {
                system("cls");
                Pattern (A,count ,Winner);
                cout << "\t\t\t"<<player<<" Won the game"<<endl;
                break;
            }
            if (count == 1)
            {
                c=c+1;
            } 
        }
        draw = Tie(A,count ,Winner);
        if (draw==0)
        {
            system("cls");
            Pattern (A,count ,Winner);
            cout << "\t\t\tMatch Draw"<<endl;
        }
        cout <<"\t\t\tDo you want to play again !!"<<endl;
        cin >> play;
    }while(play==121 || play==89);
}

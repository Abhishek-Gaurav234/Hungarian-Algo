#include<iostream>
using namespace std;


void maker(int Mat[][10],int m,int n)
{
    if(m>n)
    {
        int col=n;
        for(int i=m-n;i>0;i--){
            for(int j=0;j<m;j++){
                Mat[j][col]=0;
            }
            col++;
        }
    }
    else
    {
        int row=m;
        for(int i=n-m;i>0;i--){
            for(int j=0;j<n;j++){
                Mat[row][j]=0;
            }
            row++;
        }
    }
    
}

int main()
{

    int m,n,Mat[10][10],ch,max;
    cout<<"Enter No. Of Row And Column: ";
    cin>>m>>n;

    cout<<"Enter Matrix Element:\n";
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>Mat[i][j];

    cout<<"\n";

    if(m!=n)
        maker(Mat,m,n);

    if(m>n)
        max=m;
    else
        max=n;
    

    for(int i=0;i<max;i++){
        for(int j=0;j<max;j++){
            cout<<Mat[i][j]<<" ";
        }
        cout<<"\n";
    }

/*
    cout<<"\nMENU";
    cout<<"1.MinimA\n";
    cout<<"2.MaximA\n";
    cin>>ch;

    switch(ch)
    {
        case 1: 
                break;

        case 2: 
                break;

        default:cout<<"WronG Choice";
    }

*/

    return 0;
}
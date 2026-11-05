#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int** transformData(int topX, int topY, int p_count[10][10])
{
    int** crops=new int*[4];
    int size[4]={0,0,0,0};

    for (int i = 0; i < 10; i++)
    {
        for(int j =0 ; j < 10 ; j++)
        {
            int absX=topX+j;
            int absY=topY-i;

            int quandent;

            if(absX>=0 && absY>=0)
            {
                quandent=0;
            }
            else if(absX<0 && absY>=0)
            {
                quandent=1;
            }
            else if(absX<0 && absY<0)
            {
                quandent=2;
            }
            else
            {
                quandent=3;
            }
            size[quandent]++;
        }
    }
    
    for(int k = 0; k< 4; k++)
    {
        crops[k]=new int[size[k]+1];
    }

    int index [4]= {0,0,0,0};

    for (int i = 0; i < 10; i++)
    {
        for(int j =0 ; j < 10 ; j++)
        {
            int absX=topX+j;
            int absY=topY-i;

            int quandent;

            if(absX>=0 && absY>=0)
            {
                quandent=0;
            }
            else if(absX<0 && absY>=0)
            {
                quandent=1;
            }
            else if(absX<0 && absY<0)
            {
                quandent=2;
            }
            else
            {
                quandent=3;
            }
            crops[quandent][index[quandent]++]=p_count[i][j];
        }
    }

    for(int k =0 ; k<4; k++)
    {
        crops[k][index[k]]=-1;
    }

    return crops;


}

int main()
{
    const int size=10 ;
    srand(time(0));

    int p_count[10][10];
    
    for(int i = 0; i< size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            p_count[i][j]=rand()%51;
        }        
    }

    int topX=-5;
    int topY=5;

    int ** result = transformData(topX, topY, p_count);

    for(int k = 0; k < 4 ; k++)
    {
        cout <<"Crops " << k+1 << ": ";
        for(int i = 0; result[k][i]!=-1; i++)
        {
            cout<<result[k][i]<<" ";
        }
        cout<<endl;
    }

    for (int i = 0; i < 4; i++)
    {
        delete result[i];
    }
    delete result;
    
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
void Sortbubble(int Data[]);
int main()
{
    int data[6] = {65,12,34,2,13,55};
    
    cout << "\n Before  List number of integer.\n";
    for(int i = 0; i < 6 ; i++)
    cout << i+1 << " " << data[i] << endl;

    Sortbubble(data);

    cout << "\n After  List number of integer.\n";
    for(int i = 0; i < 6 ; i++)
    cout << i+1 << " " << data[i] << endl;
    return(0);
}
void Sortbubble(int Data[])
{
    int i,j,flag;
    int temp;
    for( i = 1; i < 6 ; i++)
    {
        flag = 0;
        for(j=0; j< 6-i ; j++){
            if(Data[j] > Data[j+1]) {
                temp = Data[j];
                Data[j] = Data[j+1];
                Data[j+1] = temp;
                flag = 1;
            }
        }
        if (!flag) break;
    }
}
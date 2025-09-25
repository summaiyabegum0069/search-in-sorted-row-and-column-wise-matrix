#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
        int n,m,x;
    cout << "enter the number of rows";
    cin >> n;
    cout <<  "enter the number of columns";
    cin >> m;
    vector<vector<int>> matrix(n,vector<int>(m));
    cout << "enter matrix elemnts";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "enter element to search";
    cin >> x;
    int i=0,j=m-1;
    while(i<n && j>=0)
    {
        if(matrix[i][j]==x)
        {
            return 1;
        }
        else if(matrix[i][j]<x)
        {
            i++;
        }
        else 
        {
            j--;
        }
    }
    return 0;
    
} 
#include <bits/stdc++.h>
using namespace std;
int main()
{
	//Floyd-Warshall�㷨�������
	for(k=1;k<=n;k++) //n�Ƕ���ʽ
	 for(i=1;i<=n;i++)
	  for(j=1;j<=n;j++)
	   if(e[i][j]>e[i][k]+e[k][j])  //k����תվ 
	     e[i][j]=e[i][k]+e[k][j];
		
	return 0;
	   
 } 

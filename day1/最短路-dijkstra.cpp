for(int i=1;i<=n;i++)//n�Ƕ�����
  dis[i]=e[1][i];    //dis[i]��ʾ1���㵽i����̾���
for(int i=1;i<=n;i++)
 book[i]=0;
 
 book[1]=1;   //�õ��Ѿ�����¼
 
 //Disjkstra�㷨������� ��Դ���·
 for(int i=1;i<=n-1;i++)
 {
 	min=inf;
 	for(j=1;j<=n;j++)
 	{
 		if(book[j]==0 && dis[j]<min)
 		{
 			min=dis[j];
 			u=j;
		 }
	}  
	book[u]=1;
	for(v=1;v<=n;v++)
	{
		if(e[u][v]<inf) //��·���� 
		{
			if(dis[v]>dis[u]+e[u][v])
			   dis[v]=dis[u]+e[u][v];
		}
	}
  }
  for(i=1;i<=n;i++)
   cout<<dis[i];
   
 
  
 
 
  

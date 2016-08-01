

#define INF 100000
#define MAXN 21
int n , m;
int Edge[MAXN][MAXN];
int lowcost[MAXN];
int nearvex[MAXN];
void prim(int u0){
  int i ,j;
  int sumweight=0;
  for(i =1 ;i<=n;i++){
     lowcost[i]=Edge[u0][i];
     nearvex[i]=u0;
  }
    nearvex[u0]=-1;
    for(i=1;i<n;i++){
      int min =INF;
      int v =-1 ;
      //find the most low elements
      for(j=1;j<=n;j++){
        if(nearvex[j]!=-1&&lowcost[j]<min){
           lowcost[j]=min;
           v=j;
        }
      }
      if(v!=1){
        printf("%d %d %d \n",nearvex[v],v ,lowcost[v] );
        nearvex[v]=-1;
        sumweight+=lowcost[v];
        //refresh  lowcost
        for(j =1;j<=n;j++){
          if(nearvex[j]!=-1&&Edge[v][j]<lowcost[j]){
            lowcost[j]=Edge[v][j];
            nearvex[j]=v;
          }
        }
      }//end of if
    }//end of for

}//end of prim;

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
const int Max=105;
const int INF =9999;
int n, map[Max][Max],d[Max],vis[Max],issea[Max];
int int main(int argc, char const *argv[]) {
  int i ,j mine ,mi ,pi, si,li,k;
  while (scanf("%d", &n)!=EOF ) {
    mine =INF;
    for (int i = 0; i < n ; i++) {
        for (int  j = 0; j < n; j++) {
          map[i][j]=INF;
        }
    }
    for (int  i = 0; i <n; i++) {
      scanf("%d %d",,&mi,&issea[i]);
      while (mi--) {
         scanf("%d%d",&si,&li );
         map[i][si]=li;
      }
    }
    for ( k = 0; k < n; k++) {
      for(i=0;i<n;i++ ){
        for(j=0;j<n;j++){
          if(map[i][j]>map[i][k]+map[k][j]){
             map[i][j]=map[i][k]+map[k][j];
          }

        }
      }
    }
    for (int  i = 0; i < n; i++) {
      if(issea[i]&&map[0][i]<mine)
          mine =map[0][i];
    }
    cout<<mine<<endl;
  }
  return 0;
}

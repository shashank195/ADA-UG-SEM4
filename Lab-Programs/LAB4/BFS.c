#include<stdio.h>                                                         /*Implementation of BFS Algorithm using C*/
#include<conio.h> 
int a[20][20],q[20],visited[20],r=-1,f=0,i,j,n; 
void bfs(int v); 
int main(){ 
    int v; 
       printf(“\nEnter no. of vertices:”); 
       scanf(“%d”,&n); 
       for(i=1;i<=n;i++) 
        { 
         q[i]=0; 
         visited[i]=0; 
        } 
       printf(“\nEnter Adjacency Matrix of the graph:”); 
         for(i=1;i<=n;i++){ 
            for(j=1;j<=n;j++){ 
              printf(“nEnter a[%d][%d]:”,i,j); 
              scanf(“%d”,&a[i][j]); 
              } 
            } 
         printf(“\nEnter the node of ur Choice:”); 
         scanf(“%d”,&v); 
         bfs(v); 
         printf(“\nAll the nodes reachable from node->%d is/are : nn”,v); 
         for(i=1;i<=n;i++){ 
             if(visited[i]) 
                printf(“%dt”,i); 
                } 
         getch(); 
         return(0); 
    } 
    
    void bfs(int v){ 
         for(i=1;i<=n;i++) 
                if(a[v][i] && !visited[i]) 
                    q[++r]=i; 
                if(f<=r){ 
                 visited[q[f]]=1; 
                 bfs(q[f++]); 
                 }  
         }


/* output
Enter the no. of vertices
4
Enter the adjacency matrix
0 1 1 0
0 0 0 1
0 1 0 0
0 0 0 0
Enter the start vertex
0
ALl the nodes reachable from 0 are 
1 2 3 

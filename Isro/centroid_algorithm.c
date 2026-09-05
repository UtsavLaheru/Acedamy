#include <stdio.h>
int n;
char result[50];

// So We Have To Make Vector not Vector.


// typedef struct Vector2{
  // double x;
  // double y;
// }Vector2;

Vector g[30];  

void push_back(int counter, int value)
{
  int g_size = sizeof(g) / sizeof(g[0]);
  // printf("%d\n", g_size);
  if(counter > g_size)
    printf("Array_Overflowed");
  
}

void input()
{
  int p;
  int v;
  scanf("%d", &n);
  for(int i=0;i < n-1;i++)
  {
    scanf("%d %d", &p, &n);
    printf("%d %d\n", p, n);
    g[p] = v;
    g[v] = p;
  }
}

// void pre_dfs(int v, int par = -1)
// {
  
// }

void solve(int v, char current_char)
{
  pre_dfs(v);  
}
// void output();
 
void main()
{
  Vector2 test = {10.0f, 12.0f};
  printf("%f\n",test.x);
  // pre_dfs();
  input();
  solve(0, 'A');
  // output();
}

//Vector structre we use int *data (Pointer to the array),
//int size (number of elements), int capacity (Allocated Space).

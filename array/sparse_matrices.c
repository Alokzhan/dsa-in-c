#include<stdio.h>

struct Element{
    int row, col,val;

};


int main(){
struct Element sparse[3]=
{
    {0,1,2},
    {1,0,3},
    {1,2,3}
};

for(int i=0; i<3;i++)
printf("Rows :%d col : %d val : %d\n",sparse[i].row,sparse[i].col,sparse[i].val);

return 0;

}
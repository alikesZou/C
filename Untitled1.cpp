//顺序表的销毁
#include <stdio.h> 
#include <stdlib.h> 
#define OK 1 
#define OVERFLOW -2 
#define LIST_INIT_SIZE 10// 线性表存储空间的初始分配量 
typedef int Status; //Status是函数数据类型 ，其值是函数结果状态，如OK 
typedef int ElemType;//ElemType是线性表中数据元素类型 
typedef struct{ 
ElemType *elem; 
int length; 
int listsize; 
}Sqlist; 
Status InitList(Sqlist *L) 
{//构造一个空的顺序表 
// L.elem=new ElemType[MAXSIZE];//为顺序表分配一个预定义大小为MAXSIZE的数组空间
L->elem=(ElemType*)malloc(LIST_INIT_SIZE*sizeof(ElemType));
if(!L->elem)exit(OVERFLOW);//存储分配失败退出 
L->length=0;//空表长度为0 
L->listsize=LIST_INIT_SIZE; // 初始存储容量 
return OK; 
} 
int main(){ 
Sqlist L; 
InitList(&L); 
free(L.elem);//销毁顺序表
L.elem=NULL;
L.length=0;
L.listsize=0;
printf("初始化L后：L.elem=%u L.length=%d L.listsize=%d\n",L.elem,L.length,L.listsize);
}



//˳��������
#include <stdio.h> 
#include <stdlib.h> 
#define OK 1 
#define OVERFLOW -2 
#define LIST_INIT_SIZE 10// ���Ա�洢�ռ�ĳ�ʼ������ 
typedef int Status; //Status�Ǻ����������� ����ֵ�Ǻ������״̬����OK 
typedef int ElemType;//ElemType�����Ա�������Ԫ������ 
typedef struct{ 
ElemType *elem; 
int length; 
int listsize; 
}Sqlist; 
Status InitList(Sqlist *L) 
{//����һ���յ�˳��� 
// L.elem=new ElemType[MAXSIZE];//Ϊ˳������һ��Ԥ�����СΪMAXSIZE������ռ�
L->elem=(ElemType*)malloc(LIST_INIT_SIZE*sizeof(ElemType));
if(!L->elem)exit(OVERFLOW);//�洢����ʧ���˳� 
L->length=0;//�ձ���Ϊ0 
L->listsize=LIST_INIT_SIZE; // ��ʼ�洢���� 
return OK; 
} 
int main(){ 
Sqlist L; 
InitList(&L); 
free(L.elem);//����˳���
L.elem=NULL;
L.length=0;
L.listsize=0;
printf("��ʼ��L��L.elem=%u L.length=%d L.listsize=%d\n",L.elem,L.length,L.listsize);
}



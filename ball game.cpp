#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<time.h>
#define FOOD_NUM 200 
#define WIDTH 1024
#define HEIGHT 640
struct Ball//С��ṹ����ң�ʳ�����˹����ϣ� 
{
	int x;
	int y;
	int r;
	DWORD color; 
	bool flag;//�Ƿ���� 
};
struct Ball food[FOOD_NUM];
void GameInit(){
	srand(time(NULL));
	for(int i = 0;i <FOOD_NUM;i++){
		food[i].x = rand() % WIDTH;
		food[i].y = rand() % HEIGHT;
	}
} 

int main()
{
	initgraph(WIDTH,HEIGHT);//����һ��ͼ�񴰿� 
	//circle(50,50,50);��ͼ�񴰿��ϻ���һ��Բ���ڣ�50��50�� �뾶Ϊ50��Բ 
	printf("hello world");
	getchar();
	return 0;
}

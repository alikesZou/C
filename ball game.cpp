#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<time.h>
#define FOOD_NUM 200 
#define WIDTH 1024
#define HEIGHT 640
struct Ball//小球结构：玩家，食物，人物（人工智障） 
{
	int x;
	int y;
	int r;
	DWORD color; 
	bool flag;//是否存在 
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
	initgraph(WIDTH,HEIGHT);//建立一个图像窗口 
	//circle(50,50,50);在图像窗口上绘制一个圆心在（50，50） 半径为50的圆 
	printf("hello world");
	getchar();
	return 0;
}

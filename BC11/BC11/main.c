#define _CRT_SECURE_NO_DEPRECATE
/*
	@author:liang
	time:2024年3月30日10点58分
	题目：BC11  学生基本信息输入输出
	题目描述:{依次输入一个学生的学号，以及3科（C语言，数学，英语）成绩，
			  在屏幕上输出该学生的学号，3科成绩（注：输出成绩时需进行四舍五入且保留2位小数）。
			  数据范围：学号满足 1≤n≤20000000  ，各科成绩使用百分制，且不可能出现负数
	}
	题目链接：https://www.nowcoder.com/ta/beginner-programmers-v1
*/

/*输入描述
	学号以及3科成绩，学号和成绩之间用英文分号隔开，成绩之间用英文逗号隔开。
*/

/*输出描述
	学号，3科成绩，输出格式详见输出样例。
*/

/*实例一
	输入：17140216;80.845,90.55,100.00
	输出：The each subject score of No. 17140216 is 80.85, 90.55, 100.00.
*/

/*实例二
	输入：123456;93.33,99.99,81.20
	输出：The each subject score of No. 123456 is 93.33, 99.99, 81.20.
*/

#include <stdio.h>
int main()
{
	int Student_ID = 0;
	float Score1 = 0;
	float Score2 = 0;
	float Score3 = 0;
	scanf("%d;%f,%f,%f", &Student_ID, &Score1, &Score2, &Score3);
	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", Student_ID, Score1, Score2, Score3);
	return 0;
}
#define _CRT_SECURE_NO_DEPRECATE
/*
	@author:liang
	time:2024��3��30��10��58��
	��Ŀ��BC11  ѧ��������Ϣ�������
	��Ŀ����:{��������һ��ѧ����ѧ�ţ��Լ�3�ƣ�C���ԣ���ѧ��Ӣ��ɼ���
			  ����Ļ�������ѧ����ѧ�ţ�3�Ƴɼ���ע������ɼ�ʱ��������������ұ���2λС������
			  ���ݷ�Χ��ѧ������ 1��n��20000000  �����Ƴɼ�ʹ�ðٷ��ƣ��Ҳ����ܳ��ָ���
	}
	��Ŀ���ӣ�https://www.nowcoder.com/ta/beginner-programmers-v1
*/

/*��������
	ѧ���Լ�3�Ƴɼ���ѧ�źͳɼ�֮����Ӣ�ķֺŸ������ɼ�֮����Ӣ�Ķ��Ÿ�����
*/

/*�������
	ѧ�ţ�3�Ƴɼ��������ʽ������������
*/

/*ʵ��һ
	���룺17140216;80.845,90.55,100.00
	�����The each subject score of No. 17140216 is 80.85, 90.55, 100.00.
*/

/*ʵ����
	���룺123456;93.33,99.99,81.20
	�����The each subject score of No. 123456 is 93.33, 99.99, 81.20.
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
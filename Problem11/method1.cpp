#include<iostream>
int main()
{
	// จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วคำนวณหาผลบวกของจำนวนที่น้อยที่สุด กับจำนวนที่น้อยที่สุดเป็นลำดับสอง (Level 2)
	int a[3], i,sum,max=-1000000;

	scanf_s("%d %d %d", &a[0], &a[1], &a[2]);

	sum = a[0] + a[1] + a[2];
	for (i = 0; i <= 2; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}

	printf("%d", sum - max);
	return 0;
}
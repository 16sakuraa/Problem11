#include<iostream>
int main()
{
	// จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วคำนวณหาผลบวกของจำนวนที่น้อยที่สุด กับจำนวนที่น้อยที่สุดเป็นลำดับสอง (Level 2)
	int a[3], i, temp;
	scanf_s("%d %d %d",&a[0],&a[1],&a[2]);

	while (a[0] > a[1] || a[1]>a[2])
	{
		for (i = 0; i <= 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				temp = a[i + 1];
				a[i + 1] = a[i];
				a[i] = temp;
			}

		}
		
	}
	printf("%d",a[0]+a[1]);
	return 0;
}
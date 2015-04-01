#include <iostream>
#include "huge.h"
using namespace std;
HugeUInteger::HugeUInteger()
{
	for (int i = 0; i < MAX; i++)
		number[i] = 0;
	lenght = 0;

}
HugeUInteger::HugeUInteger(HugeUInteger &in)
{
	number[MAX] = in.number[MAX];
	lenght = in.lenght;
	
}
void HugeUInteger::random(unsigned int size)
{
	lenght = size;
	for (int i = 0; i < lenght; i++)
	{
		number[i] = rand() % 10;
	}

}
void HugeUInteger::add(HugeUInteger &add)
{
	int sumsize = (lenght >= add.lenght) ? lenght : add.lenght;
	lenght = sumsize;
	for (int i = 0; i <= sumsize-1; i++)
	{
		if (number[i] >9)
		{
			 number[i] -=10;
			 number[i + 1]++;
		}
	}

}
void HugeUInteger::subtract(HugeUInteger &sub)
{
	int differencesize = (lenght >= sub.lenght) ? lenght : sub.lenght;
	for (int i = 0; i < differencesize; i++)
	{
		number[i] -= sub.number[i];
		if (number[i] < 0 && i <= lenght - 1)
		{
			number[i] += 10;
			number[i + 1]--;
		}
	}

}
void HugeUInteger::print()
{
	
	int i;
	for (i = lenght-1; i >= 0; i--)
	{
		if (number[i] != 0)
			break;
	}
	if (number[i] < 0)
	{
		cout << "(negative)0";
	}
	else
	{
		for (i=lenght-1; i >= 0; i--)

		{
			cout << number[i];
		}
	}
}
/*
 * swap.cpp
 *
 *  Created on: 07-May-2020
 *      Author: Nitin
 */

#include<iostream>
using namespace std;
#include"swap.h"

int main(void)
{
	int i=1,j=6;
	swap(3,4);
	swapptr(&i,&j);
	return 1;

}

void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"a= "<<a<<"\t"<<"b= "<<b<<endl;
}
void swapptr(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	cout<<"i= "<<*a<<"\t"<<"j= "<<*b<<endl;
}


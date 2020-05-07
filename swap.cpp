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
	swap(3,4);

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


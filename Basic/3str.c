/*
 * 3str.c
 *
 *  Created on: 11-Apr-2018
 *      Author: manoj
 */

#include <stdio.h>
#include <stdlib.h>



struct student{
	int roll;
	char *name;
}std1;





int main(){
	std1.name="manoj";
	std1.roll=121;

	struct student *std1=(struct student*)malloc(sizeof(struct student ));
	std1->roll=1212;
	std1->name="Kumar";
	free(std1);
	std1=NULL;
	std1=(struct stduent*)calloc(5, sizeof(struct student));
	std1->roll=12345;
	std1->name="Aanya";
	printf("Roll_Number=%d\n",std1->roll);
	printf("Name is :=%s\n", std1->name);
	free(std1);
	std1=NULL;
	std1=(struct student*)realloc(std1,100);
	std1->name="Singh";
	std1->roll=9834;
	printf("Size is");
	printf("size of realloc::%d\n",sizeof(realloc(std1,100)));
	printf("size of malloc::%d\n",sizeof(malloc(sizeof(struct student ))));



	return 0;
}


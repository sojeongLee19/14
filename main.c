#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "keywords.h"
#define MAX_NAME 30
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct keytab {
	int nums; // ��� ������
	char name [MAX_NAME]; 
};

struct keytab keywrds[13] = {
	{0, "int"},
	{0, "float"},
	{0, "return"},
	{0, "if"},
	{0, "for"},
	{0, "while"},
	{0, "goto"},
	{0, "switch"},
	{0, "case"},
	{0, "void"},
	{0, "default"},
	{0, "char"},
	{0, "do"},
};

void copy_word(char *word)
{
	 int i;
	 
	 //��  keyword �� ��
	 for (i=0; i<13, i++)
	 {
	 	// if word�� i���� keyword �� ������
		if(strncmp(word,keywrds[i]. name, strlen(keywrds[i].name ))==0) {
			//nums++;
			keywrds[i].nums++;
		} 
	  
	  } 
	  
}

void print_word()
{
	//i��° keyword�� ���ؼ�
	  for(i=0;i<13;i++) 
	    //printf(Ű���� �̸�: �󵵼�);
		 printf("%s : %i\n", keywrds[i].name, keywrds[i].nums);
}
if (fp == NULL)
{
	printf("file path is wrong! %s\n", filepath);
    return -1;
}

//word reading & analysis
while (fget_word(fp, word) !=0)
{
	count_word(word);
}
//output
print_word();

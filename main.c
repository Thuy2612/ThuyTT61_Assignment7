#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Link_List_Lib.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Creat conflict in remote */
int main(int argc, char *argv[]) 
{
	char c = 0;
	node* MyList = InitList();
	Init();
	while(true)
	{
		fflush(stdin);
		scanf("%c", &c);
		switch (c)
		{
			case 'a':
				MyList = AddNodeInHead(MyList, CreatNode());
				break;
			case 'f':
				SearchByID(MyList);
				break;
			case 'r':
				MyList = RemoveByID(MyList);
				break;
			case 'p':
				PrintAll(MyList);
				break;
			case 'e':
				exit(0);
				break;
		}
	}
    return 0;
}

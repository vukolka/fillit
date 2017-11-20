#include "fillit.h"
#include "libft.h"

tetrimino	*new_tetrimino(char a, int id)
{
	tetrimino *res;

	if(!(res = (tetrimino*)malloc(sizeof(tetrimino))))
		return (NULL);
	res->id = id;
	res->name = a;
	res->next = NULL;
	return (res);
}

void		push_end_tetrimino(tetrimino **list, char a, int id)
{
	tetrimino *temp;

	temp = *list;
	if (*list == NULL)
	{
		*list = new_tetrimino(a, id);
		return ;
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_tetrimino(a, id);
}

void		print_list(tetrimino *list)
{
	while(list)
	{
		printf("%c ", list->name);
		printf("%d\n", list->id);
		list = list->next;
	}
}
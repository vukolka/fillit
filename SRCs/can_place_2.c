#include "libft.h"
#include "fillit.h"

int     *get_tetrimino_array_2(int id, int ls, int i)
{
    if (id == 13)
        return malloc_tetrimino_array(i, i+1, i + ls + 1, i + ls + 2);
    if (id == 14)
        return malloc_tetrimino_array(i, i + 1, i + ls - 1, i + ls);
    if (id == 15)
        return malloc_tetrimino_array(i, i + ls, i + ls + 1, i + ls * 2 + 1);
    if (id == 16)
        return malloc_tetrimino_array(i, i + ls, i + ls + 1, i + ls * 2);
    if (id == 17)
        return malloc_tetrimino_array(i, i + ls, i + ls - 1, i + ls * 2);
    if (id == 18)
        return malloc_tetrimino_array(i, i + 1, i + 1 - ls, i + 2);
    if (id == 19)
        return malloc_tetrimino_array(i, i + 1, i + ls + 1, i + 2);
    return (NULL);
}

int     *get_tetrimino_array(int id, int ls, int i)
{
    if (id == 1)
        return malloc_tetrimino_array(i, i+1, i+ls, i+ls+1);
    if (id == 2)
        return malloc_tetrimino_array(i, i + 1, i + 2, i + 3);
    if (id == 3)
        return malloc_tetrimino_array(i, i + ls, i + ls * 2, i + ls * 3);
    if (id == 4)
        return malloc_tetrimino_array(i, i + 1, i + 2, i + 2 + ls);
    if (id == 5)
        return malloc_tetrimino_array(i, i + 1, i + 2, i - ls);
    if (id == 6)
        return malloc_tetrimino_array(i, i + ls, i + ls * 2, i + ls * 2 - 1);
    if (id == 7)
        return malloc_tetrimino_array(i, i + 1, i + ls, i + ls * 2);
    if (id == 8)
        return malloc_tetrimino_array(i, i + 1, i + 2, i + 2 - ls);
    if (id == 9)
        return malloc_tetrimino_array(i, i + 1, i + 2, i + ls);
    if (id == 10)
        return malloc_tetrimino_array(i, i + ls, i + ls * 2, i + ls * 2 + 1);
    if (id == 11)
        return malloc_tetrimino_array(i, i + 1, i + ls + 1, i + ls * 2 + 1);
    if (id == 12)
        return malloc_tetrimino_array(i, i + ls, i + ls - 1, i + ls * 2 - 1);
    return get_tetrimino_array_2(id, ls, i);
}

int     can_place_2(char *matrix, tetrimino *current, int i)
{
    int     line_size;
    int     *indexes;

    indexes = get_tetrimino_array(current->id, line_size, i);
    line_size = get_line_size(matrix);
    if (compare(matrix, indexes))
    {
            modify_matrix(matrix, indexes, current->name);
            return (TRUE);
    }
    return (FALSE);
}
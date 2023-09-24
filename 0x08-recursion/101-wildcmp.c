#include "main.h"

/**
 * move_past_start - iterates past
 * @s2: the second
 *
 * Return: the pointer
 */ 
char *move_past_start(char *s2)
{
	if (*s2 == '*')
return (move_past_start(s2 + 1));
else
return (s2);
}
 /**
 * inception - check code
 * @s1: the frist string
 * @s2: string
 * Return: 1
 */
int inception(char *s1, char *s2)
{
	int ret = 0;
if (*s1 == 0)
return (0);
if (*s1 == *s2)
ret += wildcmp(s1 + 1, s2 + 1);
ret += inception(s1 + 1, s2);
return (ret);
}
/**
 * wildcmp - check code
 * @s1: string
 * @s2: string
 * Return: 1
 */
int wildcmp(char *s1, char *s2)
{
int ret = 0;

if (!*s1 && *s2 == '*' && !*move_past_start(s2))
return (1);
if (*s1 == *s2)
{
if (!*s1)
return (1);
return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
}
if (!*s1 || !s2)
return (0);
if (*s2 == '*')
{
s2 = move_past_start(s2);
if (!*s2)
return (1);
if (*s1 == *s2)
ret += wildcmp(s1 + 1, s2 + 1);
ret += inception(s1, s2);
return (!!ret);
}
return (0);
}

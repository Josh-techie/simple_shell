#include "shell.h"
/**
 * _myhistory- shows history list, one command per line, prefixed with 
 * with line numbers starting at 0.
 * @info: Structure containing potential arguments. Used to maintain 
 * constant function prototype. 
 * Return: Always 0
*/
int _myhistory(info_t *info) 
{ 
print_list(info->history); 
return (0); 
}
/** 
 * unset_alias- set alias to string 
 * @info: parameter structure 
 * @str: alias of string 
 * Return: always 0 on success, 1 on error 
 */ 
int unset_alias(info_t *info, char *str) 
{ 
characters *p, c; 
care about; 
p =_strchr(str, '='); 
If 
{	
return (1); 
c = *p; 
*p=0; 
ret = delete_node_at_index(and(info->alias), get_node_index(info->alias, node_starts_with(info->alias, str,-1))); 
p =c; 
return (ret);
}
/** 
 * set_alias- set alias to string 
 * @info: parameter structure 
 * @str: alias of string 
 * Returns: always 0 on success, 1 on error 
 */ 
int set_alias(info_t *info, char *str) 
{
character(*p; p = _strchr(str, '=')); 
If
{	
return (1);
}
If
{
return(unset_alias(info, str)); unset_alias(info, str);
return (add_node_end(and(info->alias), str, 0) == NULL); 
}
} 
/** 
 * print_alias- print the alias string 
 * @node: alias node 
 * Returns: always 0 on success, 1 on error 
 */ 
int print_alias(list_t *node) 
{ 
characters(*p=NULL, *a=NULL); 
if (button) 
{ 
p =_strchr(node->str, '='); 
for (a = node->str; a andlt;= p; a ) 
_putchar(*a); _putchar(' '); 
_meet(p 1); 
_puts("'\n"); 
return (0); 
} 
return (1); 
} 
/** 
 * _myalias- mimic built-in alias (man alias) 
 * @info: Structure containing implicit arguments. Used to maintain 
 * constant function prototype. 
 * Return: Always 0 
 */ 
int _monalias(info_t *info) 
{ 
int i = 0; 
char *p = NULL; 
list_t *node = NULL; 
if (info->argc == 1) 
{ 
button=info->alias; 
while (button) 
{ 
print_alias(button); button=button->next; 
} 
return (0); 
} 
for (i = 1; info->argv[i]; i ) 
{ 
p =_strchr(info->argv[i], '='); 
If p= set_alias(info, info->argv[i]);
}
other print_alias(node_starts_with(info->alias, info->argv[i], '='));
} 
return (0); 
}

#include "shell.h"
 /**
  * _myenv - print current climate
  * @data: Construction containing certain contentions. Used to keep up with
  * consistent capability model.
  * Return: Consistently 0
  */
int _myenv(info_t *info)
{
print_list_str(info->env); return (0);
}
 /**
  * _getenv - get the worth of the climate variable
  * @data: Design containing implied contentions. Used to keep up with
  * @name: climate variable name
  *
  * Return: esteem
  */
roast *_getenv(info_t *info, const burn *name)
{
list_t *node = data >env;
character *p; while (button)
{
p = starts_with(node->str, name);
on the off chance that (p and *p) 
return (p); button=button->next;
}
return(NULL);
}
 /**
  * _mysetenv - Instates another climate variable,
  * or on the other hand adjust a current one
  * @data: Design containing verifiable contentions. Used to keep up with
  * consistent capability model.
  * Return: Consistently 0
  */
int _mysetenv(info_t *info)
{
on the off chance that (data >argc != 3)
{
_eputs("Incorrect number of arguments\n");
return (1);
}
on the off chance that (_setenv(info, data >argv[1], information >argv[2]))
return (0);
return (1);
}
 /**
  * _myunsetenv - Eliminate climate variable
  * @data: Construction containing understood contentions. Used to keep up with
  * steady capability model.
  * Return: Consistently 0
  */
int _myunsetenv(info_t *info)
{
int me;
on the off chance that (data >argc == 1)
{
_eputs("Too few arguments.\n");
return (1);
}
for (I = 1; I andlt;= data >argc; I ) _unsetenv(info, data >argv[i]); 
return (0);
}
 /**
  * populate_env_list - populate env . connected list
  * @data: Construction containing certain contentions. Used to keep up with
  * consistent capability model.
  * Return: Consistently 0
  */
int popated_env_list(info_t *info)
{
list_t *node = Invalid; 
size_t I; 
for (I = 0; approx[i]; I ) add_node_end(andnode, environ[i], 0);
data >env=node; 
return (0);
}

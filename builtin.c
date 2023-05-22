#include "shell.h"

/**
 * _myexit - exit the shell
 * @information: A structure containing potential arguments. used for maintenance
 * Constant function prototypes.
 * When returning: exit with a specific exit status
 * (0) if info.argv[0] != "exit"
 */
int _myexit(info_t *info)
{
int end check;
if (info->argv[1]) /* if there is a closing argument */
{
exitcheck = _erratoi(info->argv[1]);
if (exit check == -1)
{
Info -> Status = 2;
print_error(info, "Invalid number:");
_eputs(info->argv[1]);
_eputchar('\n');
Returns (1).
}
info->err_num = _erratoi(info->argv[1]);
return value (-2);
}
info->err_num = -1;
return value (-2);
}

/**
 * _mycd - change the current directory of the process
 * @information: A structure containing potential arguments. used for maintenance
 * Constant function prototypes.
 * When returning: always 0
 */
int _mycd(info_t *info)
{
char *s, *dir, buffer[1024];
int chdir_ret;
s=getcwd(buffer, 1024);
if (!s)
_puts("TODO: >>getcwd error message here<<\n");
if (!info->argv[1])
{
dir = _getenv(info, "HOME=");
if (!dir)
chdir_ret = /* TODO: What is that? */
chdir((dir = _getenv(info, "PWD=")) ? directory:"/");
different
chdir_ret = chdir(dir);
}
else if (_strcmp(info->argv[1], "-") == 0)
{
if (!_getenv(info, "OLDPWD="))
{
_put(s);
_putchar('\\\\n');
Returns (1).
}
_puts(_getenv(info, "OLDPWD=")), _putchar('\n');
chdir_ret = /* TODO: What is that? */
chdir((dir = _getenv(info, "OLDPWD=")) ? directory:"/");
}
different
chdir_ret = chdir(info->argv[1]);
if (chdir_ret == -1)
{
print_error(info, "cd to" not possible);
_eputs(info->argv[1]), _eputchar('\n');
}
different
{
_setenv(info, "OLDPWD", _getenv(info, "PWD="));
_setenv(info, "PWD", getcwd(buffer, 1024));
}
return(0);
}
/**
 * _myhelp - change the current directory of a process
 * @information: A structure containing potential arguments. used for maintenance
 * Constant function prototypes. 
 * When returning: always 0
 */
int _myhelp(info_t *info)
{
char **arg_array;
arg_array = info->argv;
_puts("Help call works. Function not implemented yet\n");
(0)
_puts(*arg_array); /* Workaround for temp att_unused */
return(0);
}  

#include "shell.h"

/**
 * _myexit - exits the shell
 * @info: structure containing potential arguments.
 * Return: exist with a given exit status 0 or not
 */
int _myexit(info_t *info)
{
        int exitcheck;

        if (info->argv[1])
        {
                exitcheck = _erratoi(info->argv[1]);
                if (exitcheck == -1)
                {
                        info->status = 2;
                        print_error(info, "Illegal number: ");
                        _eputs(info->argv[1]);
                        _eputchar('\n');
                        return (1);
                }
                info->err_num = _erratoi(info->argv[1]);
                return (-2);
        }
        info->err_num = -1;
        return (-2);
}
/**
 * _mycd - change the current directory of the process
 * @info: structure containg arguments.
 * Return: Always 0
 */
int _mycd(info_t *info)
{
        char *s, *dir, buffer[1024];
        int chdir_ret;

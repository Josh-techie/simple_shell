# 0x16. C - Simple Shell :rocket:

## Description

This project is an implementation of the shell created as a Milestone Project for the C code at ALX Africa Software Engineering.
The gates of shell is a project in the first trimester, that helps student to understand the advanced concepts behind the shell program include process, system call, bit manipulation, file managment, error handling ...
Shell is a simple UNIX command interpreter that replicates functionalities of the simple shell (sh).
This program was written entirely in C Language.


## Description :

This is a shell written in C. It is based on the Thompson Shell.

## Environment :

Our shell was built and tested on Ubuntu 14.04 LTS.

## Features

- Display a prompt and wait for the user to type a command. A command line always ends with a new line.
- If an executable cannot be found, print an error message and display the prompt again.
- Handle errors.
- Hndling the “end of file” condition (Ctrl+D)
- Hanling the command line with arguments
- Handle the PATH
- Support the exit features and the exit status
- Handle the Ctrl-C to not terminate the shell
- Handling the command seperator ;
- Handling && and || logical operators
- Handle variable replacements $? and $$
- Handle the comments #
- Support the history feature
- Support the file input

## Builtins

Our shell has support for the following built-in commands:

| Command      | Definition                                                                 |
|--------------|----------------------------------------------------------------------------|
| `exit [n]`   | Exit the shell, with an optional exit status, `n`.                          |
| `env`        | Print the environment.                                                      |
| `setenv [var][value]` | Set an environment variable and value. If the variable exists, the value will be updated. |
| `alias[name[='value]]` | Reads aliases name                                                   |
| `unsetenv [var]` | Remove an environment variable.                                            |
| `cd [dir]` | Change the directory.                                                       |
| `help [built-in]`  | Read documentation for a built-in.                                         |

## Basic usage :bulb:

- First, Fork this Repository [Learn how to fork repo](https://docs.github.com/en/get-started/quickstart/fork-a-repo).
- Then Clone [Learn how to clone](https://docs.github.com/en/repositories/creating-and-managing-repositories/cloning-a-repository).
- Create an executable by running the following command:
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
- From there, type in the following command and press your enter button.
./hsh
- Final step: ENJOY!

## Example :computer:

ls -la

![image](https://user-images.githubusercontent.com/66263776/114757753-e50c2180-9d64-11eb-95ea-fb9bba776c8c.png)

## Contributors :

- Josh-Techie
- Chaimaeelfellioui

## Acknowledgments :

- The creators of the C language.
- Our software engineer-in-residence.
- Betty Holberton | Alx-Africa .

## License

This project is licensed under the terms of the MIT License. See the [LICENSE](LICENSE) file for details.


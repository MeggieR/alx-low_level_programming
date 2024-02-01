#include <unistd.h>

/**
   * _putchar - writes the character c to stdout
    * @c: This sigle parameter represents function to be printed.
     *Write is a system call. writes data to a file descriptor.
      * Return: 1 is file descriptor, &c address of character.
       * On error, -1 is returned, and errno is set appropriately.
        */
int _putchar(char c)
{
		return (write(1, &c, 1));
}

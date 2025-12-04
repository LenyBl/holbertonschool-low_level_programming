#include "main.h"
/**
 * cp - copies the content of a file to another file
 *
 * @file_from: source file
 * @file_to: destination file
 *
 * Return: 1 on success, -1 on failure
 */
int cp(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, r, w;
	
	char buffer[1024];
	if (file_from == NULL || file_to == NULL)
		return (-1);
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		return (-1);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd_to == -1)
	{
		close(fd_from);
		return (-1);
	}
	while ((r = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1 || w != r)
		{
			close(fd_from);
			close(fd_to);
			return (-1);
		}
	}
	if (r == -1)
	{
		close(fd_from);
		close(fd_to);
		return (-1);
	}
	close(fd_from);
	close(fd_to);
	return (1);
}

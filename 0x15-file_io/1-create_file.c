#include "main.h"

/**
* create_file - a function that creates a file
* @filename: the name of the file to create
* @text_content: a NULL terminated string to write to the file
*
* Return: 1 when success, -1 if failure (file can not be created,
* file can not be written, write “fails”, etc…)
* if filename is NULL return -1
*/

int create_file(const char *filename, char *text_content)
{
	int lp;
	int n, c = 0;

	if (!filename)
		return (-1);

	if (!text_content)
	{
		lp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		if (lp == -1)
			return (-1);
		close(lp);
		return (1);
	}

	lp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (lp == -1)
		return (-1);

	while (text_content[c])
		c++;

	n = write(lp, text_content, c);
	if (n == -1)
		return (-1);

	close(lp);

	return (1);
}

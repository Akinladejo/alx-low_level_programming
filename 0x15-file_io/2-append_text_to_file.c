#include "main.h"

/**
 * append_text_to_file - add text to a files
 * @filename: filename to add
 * @text_content: content of file to write
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_o, f_write, len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		file_o = open(filename, O_WRONLY | O_APPEND);
		if (file_o == -1)
			return (-1);
		len = 0;
		while (*(text_content + len) != '\0')
			len++;
		f_write = write(file_o, text_content, len);
		if (f_write == -1)
		{
			close(file_o);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(file_o);
	return (1);
}

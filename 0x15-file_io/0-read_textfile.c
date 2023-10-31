#include "main.h"

/**
 * read_textfile - function to read text files
 * @filename: filename.
 * @letters: letters printed.
 *
 * Return: Returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_name;
	ssize_t n_file, w_file;
	char *buffer;

	if (!filename)
		return (0);

	f_name = open(filename, O_RDONLY);

	if (f_name == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	n_file = read(f_name, buffer, letters);
	w_file = write(STDOUT_FILENO, buffer, n_file);

	close(f_name);

	free(buffer);

	return (w_file);
}

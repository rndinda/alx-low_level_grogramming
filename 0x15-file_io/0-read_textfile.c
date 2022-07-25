#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: number of letters printed. Otherwise, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int li;
	ssize_t rod, now;
	char *bee;

	if (!filename)
		return (0);

	li = open(filename, O_RDONLY);

	if (li == -1)
		return (0);

	bee = malloc(sizeof(char) * (letters));
	if (!bee)
		return (0);

	rod = read(li, bee, letters);
	now = write(STDOUT_FILENO, bee, rod);

	close(li);

	free(bee);

	return (now);
}

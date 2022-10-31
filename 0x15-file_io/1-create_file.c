#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int fdb;
	int letters;
	int rwr;

	if (!filename)
		return (-1);

	fdb = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fdb == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
	        ;

	rwr = write(fdb, text_content, letters);

	if (rwr == -1)
		return (-1);

	close(fdb);

	return (1);
}

#include "main.h"
/**
  * printerrors - print errors
  * @message: the to print
  * @file: name
  * @exitVal: status
  * Return: void
  */
void printerrors(char *message, char *file, int exitVal)
{
	dprintf(STDERR_FILENO, "%s%s\n", message, file);
	exit(exitVal);
}
/**
  * main - copies data from one file to another
  * @argc: # of args passed
  * @argv: pointer to array containing args
  *
  * Return: 0 for win
  */
int main(int argc, char **argv)
{
	int fddest, fdsrc, readVal, writeVal;
	char buffer[1024];

	if (argc != 3)
		printerrors("Usage: cp file_from file_to", "", 97);

	fddest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fddest == -1)
		printerrors("Error: Can't write to ", argv[2], 99);

	fdsrc = open(argv[1], O_RDONLY);
	if (fdsrc == -1)
		printerrors("Error: Can't read from file ", argv[1], 98);


	do {
		readVal = read(fdsrc, buffer, 1024);
		if (readVal == -1)
			printerrors("Error: Can't read from file ", argv[1], 98);

		writeVal = write(fddest, buffer, readVal);
		if (writeVal == -1 || writeVal != readVal)
			printerrors("Error: Can't write to ", argv[2], 99);

		} while (writeVal == 1024);
	if (close(fdsrc))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdsrc);
		exit(100);
	}
	if (close(fddest))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fddest);
		exit(100);
	}
	return (0);
}

include "main.h"
/**
  * error_echo - print errors
  * @output_err: output_err to print
  * @file: the file name
  * @status_val_exit: exit status
  * Return: void
  */
void error_echo(char *output_err, char *file, int status_val_exit)
{
        dprintf(STDERR_FILENO, "%s%s\n", output_err, file);
        exit(status_val_exit);
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
                error_echo("Usage: cp file_from file_to", "", 97);

        fddest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
        if (fddest == -1)
                error_echo("Error: Can't write to ", argv[2], 99);

        fdsrc = open(argv[1], O_RDONLY);
        if (fdsrc == -1)
                error_echo("Error: Can't read from file ", argv[1], 98);


        do {
                readVal = read(fdsrc, buffer, 1024);
                if (readVal == -1)
                        error_echo("Error: Can't read from file ", argv[1], 98);

                writeVal = write(fddest, buffer, readVal);
                if (writeVal == -1 || writeVal != readVal)
                        error_echo("Error: Can't write to ", argv[2], 99);

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


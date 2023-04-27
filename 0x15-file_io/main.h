#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void errors(char *message);
void pentry(void);
void ptype(char *buf);
void pos(char *buf);
void pversion(char *buf);
void pABIversion(char *buf);
void pdata(char *buf);
void pmagic(char *buf);
void pclass(char *buf);
void ptitle(char *title);
int main(int argc, char **argv);

#endif /*ifndef MAIN_H*/

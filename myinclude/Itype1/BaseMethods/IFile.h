#include "IDate.h"

typedef struct IFile
{
    char* name;
    Idate date;
    char* type;
    long size;
    char disk;
    char* path;
}Ifile;

typedef struct IFile IFile;
/* The second typedef was because it was used in the previous code. */


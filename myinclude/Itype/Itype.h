#if !defined(__ITYPE_H)
#define __ITYPE_H

typedef enum Ibool{false,true}Ibool;

typedef struct Idate
{
    int year;
    int month;
    int date;
    int hour;
    int minute;
}Idate;

typedef struct Ifile
{
    char* name;
    Idate date;
    char* type;
    long size;
    char disk;
    char* path;
}Ifile;

typedef struct IFnode
{
    Ifile file;
    Ibool ishead;
    struct IFnode* pre;
    struct IFnode* next;
    struct IFnode* child;
}IFnode;

Ibool addChild(IFnode* parent,Ifile* fchild);
Ibool addSibling(IFnode* pre,Ifile* next);
Ibool delFlist(IFnode* root);

#endif
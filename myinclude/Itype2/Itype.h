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

typedef struct IclickEvent
{
    int x1;
    int y1;
    int x2;
    int y2;
    void (*pfun)(void);
}IclickEvent;

typedef struct IclickStackNode
{
    IclickEvent event;
    struct IclickStackNode* next;
}IclickStackNode;

Ibool addChild(IFnode* parent,Ifile* fchild);
Ibool addSibling(IFnode* pre,Ifile* next);
Ibool delFlist(IFnode* root);
void initClickStack(IclickStackNode* top);
Ibool IclickStackPush(IclickStackNode* top,IclickEvent newEvent);
Ibool IclickStackPop(IclickStackNode* top);
Ibool IclickStackActive(IclickStackNode* top,int x,int y);

#endif
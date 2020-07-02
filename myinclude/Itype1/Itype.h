#if !defined(__ITYPE_H)
#define __ITYPE_H

#include "BaseMethods/IDate.h"
#include "BaseMethods/IFile.h"

typedef enum Ibool{false,true} IBool;
typedef enum Ibool{false,true} Ibool;
/* The second typedef was because it was used in the previous code. */

typedef struct IFileNode
{
    IFile file;
    IBool ishead;
    struct IFileNode* pre;
    struct IFileNode* next;
    struct IFileNode* child;
}IFnode;

typedef struct IFileNode IFileNode;
typedef struct IFileNode IFnode;
/* The second typedef was because it was used in the previous code. */


Ibool addChild(IFnode* parent,Ifile* fchild);
Ibool addSibling(IFnode* pre,Ifile* next);
Ibool delFlist(IFnode* root);

#endif
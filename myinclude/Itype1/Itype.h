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
/* The second typedef was because it was used in the previous code. */


IBool addChild(IFileNode* parent,IFile* fchild);
IBool addSibling(IFileNode* pre,IFile* next);
IBool delFlist(IFileNode* root);

#endif
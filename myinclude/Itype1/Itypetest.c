#include<stdio.h>
#include<stdlib.h>
#include"Itype.h"

int main()
{
    IFnode* root=(IFnode*)malloc(sizeof(IFnode));
    root->file.name="root";
    root->child = NULL;
    root->next = NULL;
    Ifile f[5] = { {"d1f1",{1,1,1,1,1},"file",81,'C',"."},{"d1f2",{1,1,1,1,1},"file",81,'C',"."},{"d2f1",{1,1,1,1,1},"file",81,'C',"d1f1\\"},{"d2f2",{1,1,1,1,1},"file",81,'C',"d1f1\\"},{"d2f3",{1,1,1,1,1},"file",81,'C',"d1f2\\"} };
    addChild(root,&f[0]);
    addChild(root,&f[1]);
    addChild(root->child,&f[2]);
    addChild(root->child,&f[3]);
    addChild(root->child->next,&f[4]);
    delFlist(root);
    return 0;
}
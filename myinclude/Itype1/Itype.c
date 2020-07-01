#include"Itype.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
Ibool addChild(IFnode* parent,Ifile* fchild)
{
    IFnode *child=(IFnode*)malloc(sizeof(IFnode));
    IFnode *temp=NULL;
    child->file=*fchild;
    child->next=NULL;
    if(!strcmp(parent->file.name,"folder"))
        return 0;
    if(parent->child)
    {
        temp=parent->child;
        while(temp->next)
        {
            temp=temp->next;
        }
        temp->next=child;
        child->pre=temp;
        child->ishead=0;
    }
    else
    {
        parent->child=child;
        child->pre=parent;
        child->ishead=1;
    }
    child->next=NULL;
    child->child=NULL;
    printf("%s is added as %s's child\n",child->file.name,parent->file.name);
    printf("its path is %c:\\%s%s\n",child->file.disk,strcmp(child->file.path,".")?child->file.path:"",child->file.name);
    return true;
}
Ibool delFlist(IFnode* root)
{
    if(root->child)
    {
        delFlist(root->child);
        root->child=NULL;
    }
    if(root->next)
    {
        delFlist(root->next);
        root->next=NULL;
    }
    printf("%s is freed\n",root->file.name);
    free(root);
    root=NULL;
    return 1;
}
Ibool addSibling(IFnode* pre,Ifile* next)
{
    IFnode *temp=pre;
    
    while(!temp->ishead)
    {
        temp=temp->pre;
    }
    return addChild(temp->pre,next);
}
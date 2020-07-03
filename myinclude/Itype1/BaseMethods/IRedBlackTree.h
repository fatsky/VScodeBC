/**
 * 还没写完qwq
 * 参考：https://www.luogu.com.cn/problem/solution/P3369
 **/
#include <stdio.h>
#include <ctype.h>
#include <assert.h>

#define bro(x) (((x)->ftr->lc == (x)) ? ((x)->ftr->rc) : ((x)->ftr->lc))
#define islc(x) ((x) != NULL && (x)->ftr->lc == (x))
#define isrc(x) ((x) != NULL && (x)->ftr->rc == (x))

#if !defined(T)
#define T int
/* Change T to the typename you want. */
/* Refactor the followings of T to use RedBlackTreee. */
T TAdd(T, T);
T TMinus(T, T);
T TMultiply(T, T);
T TDivide(T, T);
int TSmallerThan(T, T);
int TBiggerThan(T, T);

/* RedBlackTree */
struct RedBlackTree {
    struct Node;

    Node* _root;    // Root node
    Node* _hot;     // Temporary maintaining node.
};

typedef struct RedBlackTree RedBlackTree;

void RBTreeinit(T);
void RBTreeConnect34(RedBlackTree*, RedBlackTree::Node*, RedBlackTree::Node*, RedBlackTree::Node*, RedBlackTree::Node*, RedBlackTree::Node*, RedBlackTree::Node*);
void RBTreeSolveDoubleRed(RedBlackTree*, RedBlackTree::Node*);
void RBTreeSolveDoubleBlack(RedBlackTree*, RedBlackTree::Node*);
RedBlackTree::Node* RBTreeFind(RedBlackTree*, T, int);    /* Find, allow repetition */
RedBlackTree::Node* RBTreeRFind(RedBlackTree*, T, int);   /* Find, Don't allow repetition */
RedBlackTree::Node* RBTreeFindkth(RedBlackTree*, int, RedBlackTree::Node*);
int RBTreeFind_Rank(RedBlackTree*, T, RedBlackTree::Node*);

int RBTreeGet_rank(RedBlackTree*, T);
/* insert not declered yet. */
int RBTreeRemove(RedBlackTree*, T);
int RBTreeSize(RedBlackTree*);
int RBTreeEmpty(RedBlackTree*);
/**
 * iterator kth(int)
 * iterator lower_bound(T)
 * iterator upper_bound(T)
 **/
#if defined(__REDBLACK_DEBUG)
void RBTreeVis(RedBlackTree*);
void RBTreeCorrectlyConnected(RedBlackTree*);
#endif

#if defined(__REDBLACK_DEBUG)
    void CheckConnect(RedBlackTree*, RedBlackTree::Node*);
    void Previs(RedBlackTree*, RedBlackTree::Node*, int);
    void Invis(RedBlackTree*, RedBlackTree::Node*, int);
    void Postvis(RedBlackTree*, RedBlackTree::Node*, int);
#endif


#endif
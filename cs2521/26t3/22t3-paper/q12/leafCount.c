
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "BSTree.h"



bool isLeaf(BSTree t) {
    return t->left == NULL && t->right == NULL;
}

int leafCount(BSTree t, int pathLength) {
    if (isLeaf(t) && pathLength <= 0) {
        return 1;
    }

    if (isLeaf(t) && pathLength > 0) {
        return 0;
    }

    int l = 0;
    int r = 0;
    if (t->right != NULL) r = leafCount(t->right, pathLength - 1);
    if (t->left != NULL) l = leafCount(t->left, pathLength - 1);

    return l + r;
}


#include <assert.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#include <limits.h>
#include "list.h"

void append_list(List l, int val) {
    struct node *new = calloc(1, sizeof(struct node));
    new->next = NULL;
    new->value = val;
    if (l->last == NULL) {
        l->first = new;
        l->last = new;
    } else {
        l->last->next = new;
        l->last = new;
    }
}


List findShortestSublist(List l, int start, int end) {
    struct node *curr = l->first;
    int shortest_length = INT_MAX;
    int shortest_start = -1;
    int shortest_end = -1;


    int current_start = -1;
    bool seen_start = false;

    int index = 0;
    while (curr != NULL) {
        int value = curr->value;
        if (value == start) {
            seen_start = true;
            current_start = index; 
        }

        if (value == end) {
            if (seen_start) {
                int length = index - current_start + 1;
                if (length < shortest_length) {
                    shortest_length = length;
                    shortest_start = current_start;
                    shortest_end = index;
                }
                seen_start = false;

            }
        }

        curr = curr->next;
        index++;
    }

    /*
    printf("shortest length: %d, start: %d, end: %d\n",
            shortest_length, shortest_start, shortest_end);
            */

    List ret = ListNew();
    // we dont have any sublists
    if (shortest_start == -1) {
        return ret;
    }
    // case where we have the shortest sublist

    curr = l->first;
    index = 0;
    bool within_sublist = false;
    while (curr != NULL) {
        if (index == shortest_start) {
            within_sublist = true;
        }

        if (within_sublist) {
            append_list(ret, curr->value);
        }

        if (index == shortest_end) {
            break;
        }
        curr = curr->next;
        index++;
    }


    return ret;
}


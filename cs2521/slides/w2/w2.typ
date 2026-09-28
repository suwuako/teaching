#import "@preview/touying:0.7.4": *
#import themes.university: *
#import "@preview/typed-dsa:0.1.0": array-view

#show: university-theme.with(
  aspect-ratio: "16-9",
  config-info(
    title: "cs2521",
    subtitle: "Week 2 | Recursion & Algo Analysis",
    author: "Ronnie Low",
  ),
)


#show raw.where(block: true): block.with(
  fill: luma(240),      // Light gray background
  inset: 12pt,          // Internal padding
  radius: 4pt,          // Rounded corners
  stroke: 0.5pt + luma(200), // Subtle border
  width: 100%,          // Span full width
)

#title-slide() 
= Table of Contents
#outline(title: none, indent: 2em) 

= Agenda
== Week 2 Agenda
- Algorithm Analysis 
  - Time complexity rundown
  - Examples
- Recursion
  - What is recursion
  - Examples

= Algorithm Analysis
== How do we analyse algorithms?
- How much time an algorithm takes to complete
- How much memory (space) an algorithm needs to complete
\ 
- Usually, this is analysed in terms of worst cases! 
- We are usually concerned about how the algorithm will perform in its *worst* case
- We usually analyse time and space complexity in regards to the input size

== Input size relation
- Our inputs can take on any size
  - If our algorithm works on arrays but arrays can be any size, analysing complexity can be difficult
  - We want to generalise this: 
    - We can say that arrays have a size $n$. Thus, we analyse the complexity in relation to n!
- Lets look at some examples!

== Finding an item in an array
- We are tasked with finding an item in an array left to right:

$[1, 2, 3, 4, 5, 6, 7]$

- What are the best case time complexities and worst case time complexities#pause
  - Best case is when we are searching for 1, since we find it immediately#pause
  - worst case is when we are searching for 7, since its at the end. #pause 
  - That means that for an array of size $n$, our time complexity is $O(n)$

= Recursion
== What is recursion
- A problem solving technique where you solve subproblems
  - a subproblem is when you break a problem down into smaller, easier to solve problems
- How do we break a problem down into a subproblem?
== Subproblem example
We are tasked with finding the sum of a linked list. Lets do this on the example linked list below:

$[1] -> [2] -> [3] -> [4] -> [5]$

- How do we break this down into a smaller problem? #pause
  - The first item + rest of the list: 1 + (rest of the list 2, 3, 4, 5) #pause
  - We can then repeatedly solve this for the rest of the list! 
  - 2 + (rest of the list 3, 4, 5)

#grid(
  text(size: 24pt)[
```c 
int sum(struct node *head) {
  if (head == NULL) return 0;  
  return head->value + sum(head->next); 
}
  ```
  ]
)

= Tutorial demo!


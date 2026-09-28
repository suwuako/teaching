#import "@preview/touying:0.7.4": *
#import themes.university: *
#import "@preview/typed-dsa:0.1.0": array-view

#show: university-theme.with(
  aspect-ratio: "16-9",
  config-info(
    title: "cs2521",
    subtitle: "Week 3 | Sorting",
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
== Week 3 Agenda
- housekeeping
- Sorting algorithm properties
  - stability
  - adaptability
  - in-place

= housekeeping
== tutorial expectations
- engagement marks are now given on tutorials
- lectures are a prerequisite for tutorials
- tutorials will consist of a (brief) recap and then groupwork

= Sorting properties
== Stability
- Preserves relative order between items of equal comparisons #pause
- Lets try seeing this in action
- https://cgi.cse.unsw.edu.au/~cs2521/26T3/tutorials/week03/stable-sorter.html

== Adaptability
- Adaptive algorithms change behaviour/complexity based off the input data
- Consider the following two arrays:
Array 1: $[5, 1, 2, 3, 4]$\
Array 2: $[3, 1, 5, 4, 2]$

Lets try sorting this on the whiteboard using bubble sort
#pause
- As we can see, sorting the first array is faster than sorting array 2
- Thats adaptability!

== In place
- In place algorithms conduct the sorting within the original structure
- This saves us space complexity!
- Lets take a look at selection sort & mergesort
#pause
- mergesort needs a copy of the array
- selection sort sorts on the same algorithm 

= Tutorial time!

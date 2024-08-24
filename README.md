# Pythagorean Tree

## Description
The project will draw the Pythagoras tree using recursive method. The program will get the length of one side of the base square and the depth of the recursion through command line.

## Features
I wrote one function draw_Ptree() to draw the tree, the way I did it was quite math heavy and kind of brute force, but it works and it makes sense to me. I figured out that there are only 8 types of tree inside a big Pythagoras tree, each type has its own way to calculate the coordinates for the next two children squares, so I wrote an if-else classic code, has a lot to do with math, calculate the coordinates. I also noticed that there are only 2 angles, 0 degree and 45 degree, so I put that inside the if-else too. But still, I managed to call recursively the draw_Ptree() function. So it is still a recursive method.

## Issues
My initial problem was to start with the up leftmost coordinate of the base square, then figure out the coordinates for the next 2 children. However, that won't work with more children as the coordinates got messed up. Then I tried to start from the center of the base square, and use the 8-types way (like I described above) to do, and it worked.

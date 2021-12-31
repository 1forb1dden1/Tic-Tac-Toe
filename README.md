# Tic-Tac-Toe
A simple Tic-Tac-Toe game that I built in c++ to experiment with two-dimensional arrays. 
The logic that follows the creation of this program is a system that continually checks if conditions are met. 
Conditions with priority in this order from top to bottom:
1) is there a winner?
2) is the spot on the board chosen?
3) Who's turn is it?
To check if there is a winner, I created a function that 8 win conditions ( horizontal, vertical, and diagonal cross ).
To check if there is a spot on the board I just simply checked to see if the spot on the board has a 'o' or 'x'. 
To check who's turn is it, I would simply just check to see if a number is even or odd while manipulating it's value to become even and odd.
Following this system, we would just continually ask the two players to input their positions into the board until there is a winner. 
# Problems with this program: 
1. The program does not trap for letters or strings.
2. The program ends abruptly when one of the condition is met. 
3. The way the game is played through input of the positions column and row. This can be confusing and isn't very player friendly.
4. The interface is essentially just built based on keyboard characters. It would be much more complete if we had actual graphical interface to make this project more "whole".

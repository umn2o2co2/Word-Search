# Word-Search

This is a simple game coded using C. Find a word from the maze of letters and enter it!

Objective: Find a 3-letter or 4-lettered word from a given 8*8 matrix 

Command Line Input: -> gcc matrixGenerationRandomWordsFinal.c searchmat.c searchdictionary.c -o game
                    -> ./game

How code works : 
1) Generate a Matrix using words from the dictionary.
2) Ask the user to enter a word that he sees in the matrix.
3) Check if the word is actually there in the matrix.
4) Check if word exists in the dictionary.

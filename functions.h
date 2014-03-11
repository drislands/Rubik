#include "classes.h"
#include <stdio>

#pragma once

using namespace std;

//////
// PIECE FUNCTIONS
//////
// Copy contstructor. Take a pointer to a Piece, and copies all its members to a new Piece
Piece::Piece(Piece *P) {
	this->cube = P->cube;
	this->type = P->type;
	this->front = P->front;
	this->back = P->back;
	this->left = P->left;
	this->right = P->right;
	this->top = P->top;
	this->down = P->down;
}
//
// Blank constructor, ideally only needed for center Piece. Creates a new Piece with only the cube member set.
Piece::Piece(Cube *C):cube(C){ };
//
// Face Piece constructor. Creates a Piece with only one outward-facing side.
Piece::Piece(Cube *C, side s, color c):cube(C),type(FACE) {
	setColor(s,c);
}
//
// Side Piece constructor.
Piece::Piece(Cube *C, side s1, color c1, side s2, color c2):cube(C),type(SIDE) {
	setColor(s1,c1);
	setColor(s2,c2);
}
//
// Corner Piece constructor.
Piece::Piece(Cube *C, side s1, color c1, side s2, color c2, side s3, color c3):cube(C),type(CORNER) {
	setColor(s1,c1);
	setColor(s2,c2);
	setColor(s3,c3);
}
//

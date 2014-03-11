#pragma once

//////
// ENUMERATIONS
//////
// enumeration type for the different types of pieces
enum pType { CORNER, SIDE, FACE, NONE };
//
// enumeration type for the 6 different colors
enum color { WHITE, YELLOW, RED, ORANGE, BLUE, GREEN, NONE };
//
// enumeration type for the 6 different sides of the cube
enum side  { FRONT, BACK, LEFT, RIGHT, TOP, DOWN };
//
//////////


//////
// CLASSES
//////
// the class representing each of the 27 individual pieces that make up the cube
class Piece {
private:
	Cube * cube;			// a pointer to the containing cube
	const pType type = pType.NONE;	// the type of piece, which will not change at any point
	color front = color.NONE;	// the front, back, etc colors, which are defaulted to none.
	color back = color.NONE;	//  as a result each piece is effectively treated as a cube,
	color left = color.NONE;	//  with 6 sides that are each represented. our functions
	color right = color.NONE;	//  will be changing the colors of the sides the effect
	color top = color.NONE;		//  a rotation.
	color down = color.NONE;

public:
	Piece(Piece*);						// copy constructor
	Piece(Cube*);						// constructor for the center piece
	Piece(Cube*, side, color);				// constructor for face piece
	Piece(Cube*, side, color, side, color);			// constructor for side piece
	Piece(Cube*, side, color, side, color, side, color);	// constructor for corner piece
};
//
// the class representing the cube itself.
class Cube {
private:
	Piece* piece[3][3][3];		// (if i've declared this properly) this is a 3-D array of
					//  pointers to Pieces.

public:
	Cube();				// standard constructor--the values of the pieces will be set later
	Cube(Cube*);			// copy constructor

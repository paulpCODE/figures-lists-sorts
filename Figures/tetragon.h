#pragma once
#include"cmath"
#include"Base.h"

enum tetrType {not_setted_tetragon, parallelogram, rectangle, square, rhombus, trapezoid};
class tetragon : public Base
{
private:
	point _a, _b, _c, _d;//points of tetragon.
	double _ab, _bc, _cd, _ad, _S, _P;//sides, area and perimetr.
	bool _TetrOrNot;//tetragon existence.
	tetrType _tetrType;//type of tetragon.
	/**
	Checks tetragon on type. Parallelogram, rectangle, square, rhombus, trapezoid.
	
	@param distAB Dist from point A to point B.
	@param distBC Dist from point B to point C.
	@param distCD Dist from point C to point D.
	@param distAD Dist from point A to point D.
	@param area Area of tetragon.
	@param type Type of tetragon.
	*/
	void check(double distAB, double distBC, double distCD, double distAD, double area, tetrType &type);
public:
	/**
	Overloaded assignment operator.
	
	@param tetr Tetragon which we want to assign to this tetragon.
	@return *this Modified tetragon.
	*/
	tetragon operator = (tetragon tetr);
	/**
	Creates tetragon after inputing coordinates.

	@return *this Created tetragon.
	*/
	tetragon Set_tetragon();
	/**
	Returns existence of tetragon
	
	@return true if tetragon exists. false if tetragon isnt exists.
	*/
	bool Get_existence() override;
	/**
	Prints the information of tetragon.
	\area, perimetr and type.
	*/
	void print() override;
	double Get_area() override;
	double Get_perimetr() override;

	tetragon();
	~tetragon();
};


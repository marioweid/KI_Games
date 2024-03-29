#pragma once

#include "LeftShoulderFunction.h"
#include "RightShoulderFunction.h"
#include "TrapezFunction.h"
#include "TriangleFuncion.h"
#include <utility>
#include <vector>
#include <Windows.h>

class FuzzySet
{
private:
	std::vector<FuzzyFunction*> functions;

public:	
	FuzzySet();
	~FuzzySet();

	void addRightShoulder(double leftInterval, double rightInterval, double midle, char*  name);
	void addLeftShoulder(double leftInterval, double rightInterval, double midle, char*  name);
	void addTrapez(double leftInterval, double rightInterval, double leftMidle,double rightMidle, char*  name);
	void addTriangle(double leftInterval, double rightInterval, double midle, char*  name);
	std::pair<double, char*> getValue(double tValue);
	double AOM();
	double Centroid( double steps);
};


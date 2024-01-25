#pragma once
#include "ParticleGenerator.h"

class CircleGenerator : public ParticleGenerator
{
public:
	CircleGenerator();
	~CircleGenerator();

	void generate(double dt, ParticleData* p, size_t startId, size_t endId);
};


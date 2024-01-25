#pragma once
#include "ParticleGenerator.h"
class BoxGenerator : public ParticleGenerator
{
public:
	BoxGenerator();
	~BoxGenerator();

	void generate(double dt, ParticleData* p, size_t startId, size_t endId);
};


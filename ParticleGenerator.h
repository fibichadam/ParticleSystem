#pragma once
#include "ParticleData.h"
#include <ofVec3f.h>
class ParticleGenerator
{
public:
	ofVec3f pos;
	ofVec3f offset;

	ParticleGenerator();
	~ParticleGenerator();

	virtual void generate(double dt, ParticleData *p, size_t startId, size_t endId);

};


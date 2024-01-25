#pragma once
#include "ParticleData.h"
#include "ParticleGenerator.h"
#include "BoxGenerator.h"
class ParticleEmitter
{
	int emitRate;
	std::vector<ParticleGenerator*> generators;

public:
	ParticleEmitter();
	ParticleEmitter(int rate);
	~ParticleEmitter();

	void emit(double dt, ParticleData *p);
	void addGenerator(ParticleGenerator* generator);
};


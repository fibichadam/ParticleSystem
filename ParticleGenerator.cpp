#include "ParticleGenerator.h"

ParticleGenerator::ParticleGenerator()
{
	pos = ofVec3f(0);
	offset = ofVec3f(0);
}

void ParticleGenerator::generate(double dt, ParticleData* p, size_t startId, size_t endId)
{
}

ParticleGenerator::~ParticleGenerator()
{
}

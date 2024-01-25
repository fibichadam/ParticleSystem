#include "ParticleEmitter.h"


ParticleEmitter::ParticleEmitter()
{
	emitRate = 150;
}

ParticleEmitter::ParticleEmitter(int rate)
{
	emitRate = rate;
}

ParticleEmitter::~ParticleEmitter()
{
}


void ParticleEmitter::emit(double dt, ParticleData *p)
{
	size_t maxNewParticles = dt * emitRate;

	for (auto gen : generators)
	{
		size_t startId = p->alive;
		size_t endId = std::min(p->alive + maxNewParticles, p->maxCount);
		gen->generate(dt, p, startId, endId);
	}
}

void ParticleEmitter::addGenerator(ParticleGenerator* generator)
{
	generators.push_back(generator);
}
#include "ParticleData.h"
#include <ofColor.h>

ParticleData::ParticleData()
{
}

void ParticleData::generate(size_t maxSize)
{
	for (int i = alive; i < maxSize; i++)
	{
		force[i] = ofVec3f(0);
		acceleration[i] = ofVec3f(0);
		velocity[i] = ofVec3f(0);
		position[i] = ofVec3f(0);
		mass[i] = 5;
		radius[i] = 5;
		color[i] = ofColor(ofRandom(255), ofRandom(255), ofRandom(255));
		creationTime[i] = std::chrono::high_resolution_clock::now();
	}
}

void ParticleData::kill(size_t id)
{
	force[id] = force[alive - 1];
	acceleration[id] = acceleration[alive - 1];
	velocity[id] = velocity[alive - 1];
	position[id] = position[alive - 1];
	mass[id] = mass[alive - 1];
	radius[id] = radius[alive - 1];
	color[id] = color[alive - 1];
	creationTime[id] = creationTime[alive - 1];
	lifeTime[id] = lifeTime[alive - 1];

	alive--;
}

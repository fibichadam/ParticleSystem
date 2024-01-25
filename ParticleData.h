#pragma once
#include <ofVec3f.h>
#include <ofColor.h>
#include <chrono>
class ParticleData
{
public:
	ofVec3f force[3000];
	ofVec3f acceleration[3000];
	ofVec3f velocity[3000];
	ofVec3f position[3000];
	ofColor color[3000];
	float radius[3000];
	float mass[3000];
	std::chrono::high_resolution_clock::time_point creationTime[3000];
	float lifeTime[3000];

	size_t alive = 0;
	size_t maxCount = 3000;
	

	ParticleData();
	ParticleData(size_t maxCount) { generate(maxCount); };
	~ParticleData() {};

	void generate(size_t maxSize);
	void kill(size_t id);
};


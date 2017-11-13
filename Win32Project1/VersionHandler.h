#pragma once
#include "FieldVersion.h"
#include <vector>
class VersionHandler
{
public:
	VersionHandler();
	~VersionHandler();
	void addVersion(FieldVersion* version);
	void undo();
	void redo();
	void reset();
	int curVersion;
	std::vector<FieldVersion*> versions;
	FieldVersion* getCurrentVersion();
};


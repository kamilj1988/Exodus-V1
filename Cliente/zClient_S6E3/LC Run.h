#pragma once
// -------------------------------------------------------------------------------
#include "stdafx.h"
#include <vector>
// -------------------------------------------------------------------------------

class lcrunname
{
public:
	lcrunname();
	virtual ~lcrunname();
	// ----
	void isRunning();
	// ----
}; extern lcrunname g_lcrunname;
// -------------------------------------------------------------------------------
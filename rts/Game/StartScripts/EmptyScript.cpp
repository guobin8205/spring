#include "StdAfx.h"
// EmptyScript.cpp: implementation of the CEmptyScript class.
//
//////////////////////////////////////////////////////////////////////

#include "EmptyScript.h"
#include "mmgr.h"
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

static CEmptyScript es;

CEmptyScript::CEmptyScript()
: CScript(std::string("Empty script"))
{

}

CEmptyScript::~CEmptyScript()
{

}

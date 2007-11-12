/**
 * This file is part of scleaner project.

 * Copyright (C) 2007 FROUIN Jean-Michel

 * Visit scleaner website : http://www.scleaner.fr
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/


#include <iostream>
#include <plugins/inplugin_initializer.h>
#include "mac.h"
#include <sys/stat.h>			 ///Get file size.
#include <leak/leak_detector.h>
#include <engine/engine.h>

Plugins::CPluginInitializerIn<CmacPlugin> g_mac;

CmacPlugin::CmacPlugin()
{
	setName("mac");
}


CmacPlugin::~CmacPlugin()
{
}


void CmacPlugin::processFile(const std::string& _filename)
{
	if(_filename.find(".dstore", 0) == (_filename.length()-7))
	{
		m_fl.push_back(_filename);
	}
}


std::string CmacPlugin::Description()
{
	return "Find .dstore file";
}
/* vi:set ts=4: */
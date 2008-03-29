/**
 * This file is part of scleaner project.

 * Copyright (C) 2007, 2008 FROUIN Jean-Michel

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


#include <plugins/inplugin_initializer.h>
#include "logs.h"
#include <leak/leak_detector.h>
#include <engine/engine.h>

Plugins::CPluginInitializerIn<ClogsPlugin> gLogs;

ClogsPlugin::ClogsPlugin()
{
    SetName("logs");
}


ClogsPlugin::~ClogsPlugin()
{
}


void ClogsPlugin::GetDirectory(std::string& path)
{
    path = "/var/log/";
}


void ClogsPlugin::ProcessFile(const std::string& filename)
{
    fFL.push_back(filename);
}


std::string ClogsPlugin::Description()
{
    return "Find old logs";
}
/* vi:set ts=4: */

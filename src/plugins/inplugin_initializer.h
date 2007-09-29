/*
Copyright (C) 2007 FROUIN Jean-Michel
------------------------------------------------------
This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

------------------------------------------------------
Project : scleaner
------------------------------------------------------
$Date: 2007-09-25 22:33:08 +0200 (mar, 25 sep 2007) $
$Rev: 128 $
$Author: snoogie $
------------------------------------------------------
*/

#ifndef _INPLUGIN_INITIALIZER_H_
#define _INPLUGIN_INITIALIZER_H_

#include <config.h>
#include <iostream>
#include <engine/engine.h>

#include "plugin_manager.h"

template <class T>
class CPluginInitializerIn
{
	public:
		CPluginInitializerIn()
		{
			CPluginManager* l_pfm = CPluginManager::Instance();
			T* l_obj = new T;
			if(!CEngine::isRoot())
			{
				if(!l_obj->needRoot())
				{
					l_pfm->add(l_obj);
				}
			}
			else
			{
				l_pfm->add(l_obj);
			}

		}
};
#endif							 //_INPLUGIN_INITIALIZER_H_
/* vi:set ts=4: */
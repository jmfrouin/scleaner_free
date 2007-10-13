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
$Date$
$Rev$
$Author$
------------------------------------------------------
*/

/*! @page page3 Plugins documentations.
 * - @subpage logs
 */

/*! @page logs logs: input plugin.
 * @section desc Description
 * This plugin allow user to clean <b>logs</b> files.
 * <br>
 * In fact it just scan <b>/var/log/</b> and its subfolders.
 * @section param Parameters
 * @section pb Knows bugs
 */

#ifndef _LOGS_H_
#define _LOGS_H_

#include <config.h>
#include <plugins/root_plugin.h>

class ClogsPlugin : public Plugins::IRootPlugin
{
	public:
		ClogsPlugin();
		~ClogsPlugin();

		/*!
		 *@brief From IPlugin.
		 */
		eType Type();

		/*!
		*@brief From Plugins::IRootPlugin
		*/
		void getDirectory(std::string& _path);

		/*!
		 *@brief From IInPlugin
		 */
		void processFile(const std::string& _filename);
		bool needRoot();
};
#endif							 //_LOGS_H_
/* vi:set ts=4: */

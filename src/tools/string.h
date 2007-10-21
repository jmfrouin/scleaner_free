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

#ifndef _STRING_H_
#define _STRING_H_

#include <config.h>
#include <string>

namespace Tools
{
	/**
	 * @brief In order to enhance std::string.
	 */
	class CString : public std::string
	{
		public:
			/*!
			 *@brief Default constructor.
			 */
			CString():
			std::string()
			{
			}
	
			/*!
			 *@brief Destructor.
			 */
			virtual ~CString();
	
			/*!
			*@brief lowercase string.
			*/
			void toLower()
			{
      			for(int i=0; i<length(); ++i)
				{
      				if(this->at(i) >= 0x41 && this->at(i) <= 0x5A)
					{
      					this->at(i) = this->at(i) + 0x20;
					}
				}
      		}				
	};
}
#endif							 //_STRING_H_
/* vi:set ts=4: */
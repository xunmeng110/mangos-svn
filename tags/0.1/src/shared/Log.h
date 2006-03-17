/* 
 * Copyright (C) 2005 MaNGOS <http://www.magosproject.org/>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef MANGOSSERVER_LOG_H
#define MANGOSSERVER_LOG_H

#include "Common.h"
#include "Singleton.h"

extern uint8 loglevel;

class Log : public Singleton< Log >
{
    public:
        void outString( const char * str, ... );
        void outError( const char * err, ... );
        void outBasic( const char * str, ... );
        void outDetail( const char * str, ... );
        void outDebug( const char * str, ... );
        void outMenu( const char * str, ... );

};

#define sLog Log::getSingleton()


#ifdef MANGOS_DEBUG
#define DEBUG_LOG Log::getSingleton().outDebug
#else
#define DEBUG_LOG
#endif

#endif

/***************************************************************************
 *   Copyright (C) 2013 by Andrey Afletdinov <fheroes2@gmail.com>          *
 *                                                                         *
 *   Part of the Free Heroes2 Engine:                                      *
 *   http://sourceforge.net/projects/fheroes2                              *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#pragma once

#include <string>

#define COUT(x) { std::cerr << x << std::endl; }

#define VERBOSE(x) { COUT(System::GetTime() << ": [VERBOSE]\t" << __FUNCTION__ << ":  " << x); }
#define ERROR(x) { COUT(System::GetTime() << ": [ERROR]\t" << __FUNCTION__ << ":  " << x); }

#include "dir.h"
#include <vector>
#include <functional>

namespace System
{
    int SetEnvironment(const char *name, const char *value);

    const char *GetEnvironment(const char *name);

    int MakeDirectory(const std::string &);

    std::string ConcatePath(const std::string &, const std::string &);

    ListDirs GetDataDirectories(const std::string &);

    ListFiles GetListFiles(const std::string &, const std::string &, const std::string &);

    std::string GetHomeDirectory(const std::string &);

    std::string GetDirname(const std::string &);

    std::string GetBasename(const std::string &);

    std::string GetTime();

    void SetLocale(int, const char *);

    std::string GetMessageLocale(int /* 3: en_us.utf-8, 2: en_us, 1: en */);

    size_t GetMemoryUsage();

    int GetCommandOptions(int argc, std::vector<std::string> argv, const char *optstring);

    char *GetOptionsArgument();

    bool IsFile(const std::string &name, bool writable = false);

    bool IsDirectory(const std::string &name, bool writable = false);

    int Unlink(const std::string &);

    bool isEmbededDevice();

    bool isRunning();

    int CreateTrayIcon(bool);

    void PowerManagerOff(bool);

    int ShellCommand(const char *);

    int GetRenderFlags();
}

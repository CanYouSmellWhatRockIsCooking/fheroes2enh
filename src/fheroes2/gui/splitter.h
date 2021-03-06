/***************************************************************************
 *   Copyright (C) 2009 by Andrey Afletdinov <fheroes2@gmail.com>          *
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

#include "gamedefs.h"

#include "sprites.h"

class Splitter : protected SpriteMove
{
public:
    Splitter();

    Splitter(const Surface &, const Rect &);

    void Forward();

    void Backward();

    void MoveIndex(int);

    void MoveCenter();

    void RedrawCursor();

    void HideCursor();

    void ShowCursor();

    void SetSprite(const Surface &);

    void SetArea(const Rect &);

    void SetRange(int smin, int smax);

    bool isVertical() const;

    int GetCurrent() const
    { return cur; }

    int GetStep() const
    { return step; }

    int Max() const
    { return max; };

    int Min() const
    { return min; };

    const Rect &GetRect() const
    { return area; };

private:
    Point GetPositionCursor();

    Rect area;
    int step;
    int min;
    int max;
    int cur;
};


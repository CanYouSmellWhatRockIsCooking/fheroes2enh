/***************************************************************************
 *   Copyright (C) 2011 by Andrey Afletdinov <fheroes2@gmail.com>          *
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

#ifndef H2ARTIFACT_ULTIMATE_H
#define H2ARTIFACT_ULTIMATE_H

#include "gamedefs.h"
#include "artifact.h"
#include "ByteVectorReader.h"
#include "ByteVectorWriter.h"

class Artifact;

class UltimateArtifact : public Artifact
{
public:
    UltimateArtifact();

    bool isPosition(s32) const;

    bool isFound() const;

    void SetFound(bool);

    void Set(s32, const Artifact &);

    void Reset();

    const Surface &
    GetPuzzleMapSurface() const;

    const Artifact &
    GetArtifact() const;

private:
    friend ByteVectorWriter &operator<<(ByteVectorWriter &, const UltimateArtifact &);
    
    friend ByteVectorReader &operator>>(ByteVectorReader &, UltimateArtifact &);

    void MakeSurface();

    s32 index;
    Surface puzzlemap;
    bool isfound;
};

ByteVectorWriter &operator<<(ByteVectorWriter &, const UltimateArtifact &);

ByteVectorReader &operator>>(ByteVectorReader &, UltimateArtifact &);

#endif

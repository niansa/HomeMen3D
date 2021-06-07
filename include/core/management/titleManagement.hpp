/*
 *   This file is part of HomeMen3D
 *   Copyright (C) 2019 DeadPhoenix8091, Epicpkmn11, Flame, RocketRobz, StackZ,
 * TotallyNotGuy
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *   Additional Terms 7.b and 7.c of GPLv3 apply to this file:
 *       * Requiring preservation of specified reasonable legal notices or
 *         author attributions in that material or in the Appropriate Legal
 *         Notices displayed by works containing it.
 *       * Prohibiting misrepresentation of the origin of that material,
 *         or requiring that modified versions of such material be marked in
 *         reasonable ways as different from the original version.
 */

#ifndef TITLEMANAGEMENT_HPP
#define TITLEMANAGEMENT_HPP

#include <3ds.h>
#include <algorithm>
#include <citro2d.h>
#include <string>

class TitleManagement {
public:
  TitleManagement(void) = default;
  ~TitleManagement(void);

  // Title Handling.
  bool load(u64 id, FS_MediaType mediaType);

  // Getters
  u32 highId(void) { return (u32)(mId >> 32); }

  u32 lowId(void) { return (u32)mId; }

  u64 ID(void) { return (u64)highId() << 32 | lowId(); }

  FS_MediaType mediaType(void) { return mMedia; }

  C2D_Image icon(void) { return mIcon; }

  std::string name(void) { return mName; }

  std::string Author(void) { return mAuthor; }

private:
  u64 mId;
  FS_MediaType mMedia;
  FS_CardType mCard;
  C2D_Image mIcon;
  std::string mName;
  std::string mAuthor;
};

#endif

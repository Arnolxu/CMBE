/*
    This file is part of Toryus.

    Toryus is free software: you can redistribute it and/or
    modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation, either version
    3 of the License, or (at your option) any later version.

    Toryus is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty
    of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
    See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public
    License along with Toryus. If not, see
    <https://www.gnu.org/licenses/>.
*/

#pragma once

typedef enum
{
    MOVER_CELL,
    GENERATOR_CELL,
    ROTATOR_CELL_CW,
    ROTATOR_CELL_CCW,
    PUSH_CELL,
    SLIDE_CELL,
    ENEMY_CELL,
    IMMOBILE_CELL,
    TRASH_CELL,
} cmbe_cell_t;

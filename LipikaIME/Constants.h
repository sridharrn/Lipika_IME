/*
 * LipikaIME a user-configurable phonetic Input Method Engine for Mac OS X.
 * Copyright (C) 2013 Ranganath Atreya
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

enum DJLogLevel {
    DJ_DEBUG = 1,
    DJ_WARNING = 2,
    DJ_ERROR = 3
};

enum DJBackspaceBehavior {
    DJ_DELETE_OUTPUT = 1,
    DJ_DELETE_MAPPING = 2,
    DJ_DELETE_INPUT = 3
};

enum DJOnUnfocusBehavior {
    DJ_DISCARD_UNCOMMITTED = 1,
    DJ_COMMIT_UNCOMMITTED = 2,
    DJ_RESTORE_UNCOMMITTED = 3
};

enum DJCandidateWindowText {
    DJ_OUTPUT_IN_CANDIDATE = 0,
    DJ_INPUT_IN_CANDIDATE = 1
};
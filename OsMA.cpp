/// @file OsMA.cpp
/// @author Copyright 2017, Egor Pervuninski
/// @brief OsMA indicator

//-----------------------------------------------------------------------------
// Copyright 2017 Egor Pervuninski
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//-----------------------------------------------------------------------------

#include <windows.h>
#include "IndicatorInterfaceUnit.h"
#include "TechnicalFunctions.h"

//-----------------------------------------------------------------------------

// External variables

// Buffers

//-----------------------------------------------------------------------------

/// @brief Initialize indicator
EXPORT void __stdcall Init() {
	IndicatorShortName("OsMA");
}

//-----------------------------------------------------------------------------

/// @brief Calculate requested bar
EXPORT void __stdcall Calculate(int i) {
}

//-----------------------------------------------------------------------------

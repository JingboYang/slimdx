#include "stdafx.h"
/*
* Copyright (c) 2007-2009 SlimDX Group
* 
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
* 
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*/

using namespace testing;
using namespace System;
using namespace SlimDX;

TEST( Vector2Tests, ConstructDefault )
{
	Vector2 vector = Vector2();

	ASSERT_EQ( 0.0f, vector.X );
	ASSERT_EQ( 0.0f, vector.Y );
}

TEST( Vector2Tests, ConstructWithX )
{
	Vector2 vector = Vector2( 0.75f );

	ASSERT_EQ( 0.75f, vector.X );
	ASSERT_EQ( 0.75f, vector.Y );
}

TEST( Vector2Tests, ConstructWithXY )
{
	Vector2 vector = Vector2( 0.75f, 1.25f );

	ASSERT_EQ( 0.75f, vector.X );
	ASSERT_EQ( 1.25f, vector.Y );
}

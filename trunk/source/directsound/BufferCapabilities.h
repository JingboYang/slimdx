/*
* Copyright (c) 2007-2008 SlimDX Group
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
#pragma once

namespace SlimDX
{
	namespace DirectSound
	{
		/// <summary>
		/// Describes the capabilities of a DirectSound buffer object.
		/// </summary>
		public value class BufferCapabilities
		{
		internal:
			BufferCapabilities( const DSBCAPS &caps );

		public:
			/// <summary>
			/// Size of this buffer, in bytes.
			/// </summary>
			property int BufferSize;

			/// <summary>
			/// The rate, in kilobytes per second, at which data is transferred to the buffer memory when <see cref="SoundBuffer::Unlock"/> is called.
			/// </summary>
			property int UnlockTransferRate;

			/// <summary>
			/// The processing overhead as a percentage of main processor cycles needed to mix this sound buffer.
			/// </summary>
			property int PlayCpuOverhead;

			/// <summary>
			/// Gets or Sets whether the buffer uses the new behavior of the play cursor when retrieving the current position.
			/// </summary>
			property bool CanGetCurrentPosition;

			/// <summary>
			/// Gets or Sets whether the buffer has 3D control capability.
			/// </summary>
			property bool Control3D;

			/// <summary>
			/// Gets or Sets whether the buffer has frequency control capability.
			/// </summary>
			property bool ControlFrequency;

			/// <summary>
			/// Gets or Sets whether the buffer has volume control capability.
			/// </summary>
			property bool ControlVolume;

			/// <summary>
			/// Gets or Sets whether the buffer has pan control capability.
			/// </summary>
			property bool ControlPan;

			/// <summary>
			/// Gets or Sets whether the buffer has position notification capability.
			/// </summary>
			property bool ControlPositionNotify;

			/// <summary>
			/// Gets or Sets whether the buffer supports effects processing.
			/// </summary>
			property bool ControlEffects;

			/// <summary>
			/// Gets or Sets whether the buffer is a global sound buffer.
			/// </summary>
			property bool GlobalFocus;

			/// <summary>
			/// Gets or Sets whether the buffer uses hardware mixing.
			/// </summary>
			property bool LocateInHardware;

			/// <summary>
			/// Gets or Sets whether the buffer is in software memory and uses software mixing.
			/// </summary>
			property bool LocateInSoftware;

			/// <summary>
			/// Gets or Sets whether the buffer can be assigned to a hardware or software resource at play time.
			/// </summary>
			property bool LocationDefer;

			/// <summary>
			/// Gets or Sets whether the sound is reduced to silence at the maximum distance. The buffer will stop playing when the maximum distance is exceeded, so that processor time is not wasted. Applies only to software buffers.
			/// </summary>
			property bool Mute3DAtMaximumDistance;

			/// <summary>
			/// Gets or Sets whether the buffer is a primary buffer.
			/// </summary>
			property bool PrimaryBuffer;

			/// <summary>
			/// Gets or Sets whether the buffer is in on-board hardware memory.
			/// </summary>
			property bool StaticBuffer;

			/// <summary>
			/// Gets or Sets whether the buffer has sticky focus.
			/// </summary>
			property bool StickyFocus;
		};
	}
}
	
#pragma once

#include "DemoData.h"

using namespace System;
using namespace System::Collections::Generic;

namespace CppCliLib {
	ref class DemoDataEnumerator : IEnumerator<DemoData^>
	{
	public:
		// Inherited via IEnumerator
		//virtual void Dispose();	// Replaced with destructor

		// This is required as IEnumerator<T> also implements IEnumerator
		virtual property System::Object ^ Current2
		{
			virtual Object^ get() = System::Collections::IEnumerator::Current::get
			{
				return Current;
			}
		};
				
		virtual property CppCliLib::DemoData ^ Current
		{
			virtual DemoData^ get() = IEnumerator<DemoData^>::Current::get
			{
				return m_currentDemoData;
			}
		};

		virtual bool MoveNext() = IEnumerator<DemoData^>::MoveNext;
		virtual void Reset();
	
		DemoDataEnumerator() { m_currentIndex = 1; }
		~DemoDataEnumerator() {}

	private:
		DemoData^ m_currentDemoData;
		UInt32 m_currentIndex;
	};
}


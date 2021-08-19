#include "pch.h"
#include "DemoDataEnumerator.h"

bool CppCliLib::DemoDataEnumerator::MoveNext()
{
	if (m_currentDemoData != __nullptr)
	{
		DemoData^ tempDemoData = m_currentDemoData;
		//delete tempDemoData;		// Not needed to be called, but we may choose to do it
		m_currentDemoData = __nullptr;
	}

	try
	{
		m_currentDemoData = gcnew DemoData(m_currentIndex, 2, m_currentIndex + 4, String::Format("DemoData{0}", m_currentIndex));
		m_currentIndex++;
		return true;
	}
	catch (OutOfMemoryException^ ooe)
	{
		Console::WriteLine("Not able to allocate new object. Error: {0}", ooe->Message);
		return false;
	}
}

void CppCliLib::DemoDataEnumerator::Reset()
{
	throw gcnew System::NotImplementedException();
}

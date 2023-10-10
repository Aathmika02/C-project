//File RAII implementation file
//Landon Swartz

#include"fileRAII.h"

void File::open(const std::string& fileName)
{
	m_file_handle.open(fileName);
	filename = fileName;
}

void File::close()
{
	if(m_file_handle.is_open())
	{
		m_file_handle.close();
	}
}

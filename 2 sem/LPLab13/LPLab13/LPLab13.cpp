//#include "stdafx.h"
//#include "Error.h"
//#include "Parm.h"
//#include "Log.h"
//#include "In.h"
//#include "FST.h"
//int wmain(int argc, wchar_t* argv[])
//{
//	setlocale(LC_ALL, "ru");
//	int colp = 0;
//	Log::LOG	log = Log::INTLOG;
//	try
//	{
//		Parm::PARM parm = Parm::getparm(argc, argv);
//		log = Log::getlog(parm.log);
//		Log::WriteLine(log, "Тест: ", "без ошибок ", "");
//		Log::WriteLog(log);
//		Log::WriteParm(log, parm);
//		In::IN in = In::getin(parm.in);
//	Log:WriteIn(log, in);
//
//		char String[100]{};
//		for (int i = 0, j = 0; i < strlen((const char*)in.text); j++)
//		{
//			String[i++] = in.text[j];
//
//			if (String[i - 1] == '|')
//			{
//				String[i - 1] = '\0';
//				i = 0;
//
//				FST::FST myFST(
//					String,
//					9,
//					/*0*/	FST::NODE(1, FST::RELATION('a', 1)),
//					/*1*/	FST::NODE(5, FST::RELATION('b', 1), FST::RELATION('b', 2), FST::RELATION('b', 3), FST::RELATION('b', 4), FST::RELATION('b', 6)),
//					/*2*/	FST::NODE(4, FST::RELATION('c', 2), FST::RELATION('c', 3), FST::RELATION('c', 4), FST::RELATION('c', 5)),
//					/*3*/	FST::NODE(3, FST::RELATION('d', 3), FST::RELATION('d', 4), FST::RELATION('d', 5)),
//					/*4*/	FST::NODE(2, FST::RELATION('e', 4), FST::RELATION('e', 5)),
//					/*5*/	FST::NODE(4, FST::RELATION('f', 6), FST::RELATION('f', 2), FST::RELATION('f', 3), FST::RELATION('f', 4)),
//					/*6*/	FST::NODE(2, FST::RELATION('b', 6), FST::RELATION('b', 7)),
//					/*7*/	FST::NODE(1, FST::RELATION('g', 8)),
//					/*8*/	FST::NODE()
//				);
//				if (FST::execute(myFST))
//				{
//					colp++;
//					std::cout << "\nЦепочка " << myFST.string << " распознана.\n";
//					*log.stream << "\nЦепочка " << myFST.string << " распознана.\n";
//				}
//				else
//				{
//					colp++;
//					std::cout << "\nЦепочка " << myFST.string << " не распознана. Ошибка распознавания. Строка: " << colp << " Символ: " << myFST.posp << "\n";
//					*log.stream << "\nЦепочка " << myFST.string << " не распознана. Ошибка распознавания. Строка: " << colp << " Символ: " << myFST.posp << "\n";
//				}
//				strcpy_s(String, "");
//			}
//		}
//
//		Log::Close(log);
//	}
//	catch (Error::ERROR e)
//	{
//		Log::WriteError(log, e);
//	}
//	system("pause");
//	return 0;
//
//}
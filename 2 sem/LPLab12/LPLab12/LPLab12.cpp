#include<iostream>
#include"FST.h"

int main() {
	setlocale(LC_ALL, "RUS");

	char str[] = { "abbg" };
	char str1[] = { "abccfbg" };
	char str2[] = { "abcdefbg" };
	char str3[] = { "abccddeefbbg" };
	char str4[] = { "abcdeeeeeeefddddddfbg" };
	char str5[] = { "abccddeefccddeefccddefbg" };
	char str6[] = { "abbbg" };
	char str7[] = { "abcabcabc" };
	char str8[] = { "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" };
	char str9[] = { "abcccdefbg" };

	//ab+((c+d+e)f)*b+g

	FST::FST fst1(
		str,
		9,
		/*0*/	FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/	FST::NODE(5, FST::RELATION('b', 1), FST::RELATION('b', 2), FST::RELATION('b', 3), FST::RELATION('b', 4), FST::RELATION('b', 6)),
		/*2*/	FST::NODE(4, FST::RELATION('c', 2), FST::RELATION('c', 3), FST::RELATION('c', 4), FST::RELATION('c', 5)),
		/*3*/	FST::NODE(3, FST::RELATION('d', 3), FST::RELATION('d', 4), FST::RELATION('d', 5)),
		/*4*/	FST::NODE(2, FST::RELATION('e', 4), FST::RELATION('e', 5)),
		/*5*/	FST::NODE(4, FST::RELATION('f', 6), FST::RELATION('f', 2), FST::RELATION('f', 3), FST::RELATION('f', 4)),
		/*6*/	FST::NODE(2, FST::RELATION('b', 6), FST::RELATION('b', 7)),
		/*7*/	FST::NODE(1, FST::RELATION('g', 8)),
		/*8*/	FST::NODE()
	);

	if (FST::execute(fst1))
		std::cout << "Цепочка " << fst1.string << " распознана" << std::endl;
	else
		std::cout << "Цепочка " << fst1.string << " не распознана" << std::endl;

	FST::FST fst2(
		str1,
		9,
		/*0*/	FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/	FST::NODE(5, FST::RELATION('b', 1), FST::RELATION('b', 2), FST::RELATION('b', 3), FST::RELATION('b', 4), FST::RELATION('b', 6)),
		/*2*/	FST::NODE(4, FST::RELATION('c', 2), FST::RELATION('c', 3), FST::RELATION('c', 4), FST::RELATION('c', 5)),
		/*3*/	FST::NODE(3, FST::RELATION('d', 3), FST::RELATION('d', 4), FST::RELATION('d', 5)),
		/*4*/	FST::NODE(2, FST::RELATION('e', 4), FST::RELATION('e', 5)),
		/*5*/	FST::NODE(4, FST::RELATION('f', 6), FST::RELATION('f', 2), FST::RELATION('f', 3), FST::RELATION('f', 4)),
		/*6*/	FST::NODE(2, FST::RELATION('b', 6), FST::RELATION('b', 7)),
		/*7*/	FST::NODE(1, FST::RELATION('g', 8)),
		/*8*/	FST::NODE()
	);

	if (FST::execute(fst2))
		std::cout << "Цепочка " << fst2.string << " распознана" << std::endl;
	else
		std::cout << "Цепочка " << fst2.string << " не распознана" << std::endl;

	FST::FST fst3(
		str2,
		9,
		/*0*/	FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/	FST::NODE(5, FST::RELATION('b', 1), FST::RELATION('b', 2), FST::RELATION('b', 3), FST::RELATION('b', 4), FST::RELATION('b', 6)),
		/*2*/	FST::NODE(4, FST::RELATION('c', 2), FST::RELATION('c', 3), FST::RELATION('c', 4), FST::RELATION('c', 5)),
		/*3*/	FST::NODE(3, FST::RELATION('d', 3), FST::RELATION('d', 4), FST::RELATION('d', 5)),
		/*4*/	FST::NODE(2, FST::RELATION('e', 4), FST::RELATION('e', 5)),
		/*5*/	FST::NODE(4, FST::RELATION('f', 6), FST::RELATION('f', 2), FST::RELATION('f', 3), FST::RELATION('f', 4)),
		/*6*/	FST::NODE(2, FST::RELATION('b', 6), FST::RELATION('b', 7)),
		/*7*/	FST::NODE(1, FST::RELATION('g', 8)),
		/*8*/	FST::NODE()
	);
	if (FST::execute(fst3))
		std::cout << "Цепочка " << fst3.string << " распознана" << std::endl;
	else
		std::cout << "Цепочка " << fst3.string << " не распознана" << std::endl;

	FST::FST fst4(
		str3,
		9,
		/*0*/	FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/	FST::NODE(5, FST::RELATION('b', 1), FST::RELATION('b', 2), FST::RELATION('b', 3), FST::RELATION('b', 4), FST::RELATION('b', 6)),
		/*2*/	FST::NODE(4, FST::RELATION('c', 2), FST::RELATION('c', 3), FST::RELATION('c', 4), FST::RELATION('c', 5)),
		/*3*/	FST::NODE(3, FST::RELATION('d', 3), FST::RELATION('d', 4), FST::RELATION('d', 5)),
		/*4*/	FST::NODE(2, FST::RELATION('e', 4), FST::RELATION('e', 5)),
		/*5*/	FST::NODE(4, FST::RELATION('f', 6), FST::RELATION('f', 2), FST::RELATION('f', 3), FST::RELATION('f', 4)),
		/*6*/	FST::NODE(2, FST::RELATION('b', 6), FST::RELATION('b', 7)),
		/*7*/	FST::NODE(1, FST::RELATION('g', 8)),
		/*8*/	FST::NODE()
	);
	if (FST::execute(fst4))
		std::cout << "Цепочка " << fst4.string << " распознана" << std::endl;
	else
		std::cout << "Цепочка " << fst4.string << " не распознана" << std::endl;

	FST::FST fst5(
		str4,
		9,
		/*0*/	FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/	FST::NODE(5, FST::RELATION('b', 1), FST::RELATION('b', 2), FST::RELATION('b', 3), FST::RELATION('b', 4), FST::RELATION('b', 6)),
		/*2*/	FST::NODE(4, FST::RELATION('c', 2), FST::RELATION('c', 3), FST::RELATION('c', 4), FST::RELATION('c', 5)),
		/*3*/	FST::NODE(3, FST::RELATION('d', 3), FST::RELATION('d', 4), FST::RELATION('d', 5)),
		/*4*/	FST::NODE(2, FST::RELATION('e', 4), FST::RELATION('e', 5)),
		/*5*/	FST::NODE(4, FST::RELATION('f', 6), FST::RELATION('f', 2), FST::RELATION('f', 3), FST::RELATION('f', 4)),
		/*6*/	FST::NODE(2, FST::RELATION('b', 6), FST::RELATION('b', 7)),
		/*7*/	FST::NODE(1, FST::RELATION('g', 8)),
		/*8*/	FST::NODE()
	);
	if (FST::execute(fst5))
		std::cout << "Цепочка " << fst5.string << " распознана" << std::endl;
	else
		std::cout << "Цепочка " << fst5.string << " не распознана" << std::endl;

	FST::FST fst6(
		str5,
		9,
		/*0*/	FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/	FST::NODE(5, FST::RELATION('b', 1), FST::RELATION('b', 2), FST::RELATION('b', 3), FST::RELATION('b', 4), FST::RELATION('b', 6)),
		/*2*/	FST::NODE(4, FST::RELATION('c', 2), FST::RELATION('c', 3), FST::RELATION('c', 4), FST::RELATION('c', 5)),
		/*3*/	FST::NODE(3, FST::RELATION('d', 3), FST::RELATION('d', 4), FST::RELATION('d', 5)),
		/*4*/	FST::NODE(2, FST::RELATION('e', 4), FST::RELATION('e', 5)),
		/*5*/	FST::NODE(4, FST::RELATION('f', 6), FST::RELATION('f', 2), FST::RELATION('f', 3), FST::RELATION('f', 4)),
		/*6*/	FST::NODE(2, FST::RELATION('b', 6), FST::RELATION('b', 7)),
		/*7*/	FST::NODE(1, FST::RELATION('g', 8)),
		/*8*/	FST::NODE()
	);
	if (FST::execute(fst6))
		std::cout << "Цепочка " << fst6.string << " распознана" << std::endl;
	else
		std::cout << "Цепочка " << fst6.string << " не распознана" << std::endl;

	FST::FST fst7(
		str6,
		9,
		/*0*/	FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/	FST::NODE(5, FST::RELATION('b', 1), FST::RELATION('b', 2), FST::RELATION('b', 3), FST::RELATION('b', 4), FST::RELATION('b', 6)),
		/*2*/	FST::NODE(4, FST::RELATION('c', 2), FST::RELATION('c', 3), FST::RELATION('c', 4), FST::RELATION('c', 5)),
		/*3*/	FST::NODE(3, FST::RELATION('d', 3), FST::RELATION('d', 4), FST::RELATION('d', 5)),
		/*4*/	FST::NODE(2, FST::RELATION('e', 4), FST::RELATION('e', 5)),
		/*5*/	FST::NODE(4, FST::RELATION('f', 6), FST::RELATION('f', 2), FST::RELATION('f', 3), FST::RELATION('f', 4)),
		/*6*/	FST::NODE(2, FST::RELATION('b', 6), FST::RELATION('b', 7)),
		/*7*/	FST::NODE(1, FST::RELATION('g', 8)),
		/*8*/	FST::NODE()
	);
	if (FST::execute(fst7))
		std::cout << "Цепочка " << fst7.string << " распознана" << std::endl;
	else
		std::cout << "Цепочка " << fst7.string << " не распознана" << std::endl;

	FST::FST fst8(
		str7,
		9,
		/*0*/	FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/	FST::NODE(5, FST::RELATION('b', 1), FST::RELATION('b', 2), FST::RELATION('b', 3), FST::RELATION('b', 4), FST::RELATION('b', 6)),
		/*2*/	FST::NODE(4, FST::RELATION('c', 2), FST::RELATION('c', 3), FST::RELATION('c', 4), FST::RELATION('c', 5)),
		/*3*/	FST::NODE(3, FST::RELATION('d', 3), FST::RELATION('d', 4), FST::RELATION('d', 5)),
		/*4*/	FST::NODE(2, FST::RELATION('e', 4), FST::RELATION('e', 5)),
		/*5*/	FST::NODE(4, FST::RELATION('f', 6), FST::RELATION('f', 2), FST::RELATION('f', 3), FST::RELATION('f', 4)),
		/*6*/	FST::NODE(2, FST::RELATION('b', 6), FST::RELATION('b', 7)),
		/*7*/	FST::NODE(1, FST::RELATION('g', 8)),
		/*8*/	FST::NODE()
	);
	if (FST::execute(fst8))
		std::cout << "Цепочка " << fst8.string << " распознана" << std::endl;
	else
		std::cout << "Цепочка " << fst8.string << " не распознана" << std::endl;

	FST::FST fst9(
		str8,
		9,
		/*0*/	FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/	FST::NODE(5, FST::RELATION('b', 1), FST::RELATION('b', 2), FST::RELATION('b', 3), FST::RELATION('b', 4), FST::RELATION('b', 6)),
		/*2*/	FST::NODE(4, FST::RELATION('c', 2), FST::RELATION('c', 3), FST::RELATION('c', 4), FST::RELATION('c', 5)),
		/*3*/	FST::NODE(3, FST::RELATION('d', 3), FST::RELATION('d', 4), FST::RELATION('d', 5)),
		/*4*/	FST::NODE(2, FST::RELATION('e', 4), FST::RELATION('e', 5)),
		/*5*/	FST::NODE(4, FST::RELATION('f', 6), FST::RELATION('f', 2), FST::RELATION('f', 3), FST::RELATION('f', 4)),
		/*6*/	FST::NODE(2, FST::RELATION('b', 6), FST::RELATION('b', 7)),
		/*7*/	FST::NODE(1, FST::RELATION('g', 8)),
		/*8*/	FST::NODE()
	);
	if (FST::execute(fst9))
		std::cout << "Цепочка " << fst9.string << " распознана" << std::endl;
	else
		std::cout << "Цепочка " << fst9.string << " не распознана" << std::endl;

	FST::FST fst10(
		str9,
		9,
		/*0*/	FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/	FST::NODE(5, FST::RELATION('b', 1), FST::RELATION('b', 2), FST::RELATION('b', 3), FST::RELATION('b', 4), FST::RELATION('b', 6)),
		/*2*/	FST::NODE(4, FST::RELATION('c', 2), FST::RELATION('c', 3), FST::RELATION('c', 4), FST::RELATION('c', 5)),
		/*3*/	FST::NODE(3, FST::RELATION('d', 3), FST::RELATION('d', 4), FST::RELATION('d', 5)),
		/*4*/	FST::NODE(2, FST::RELATION('e', 4), FST::RELATION('e', 5)),
		/*5*/	FST::NODE(4, FST::RELATION('f', 6), FST::RELATION('f', 2), FST::RELATION('f', 3), FST::RELATION('f', 4)),
		/*6*/	FST::NODE(2, FST::RELATION('b', 6), FST::RELATION('b', 7)),
		/*7*/	FST::NODE(1, FST::RELATION('g', 8)),
		/*8*/	FST::NODE()
	);
	if (FST::execute(fst10))
		std::cout << "Цепочка " << fst10.string << " распознана" << std::endl;
	else
		std::cout << "Цепочка " << fst10.string << " не распознана" << std::endl;
}
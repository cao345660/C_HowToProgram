//Если мы знакомы с римскими цифрами, напишите программу, которая выводитт таблицу всех
//римских чисел эквивалетнов десятичных чисел в диапазоне от 1 до 100.

#include <stdio.h>

int main()
{
	int counter = 1;
	for(; counter <= 100; counter++)
	{
		printf("%d\t", counter);
		switch(counter)
		{
			case(1): printf("I\n"); break;
			case(2): printf("II\n"); break;
			case(3): printf("III\n"); break;
			case(4): printf("IV\n"); break;
			case(5): printf("V\n"); break;
			case(6): printf("VI\n"); break;
			case(7): printf("VII\n"); break;
			case(8): printf("VIII\n"); break;
			case(9): printf("IX\n"); break;
			case(10): printf("X\n"); break;
			case(11): printf("I\n"); break;
			case(12): printf("XII\n"); break;
			case(13): printf("XIII\n"); break;
			case(14): printf("XIV\n"); break;
			case(15): printf("XV\n"); break;
			case(16): printf("XVI\n"); break;
			case(17): printf("XVII\n"); break;
			case(18): printf("XVIII\n"); break;
			case(19): printf("XIX\n"); break;
			case(20): printf("XX\n"); break;
			case(21): printf("XXI\n"); break;
			case(22): printf("XXII\n"); break;
			case(23): printf("XXIII\n"); break;
			case(24): printf("XXIV\n"); break;
			case(25): printf("XXV\n"); break;
			case(26): printf("XXVI\n"); break;
			case(27): printf("XXVII\n"); break;
			case(28): printf("XXVIII\n"); break;
			case(29): printf("XXIX\n"); break;
			case(30): printf("XXX\n"); break;
			case(31): printf("XXXI\n"); break;
			case(32): printf("XXXII\n"); break;
			case(33): printf("XXXIII\n"); break;
			case(34): printf("XXXIV\n"); break;
			case(35): printf("XXXV\n"); break;
			case(36): printf("XXXVI\n"); break;
			case(37): printf("XXXVII\n"); break;
			case(38): printf("XXXVIII\n"); break;
			case(39): printf("XXXIX\n"); break;
			case(40): printf("XL\n"); break;
			case(41): printf("XLI\n"); break;
			case(42): printf("XLII\n"); break;
			case(43): printf("XLIII\n"); break;
			case(44): printf("XLIV\n"); break;
			case(45): printf("XLV\n"); break;
			case(46): printf("XLVI\n"); break;
			case(47): printf("XLVII\n"); break;
			case(48): printf("XLVIII\n"); break;
			case(49): printf("XLIX\n"); break;
			case(50): printf("L\n"); break;
			case(51): printf("LI\n"); break;
			case(52): printf("LII\n"); break;
			case(53): printf("LIII\n"); break;
			case(54): printf("LIV\n"); break;
			case(55): printf("LV\n"); break;
			case(56): printf("LVI\n"); break;
			case(57): printf("LVII\n"); break;
			case(58): printf("LVIII\n"); break;
			case(59): printf("LIX\n"); break;
			case(60): printf("LX\n"); break;
			case(61): printf("LXI\n"); break;
			case(62): printf("LXII\n"); break;
			case(63): printf("LXIII\n"); break;
			case(64): printf("LXIV\n"); break;
			case(65): printf("LXV\n"); break;
			case(66): printf("LXVI\n"); break;
			case(67): printf("LXVII\n"); break;
			case(68): printf("LXVIII\n"); break;
			case(69): printf("LXIX\n"); break;
			case(70): printf("LXX\n"); break;
			case(71): printf("LXXI\n"); break;
			case(72): printf("LXXII\n"); break;
			case(73): printf("LXXIII\n"); break;
			case(74): printf("LXXIV\n"); break;
			case(75): printf("LXXV\n"); break;
			case(76): printf("LXXVI\n"); break;
			case(77): printf("LXXVII\n"); break;
			case(78): printf("LXXVIII\n"); break;
			case(79): printf("LXXIX\n"); break;
			case(80): printf("LXXX\n"); break;
			case(81): printf("LXXXI\n"); break;
			case(82): printf("LXXXII\n"); break;
			case(83): printf("LXXXIII\n"); break;
			case(84): printf("LXXXIV\n"); break;
			case(85): printf("LXXXV\n"); break;
			case(86): printf("LXXXVI\n"); break;
			case(87): printf("LXXXVII\n"); break;
			case(88): printf("LXXXVIII\n"); break;
			case(89): printf("LXXXIX\n"); break;
			case(90): printf("XC\n"); break;
			case(91): printf("XCI\n"); break;
			case(92): printf("XCII\n"); break;
			case(93): printf("XCIII\n"); break;
			case(94): printf("XCIV\n"); break;
			case(95): printf("XCV\n"); break;
			case(96): printf("XCVI\n"); break;
			case(97): printf("XCVII\n"); break;
			case(98): printf("XCVIII\n"); break;
			case(99): printf("XCIX\n"); break;
			case(100): printf("C\n"); break;
		}
	}
	return 0;
}
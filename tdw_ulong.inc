/** ======================================================================== **\
	Unsigned long

| Description
A library for using the unsigned values in code. It works on #emit,
because PAWN have AMX-instructions for working with the unsigned values.
In other words, it's 'unsigned long int' in PAWN.

To initilize the unsigned long type, you should use the special tag 'ulong:'.
It is necessary to determine that a variable contains an unsigned number.

Example:
new ulong:var;

| Version:
0.0.1

| License:
Copyright (c) 2016 Double V

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1.	The origin of this software must not be misrepresented; you must not
	claim that you wrote the original software. If you use this software
	in a product, an acknowledgement in the product documentation would be
	appreciated but is not required.
2.	Altered source versions must be plainly marked as such, and must not be
	misrepresented as being the original software.
3.	This notice may not be removed or altered from any source distribution.
\** ======================================================================== **/


#if defined _inc_tdw_ulong
	#undef _inc_tdw_ulong
#endif

#if defined _TDW_ULLIB__ULONG
	#endinput
#endif

#define _TDW_ULLIB__ULONG

// Multiplication
stock
	ulong:operator*(ulong:multiplicands, ulong:multiplier)
{
	// multiplicands * multiplier = product
	#emit load.s.pri multiplicands
	#emit load.s.alt multiplier
	#emit umul
	#emit retn
	return 0;
}
stock
	ulong:operator*(ulong:multiplicands, _:multiplier)
{
	// multiplicands * multiplier = product
	#emit load.s.pri multiplicands
	#emit load.s.alt multiplier
	#emit umul
	#emit retn
	return 0;
}
stock
	ulong:operator*(_:multiplicands, ulong:multiplier)
{
	// multiplicands * multiplier = product
	#emit load.s.pri multiplicands
	#emit load.s.alt multiplier
	#emit umul
	#emit retn
	return 0;
}

// Division
stock
	ulong:operator/(ulong:dividend, ulong:divisor)
{
	// dividend / divisor = quotient
	#emit load.s.pri dividend
	#emit load.s.alt divisor
	#emit udiv
	#emit retn
	return 0;
}
stock
	ulong:operator/(ulong:dividend, _:divisor)
{
	// dividend / divisor = quotient
	#emit load.s.pri dividend
	#emit load.s.alt divisor
	#emit udiv
	#emit retn
	return 0;
}
stock
	ulong:operator/(_:dividend, ulong:divisor)
{
	// dividend / divisor = quotient
	#emit load.s.pri dividend
	#emit load.s.alt divisor
	#emit udiv
	#emit retn
	return 0;
}

// Mod
stock
	ulong:operator%(ulong:value, ulong:mod)
{
	#emit load.s.pri value
	#emit load.s.alt mod
	#emit udiv
	#emit move.alt
	#emit retn
}
stock
	ulong:operator%(ulong:value, _:mod)
{
	#emit load.s.pri value
	#emit load.s.alt mod
	#emit udiv
	#emit move.alt
	#emit retn
}
stock
	ulong:operator%(_:value, ulong:mod)
{
	#emit load.s.pri value
	#emit load.s.alt mod
	#emit udiv
	#emit move.alt
	#emit retn
}

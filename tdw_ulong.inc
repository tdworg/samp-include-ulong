/** ======================================================================== **\
	Unsigned long

| Description
A library for using the unsigned values in code. It works on #emit,
because PAWN have AMX-instructions for working with the unsigned values.
In other words, it's 'unsigned long int' in PAWN.

To initilize the unsigned long type, you should use the special tag 'ulong:'.
It is necessary to determine that a variable contains an unsigned number.

The Limit of unsigned long int is 2^32-1 or 4294967295.
The Limit of int(cellmax) is 2^31-1 or 2147483647.

Example:
new ulong:var;

| Version:
1.0.4

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

const
	ulong:ULONG_MAX = ulong:0xffffffff,
	ulong:ULONG_MIN = ulong:0;

// Multiplication
stock
	ulong:operator*(ulong:multiplicands, ulong:multiplier)
{
	// multiplicands * multiplier = product
	#emit load.s.pri multiplicands
	#emit load.s.alt multiplier
	#emit umul
	#emit retn
	return ulong:0;
}
stock
	ulong:operator*(ulong:multiplicands, _:multiplier)
{
	// multiplicands * multiplier = product
	#emit load.s.pri multiplicands
	#emit load.s.alt multiplier
	#emit umul
	#emit retn
	return ulong:0;
}
stock
	ulong:operator*(_:multiplicands, ulong:multiplier)
{
	// multiplicands * multiplier = product
	#emit load.s.pri multiplicands
	#emit load.s.alt multiplier
	#emit umul
	#emit retn
	return ulong:0;
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
	return ulong:0;
}
stock
	ulong:operator/(ulong:dividend, _:divisor)
{
	// dividend / divisor = quotient
	#emit load.s.pri dividend
	#emit load.s.alt divisor
	#emit udiv
	#emit retn
	return ulong:0;
}
stock
	ulong:operator/(_:dividend, ulong:divisor)
{
	// dividend / divisor = quotient
	#emit load.s.pri dividend
	#emit load.s.alt divisor
	#emit udiv
	#emit retn
	return ulong:0;
}

// Mod
stock
	ulong:operator%(ulong:value, ulong:mod)
{
	#emit load.s.pri value
	#emit load.s.alt mod
	#emit udiv
	#emit move.pri
	#emit retn
	return ulong:0;
}
stock
	ulong:operator%(ulong:value, _:mod)
{
	#emit load.s.pri value
	#emit load.s.alt mod
	#emit udiv
	#emit move.pri
	#emit retn
	return ulong:0;
}
stock
	ulong:operator%(_:value, ulong:mod)
{
	#emit load.s.pri value
	#emit load.s.alt mod
	#emit udiv
	#emit move.pri
	#emit retn
	return ulong:0;
}

stock
	bool:operator>(ulong:left, ulong:right)
{
	#emit load.s.pri left
	#emit load.s.alt right
	#emit grtr
	#emit retn
	return bool:0;
}
stock
	bool:operator>(ulong:left, _:right)
{
	#emit load.s.pri left
	#emit load.s.alt right
	#emit grtr
	#emit retn
	return bool:0;
}
stock
	bool:operator>(_:left, ulong:right)
{
	#emit load.s.pri left
	#emit load.s.alt right
	#emit grtr
	#emit retn
	return bool:0;
}

stock
	bool:operator<(ulong:left, ulong:right)
{
	#emit load.s.pri left
	#emit load.s.alt right
	#emit less
	#emit retn
	return bool:0;
}
stock
	bool:operator<(ulong:left, _:right)
{
	#emit load.s.pri left
	#emit load.s.alt right
	#emit less
	#emit retn
	return bool:0;
}
stock
	bool:operator<(_:left, ulong:right)
{
	#emit load.s.pri left
	#emit load.s.alt right
	#emit less
	#emit retn
	return bool:0;
}

stock
	bool:operator>=(ulong:left, ulong:right)
{
	#emit load.s.pri left
	#emit load.s.alt right
	#emit geq
	#emit retn
	return bool:0;
}
stock
	bool:operator>=(ulong:left, _:right)
{
	#emit load.s.pri left
	#emit load.s.alt right
	#emit geq
	#emit retn
	return bool:0;
}
stock
	bool:operator>=(_:left, ulong:right)
{
	#emit load.s.pri left
	#emit load.s.alt right
	#emit geq
	#emit retn
	return bool:0;
}

stock
	bool:operator<=(ulong:left, ulong:right)
{
	#emit load.s.pri left
	#emit load.s.alt right
	#emit leq
	#emit retn
	return bool:0;
}
stock
	bool:operator<=(ulong:left, _:right)
{
	#emit load.s.pri left
	#emit load.s.alt right
	#emit leq
	#emit retn
	return bool:0;
}
stock
	bool:operator<=(_:left, ulong:right)
{
	#emit load.s.pri left
	#emit load.s.alt right
	#emit leq
	#emit retn
	return bool:0;
}

stock bool:operator!=(ulong:left, _:right)
	return bool:(_:left != right);
stock bool:operator==(ulong:left, _:right)
	return bool:(_:left == right);

stock ulong:operator=(_:value)
	return ulong:value;

stock
	ulong:operator+(ulong:left_value, _:right_value)
{
	#emit load.s.pri left_value
	#emit load.s.alt right_value
	#emit add
	#emit retn
	return 0;
}
stock ulong:operator-(ulong:left_value, _:right_value)
	return ulong:(_:left_value - right_value);
stock ulong:operator-(_:left_value, ulong:right_value)
	return ulong:(left_value - _:right_value);



stock
	ulong_string(dest[], ulong:value, bool:is_packed = false,
		size = sizeof dest)
{
	dest[0] = '0';
	if (is_packed) {
		if (value) {
			size *= 4;
			while (value) {
				// Obtain the address of the string.
				#emit addr.alt dest
				// Subtract one from the variable.
				#emit load.s.pri size
				#emit dec.pri
				#emit stor.s.pri size
				// Get the address of the part in the array.
				#emit add
				#emit align.pri 1
				// Push the value of PRI to the stack
				#emit push.pri
				// Get the ASCII-code.
				#emit load.s.pri value
				#emit const.alt 10
				#emit udiv // pri = quotient; alt = mod
				#emit stor.s.pri value
				// value = '0' + (value mod 10);
				#emit const.pri 0x30 // '0'
				#emit add
				// Pop the last pushed value into PRI
				#emit pop.alt
				// Store the value.
				#emit strb.i 1
			}
			#emit retn
		}
	} else {
		if (value) {
			--size;
			while (value) {
				// Obtain the address of the string.
				#emit addr.alt dest
				// Subtract one from the variable.
				#emit load.s.pri size
				#emit dec.pri
				#emit stor.s.pri size
				// Get the address of the part in the array.
				#emit idxaddr
				// Push the value of PRI to the stack
				#emit push.pri
				// Get the ASCII-code.
				#emit load.s.pri value
				#emit const.alt 10
				#emit udiv // pri = quotient; alt = mod
				#emit stor.s.pri value
				// value = '0' + (value mod 10);
				#emit const.pri 0x30 // '0'
				#emit add
				// Pop the last pushed value into PRI
				#emit pop.alt
				// Store the value.
				#emit stor.i
			}
			// Move all values.
			#emit addr.alt dest
			#emit load.s.pri size
			#emit idxaddr
			#emit load.s.alt dest
			#emit movs 44
			#emit retn
		}
	}
	return 0;
}

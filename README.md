# TDW Unsigned long
A library for using the unsigned values in your code. It works on #emit, because PAWN have AMX-instructions for working with the unsigned values.

### Installation
1. Download library.
2. All files move into folder `pawno/includes`. But, you can use the flag `-i<path>` to specify an alternative path.
3. Include it:
```PAWN
#include <a_samp> // standart SAMP library
#include <tdw_ulong>
```

### Example:
```pawn
#include <tdw_ulong>

main()
{
	new buffer[11];

	new ulong:unsigned_value = 0xfffffff;
	unsigned_value /= 8;
	ulong_string(buffer, unsigned_value);
	printf("%s", buffer);


	new signed_value = 0xfffffff;
	signed_value /= 8;
	printf("%d", buffer);
}
```

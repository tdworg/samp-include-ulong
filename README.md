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
	new ulong:n = 0xfffffff;
	n /= 8;
	printf("%d", n);

	new n = 0xfffffff;
	n /= 8;
	printf("%d", n);
}
```

/*
**
** The C code is generated by ATS/Postiats
** The compilation time is: 2014-4-8: 20h:55m
**
*/

/*
** include runtime header files
*/
#ifndef _ATS_CCOMP_HEADER_NONE
#include "pats_ccomp_config.h"
#include "pats_ccomp_basics.h"
#include "pats_ccomp_typedefs.h"
#include "pats_ccomp_instrset.h"
#include "pats_ccomp_memalloc.h"
#ifndef _ATS_EXCEPTION_NONE
#include "pats_ccomp_memalloca.h"
#include "pats_ccomp_exception.h"
#endif // end of [_ATS_EXCEPTION_NONE]
#endif /* _ATS_CCOMP_HEADER_NONE */


/*
** include prelude cats files
*/
#ifndef _ATS_CCOMP_PRELUDE_NONE
//
#include "prelude/CATS/basics.cats"
#include "prelude/CATS/integer.cats"
#include "prelude/CATS/pointer.cats"
#include "prelude/CATS/bool.cats"
#include "prelude/CATS/char.cats"
#include "prelude/CATS/integer_ptr.cats"
#include "prelude/CATS/integer_fixed.cats"
#include "prelude/CATS/float.cats"
#include "prelude/CATS/memory.cats"
#include "prelude/CATS/string.cats"
#include "prelude/CATS/strptr.cats"
//
#include "prelude/CATS/filebas.cats"
//
#include "prelude/CATS/list.cats"
#include "prelude/CATS/option.cats"
#include "prelude/CATS/array.cats"
#include "prelude/CATS/arrayptr.cats"
#include "prelude/CATS/arrayref.cats"
#include "prelude/CATS/matrix.cats"
#include "prelude/CATS/matrixptr.cats"
//
#endif /* _ATS_CCOMP_PRELUDE_NONE */

/*
staload-prologues(beg)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/pointer.dats: 1533(line=44, offs=1) -- 1572(line=44, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/integer.dats: 1636(line=51, offs=1) -- 1675(line=51, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/integer_fixed.dats: 1641(line=51, offs=1) -- 1680(line=51, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/memory.dats: 1410(line=38, offs=1) -- 1449(line=39, offs=32)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/string.dats: 1609(line=48, offs=1) -- 1648(line=48, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/strptr.dats: 1609(line=48, offs=1) -- 1648(line=48, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/strptr.dats: 1671(line=52, offs=1) -- 1718(line=52, offs=48)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/integer.dats: 1636(line=51, offs=1) -- 1675(line=51, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/filebas.dats: 1613(line=48, offs=1) -- 1652(line=48, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/filebas.dats: 1675(line=52, offs=1) -- 1722(line=52, offs=48)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/integer.dats: 1636(line=51, offs=1) -- 1675(line=51, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/filebas.dats: 1745(line=56, offs=1) -- 1783(line=56, offs=39)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/libc/SATS/stdio.sats: 1380(line=35, offs=1) -- 1418(line=37, offs=3)
*/

#include "libats/libc/CATS/stdio.cats"
/*
/cs/coursedata/cs320/ATS2-005/libats/libc/SATS/stdio.sats: 1855(line=57, offs=1) -- 1897(line=59, offs=27)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/libc/SATS/sys/types.sats: 1390(line=36, offs=1) -- 1432(line=38, offs=3)
*/

#include "libats/libc/CATS/sys/types.cats"
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/filebas.dats: 1839(line=58, offs=1) -- 1879(line=58, offs=41)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/libc/SATS/string.sats: 1380(line=35, offs=1) -- 1419(line=37, offs=3)
*/

#include "libats/libc/CATS/string.cats"
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/filebas.dats: 13966(line=737, offs=1) -- 13996(line=737, offs=31)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/libc/SATS/stdio.sats: 1380(line=35, offs=1) -- 1418(line=37, offs=3)
*/

#include "libats/libc/CATS/stdio.cats"
/*
/cs/coursedata/cs320/ATS2-005/libats/libc/SATS/stdio.sats: 1855(line=57, offs=1) -- 1897(line=59, offs=27)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/libc/SATS/sys/types.sats: 1390(line=36, offs=1) -- 1432(line=38, offs=3)
*/

#include "libats/libc/CATS/sys/types.cats"
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/list.dats: 1527(line=44, offs=1) -- 1566(line=44, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/list.dats: 1567(line=45, offs=1) -- 1613(line=45, offs=47)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/unsafe.dats: 1532(line=44, offs=1) -- 1566(line=44, offs=35)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/list_vt.dats: 1536(line=44, offs=1) -- 1575(line=44, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/list_vt_mergesort.dats: 1546(line=44, offs=1) -- 1585(line=44, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/list_vt_quicksort.dats: 1546(line=44, offs=1) -- 1585(line=44, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/array.dats: 1534(line=44, offs=1) -- 1573(line=44, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/array.dats: 1574(line=45, offs=1) -- 1616(line=45, offs=43)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/array_bsearch.dats: 1531(line=44, offs=1) -- 1570(line=44, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/array_quicksort.dats: 1531(line=44, offs=1) -- 1570(line=44, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/arrayptr.dats: 1532(line=44, offs=1) -- 1571(line=44, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/arrayref.dats: 1532(line=44, offs=1) -- 1571(line=44, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/matrix.dats: 1535(line=44, offs=1) -- 1574(line=44, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/matrixptr.dats: 1538(line=44, offs=1) -- 1577(line=44, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/matrixref.dats: 1538(line=44, offs=1) -- 1577(line=44, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/stream.dats: 1564(line=46, offs=1) -- 1603(line=46, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/stream_vt.dats: 1567(line=46, offs=1) -- 1606(line=46, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/unsafe.dats: 1532(line=44, offs=1) -- 1566(line=44, offs=35)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/checkast.dats: 1531(line=44, offs=1) -- 1570(line=45, offs=32)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/list0.sats: 1729(line=48, offs=1) -- 1764(line=48, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/option0.sats: 1588(line=42, offs=1) -- 1623(line=42, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/array0.sats: 1589(line=42, offs=1) -- 1633(line=44, offs=3)
*/

#include "libats/ML/CATS/array0.cats"
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/array0.sats: 1672(line=48, offs=1) -- 1707(line=48, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/matrix0.sats: 1590(line=42, offs=1) -- 1625(line=42, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/string.sats: 1589(line=42, offs=1) -- 1624(line=42, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/strarr.sats: 1593(line=42, offs=1) -- 1637(line=44, offs=3)
*/

#include "libats/ML/CATS/strarr.cats"
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/strarr.sats: 1676(line=48, offs=1) -- 1711(line=48, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/filebas.sats: 1589(line=42, offs=1) -- 1624(line=42, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/stdlib.sats: 1586(line=42, offs=1) -- 1621(line=42, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/list0.dats: 1444(line=40, offs=1) -- 1483(line=40, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/list0.dats: 1506(line=44, offs=1) -- 1541(line=44, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/list0.dats: 1542(line=45, offs=1) -- 1577(line=45, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/list0.sats: 1729(line=48, offs=1) -- 1764(line=48, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/option0.dats: 1392(line=36, offs=1) -- 1431(line=37, offs=32)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/option0.dats: 1454(line=41, offs=1) -- 1489(line=41, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/option0.dats: 1490(line=42, offs=1) -- 1527(line=42, offs=38)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/option0.sats: 1588(line=42, offs=1) -- 1623(line=42, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/array0.dats: 1392(line=36, offs=1) -- 1431(line=36, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/array0.dats: 1454(line=40, offs=1) -- 1489(line=40, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/array0.dats: 1490(line=41, offs=1) -- 1525(line=41, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/list0.sats: 1729(line=48, offs=1) -- 1764(line=48, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/array0.dats: 1526(line=42, offs=1) -- 1562(line=42, offs=37)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/array0.sats: 1589(line=42, offs=1) -- 1633(line=44, offs=3)
*/

#include "libats/ML/CATS/array0.cats"
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/array0.sats: 1672(line=48, offs=1) -- 1707(line=48, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/matrix0.dats: 1396(line=36, offs=1) -- 1435(line=37, offs=32)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/matrix0.dats: 1458(line=41, offs=1) -- 1493(line=41, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/matrix0.dats: 1494(line=42, offs=1) -- 1531(line=42, offs=38)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/matrix0.sats: 1590(line=42, offs=1) -- 1625(line=42, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/string.dats: 1609(line=46, offs=1) -- 1648(line=46, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/string.dats: 2264(line=83, offs=1) -- 2299(line=83, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/string.dats: 2300(line=84, offs=1) -- 2335(line=84, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/list0.sats: 1729(line=48, offs=1) -- 1764(line=48, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/string.dats: 2336(line=85, offs=1) -- 2372(line=85, offs=37)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/string.sats: 1589(line=42, offs=1) -- 1624(line=42, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/strarr.dats: 1613(line=46, offs=1) -- 1652(line=47, offs=32)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/strarr.dats: 1675(line=51, offs=1) -- 1710(line=51, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/strarr.dats: 1711(line=52, offs=1) -- 1747(line=52, offs=37)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/array0.sats: 1589(line=42, offs=1) -- 1633(line=44, offs=3)
*/

#include "libats/ML/CATS/array0.cats"
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/array0.sats: 1672(line=48, offs=1) -- 1707(line=48, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/strarr.dats: 1748(line=53, offs=1) -- 1796(line=53, offs=49)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/array0.dats: 1392(line=36, offs=1) -- 1431(line=36, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/array0.dats: 1454(line=40, offs=1) -- 1489(line=40, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/array0.dats: 1490(line=41, offs=1) -- 1525(line=41, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/list0.sats: 1729(line=48, offs=1) -- 1764(line=48, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/array0.dats: 1526(line=42, offs=1) -- 1562(line=42, offs=37)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/array0.sats: 1589(line=42, offs=1) -- 1633(line=44, offs=3)
*/

#include "libats/ML/CATS/array0.cats"
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/array0.sats: 1672(line=48, offs=1) -- 1707(line=48, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/strarr.dats: 1819(line=57, offs=1) -- 1855(line=57, offs=37)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/strarr.sats: 1593(line=42, offs=1) -- 1637(line=44, offs=3)
*/

#include "libats/ML/CATS/strarr.cats"
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/strarr.sats: 1676(line=48, offs=1) -- 1711(line=48, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/filebas.dats: 1472(line=40, offs=1) -- 1511(line=40, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/filebas.dats: 1534(line=44, offs=1) -- 1581(line=44, offs=48)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/integer.dats: 1636(line=51, offs=1) -- 1675(line=51, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/filebas.dats: 1582(line=45, offs=1) -- 1629(line=45, offs=48)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/filebas.dats: 1613(line=48, offs=1) -- 1652(line=48, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/filebas.dats: 1675(line=52, offs=1) -- 1722(line=52, offs=48)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/integer.dats: 1636(line=51, offs=1) -- 1675(line=51, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/filebas.dats: 1745(line=56, offs=1) -- 1783(line=56, offs=39)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/libc/SATS/stdio.sats: 1380(line=35, offs=1) -- 1418(line=37, offs=3)
*/

#include "libats/libc/CATS/stdio.cats"
/*
/cs/coursedata/cs320/ATS2-005/libats/libc/SATS/stdio.sats: 1855(line=57, offs=1) -- 1897(line=59, offs=27)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/libc/SATS/sys/types.sats: 1390(line=36, offs=1) -- 1432(line=38, offs=3)
*/

#include "libats/libc/CATS/sys/types.cats"
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/filebas.dats: 1839(line=58, offs=1) -- 1879(line=58, offs=41)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/libc/SATS/string.sats: 1380(line=35, offs=1) -- 1419(line=37, offs=3)
*/

#include "libats/libc/CATS/string.cats"
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/filebas.dats: 13966(line=737, offs=1) -- 13996(line=737, offs=31)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/libc/SATS/stdio.sats: 1380(line=35, offs=1) -- 1418(line=37, offs=3)
*/

#include "libats/libc/CATS/stdio.cats"
/*
/cs/coursedata/cs320/ATS2-005/libats/libc/SATS/stdio.sats: 1855(line=57, offs=1) -- 1897(line=59, offs=27)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/libc/SATS/sys/types.sats: 1390(line=36, offs=1) -- 1432(line=38, offs=3)
*/

#include "libats/libc/CATS/sys/types.cats"
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/filebas.dats: 2011(line=64, offs=1) -- 2046(line=64, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/filebas.dats: 2047(line=65, offs=1) -- 2082(line=65, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/list0.sats: 1729(line=48, offs=1) -- 1764(line=48, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/filebas.dats: 2083(line=66, offs=1) -- 2120(line=66, offs=38)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/option0.sats: 1588(line=42, offs=1) -- 1623(line=42, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/filebas.dats: 2143(line=70, offs=1) -- 2180(line=70, offs=38)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/filebas.sats: 1589(line=42, offs=1) -- 1624(line=42, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/filebas.dats: 2734(line=100, offs=1) -- 2780(line=100, offs=47)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/strptr.dats: 1609(line=48, offs=1) -- 1648(line=48, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/strptr.dats: 1671(line=52, offs=1) -- 1718(line=52, offs=48)
*/
/*
/cs/coursedata/cs320/ATS2-005/prelude/DATS/integer.dats: 1636(line=51, offs=1) -- 1675(line=51, offs=40)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/stdlib.dats: 1392(line=36, offs=1) -- 1432(line=37, offs=33)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/libc/SATS/stdlib.sats: 1389(line=36, offs=1) -- 1428(line=38, offs=3)
*/

#include "libats/libc/CATS/stdlib.cats"
/*
/cs/coursedata/cs320/ATS2-005/libats/libc/SATS/stdlib.sats: 1824(line=55, offs=1) -- 1864(line=56, offs=33)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/stdlib.dats: 1455(line=41, offs=1) -- 1490(line=41, offs=36)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/DATS/stdlib.dats: 1513(line=45, offs=1) -- 1549(line=45, offs=37)
*/
/*
/cs/coursedata/cs320/ATS2-005/libats/ML/SATS/stdlib.sats: 1586(line=42, offs=1) -- 1621(line=42, offs=36)
*/
/*
staload-prologues(end)
*/
/*
typedefs-for-tyrecs-and-tysums(beg)
*/
typedef
struct {
#if(0)
int contag ;
#endif
atstkind_t0ype(atstype_double) atslab__0; 
atstkind_type(atstype_ptrk) atslab__1; 
} postiats_tysum_0 ;
/*
typedefs-for-tyrecs-and-tysums(end)
*/
/*
dynconlst-declaration(beg)
*/
/*
dynconlst-declaration(end)
*/
/*
dyncstlst-declaration(beg)
*/
ATSdyncst_mac(atspre_g0float_sub_double) ;
ATSdyncst_mac(atspre_g0float_div_double) ;
ATSdyncst_mac(atspre_g0float_mul_double) ;
ATSdyncst_mac(atspre_g0float_add_double) ;
ATSdyncst_extfun(C__EulerTrans, (atstkind_type(atstype_ptrk)), atstkind_type(atstype_ptrk)) ;
/*
dyncstlst-declaration(end)
*/
/*
dynvalist-implementation(beg)
*/
/*
dynvalist-implementation(end)
*/
/*
exnconlst-declaration(beg)
*/
#ifndef _ATS_EXCEPTION_NONE
extern void the_atsexncon_initize (atstype_exncon *d2c, char *exnmsg) ;
#endif // end of [_ATS_EXCEPTION_NONE]
/*
exnconlst-declaration(end)
*/
/*
assumelst-declaration(beg)
*/
/*
assumelst-declaration(end)
*/
/*
extypelst-declaration(beg)
*/
/*
extypelst-declaration(end)
*/
ATSstatic()
atstype_boxed
EulerTrans_con_0(atstkind_type(atstype_ptrk)) ;

#if(0)
ATSextern()
atstkind_type(atstype_ptrk)
C__EulerTrans(atstkind_type(atstype_ptrk)) ;
#endif // end of [QUALIFIED]

ATSstatic()
atstype_boxed
__patsfun_6(atstkind_type(atstype_ptrk)) ;

typedef struct
{
atstype_funptr cfun ;
atstkind_type(atstype_ptrk) env0 ;
} __patsfun_6__closure_t0ype ;
ATSstatic()
atstype_boxed
__patsfun_6__cfun
(
__patsfun_6__closure_t0ype *p_cenv
)
{
ATSFCreturn(__patsfun_6(p_cenv->env0)) ;
} /* end of [cfun] */
ATSstatic()
atstype_cloptr
__patsfun_6__closureinit
(
__patsfun_6__closure_t0ype *p_cenv, atstkind_type(atstype_ptrk) env0
)
{
p_cenv->env0 = env0 ;
p_cenv->cfun = __patsfun_6__cfun ;
return p_cenv ;
} /* end of [closureinit] */
ATSstatic()
atstype_cloptr
__patsfun_6__closurerize
(
atstkind_type(atstype_ptrk) env0
)
{
return __patsfun_6__closureinit(ATS_MALLOC(sizeof(__patsfun_6__closure_t0ype)), env0) ;
} /* end of [closurerize] */

/*
/cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 270(line=19, offs=5) -- 1043(line=33, offs=104)
*/
/*
local: 
global: EulerTrans_con_0$0(level=0)
local: 
global: 
*/
ATSstatic()
atstype_boxed
EulerTrans_con_0(atstkind_type(atstype_ptrk) arg0)
{
/* tmpvardeclst(beg) */
ATStmpdec(tmpret0, atstype_boxed) ;
ATStmpdec(tmp1, atstype_boxed) ;
ATStmpdec(tmp2, atstkind_t0ype(atstype_double)) ;
ATStmpdec(tmp3, atstkind_type(atstype_ptrk)) ;
ATStmpdec(tmp4, atstype_boxed) ;
ATStmpdec(tmp5, atstkind_t0ype(atstype_double)) ;
ATStmpdec(tmp6, atstkind_type(atstype_ptrk)) ;
ATStmpdec(tmp7, atstype_boxed) ;
ATStmpdec(tmp8, atstkind_t0ype(atstype_double)) ;
ATStmpdec(tmp9, atstkind_t0ype(atstype_double)) ;
ATStmpdec(tmp10, atstkind_t0ype(atstype_double)) ;
ATStmpdec(tmp11, atstkind_t0ype(atstype_double)) ;
ATStmpdec(tmp12, atstkind_t0ype(atstype_double)) ;
ATStmpdec(tmp13, atstkind_t0ype(atstype_double)) ;
ATStmpdec(tmp14, atstkind_t0ype(atstype_double)) ;
ATStmpdec(tmp15, atstkind_type(atstype_ptrk)) ;
/* tmpvardeclst(end) */
/* funbodyinstrlst(beg) */
/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 270(line=19, offs=5) -- 1043(line=33, offs=104)
*/
__patsflab_EulerTrans_con_0:
/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 352(line=24, offs=9) -- 939(line=32, offs=92)
*/
/*
letpush(beg)
*/
/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 396(line=25, offs=41) -- 400(line=25, offs=45)
*/
ATSINSmove_lazyeval(tmp1, atstype_boxed, arg0) ;
/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 372(line=25, offs=17) -- 393(line=25, offs=38)
*/
if (ATSCKptrisnull(tmp1)) { ATSINScaseof_fail("/cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 372(line=25, offs=17) -- 400(line=25, offs=45)") ; }
/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 385(line=25, offs=30) -- 387(line=25, offs=32)
*/
ATSINSmove(tmp2, ATSSELcon(tmp1, postiats_tysum_0, atslab__0)) ;
/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 389(line=25, offs=34) -- 392(line=25, offs=37)
*/
ATSINSmove(tmp3, ATSSELcon(tmp1, postiats_tysum_0, atslab__1)) ;
/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 447(line=26, offs=47) -- 451(line=26, offs=51)
*/
ATSINSmove_lazyeval(tmp4, atstype_boxed, tmp3) ;
/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 423(line=26, offs=23) -- 444(line=26, offs=44)
*/
if (ATSCKptrisnull(tmp4)) { ATSINScaseof_fail("/cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 423(line=26, offs=23) -- 451(line=26, offs=51)") ; }
/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 436(line=26, offs=36) -- 438(line=26, offs=38)
*/
ATSINSmove(tmp5, ATSSELcon(tmp4, postiats_tysum_0, atslab__0)) ;
/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 440(line=26, offs=40) -- 443(line=26, offs=43)
*/
ATSINSmove(tmp6, ATSSELcon(tmp4, postiats_tysum_0, atslab__1)) ;
/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 506(line=27, offs=55) -- 510(line=27, offs=59)
*/
ATSINSmove_lazyeval(tmp7, atstype_boxed, tmp6) ;
/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 482(line=27, offs=31) -- 503(line=27, offs=52)
*/
if (ATSCKptrisnull(tmp7)) { ATSINScaseof_fail("/cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 482(line=27, offs=31) -- 510(line=27, offs=59)") ; }
/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 495(line=27, offs=44) -- 497(line=27, offs=46)
*/
ATSINSmove(tmp8, ATSSELcon(tmp7, postiats_tysum_0, atslab__0)) ;
/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 557(line=28, offs=47) -- 564(line=28, offs=54)
*/
ATSINSmove(tmp9, atspre_g0float_sub_double(tmp2, tmp5)) ;

/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 575(line=28, offs=65) -- 582(line=28, offs=72)
*/
ATSINSmove(tmp10, atspre_g0float_sub_double(tmp8, tmp5)) ;

/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 649(line=29, offs=67) -- 658(line=29, offs=76)
*/
ATSINSmove(tmp13, atspre_g0float_mul_double(tmp10, tmp10)) ;

/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 662(line=29, offs=80) -- 671(line=29, offs=89)
*/
ATSINSmove(tmp14, atspre_g0float_add_double(tmp10, tmp9)) ;

/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 649(line=29, offs=67) -- 671(line=29, offs=89)
*/
ATSINSmove(tmp12, atspre_g0float_div_double(tmp13, tmp14)) ;

/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 644(line=29, offs=62) -- 671(line=29, offs=89)
*/
ATSINSmove(tmp11, atspre_g0float_sub_double(tmp8, tmp12)) ;

/*
letpush(end)
*/

/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 830(line=31, offs=95) -- 845(line=31, offs=110)
*/
ATSINSmove(tmp15, C__EulerTrans(tmp3)) ;

/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 810(line=31, offs=75) -- 847(line=31, offs=112)
*/

ATSINSmove_con1_new(tmpret0, postiats_tysum_0) ;
#if(0)
ATSINSstore_con1_tag(tmpret0, 1) ;
#endif
ATSINSstore_con1_ofs(tmpret0, postiats_tysum_0, atslab__0, tmp11) ;
ATSINSstore_con1_ofs(tmpret0, postiats_tysum_0, atslab__1, tmp15) ;

/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 352(line=24, offs=9) -- 939(line=32, offs=92)
*/
/*
INSletpop()
*/
/* funbodyinstrlst(end) */
ATSreturn(tmpret0) ;
} /* end of [EulerTrans_con_0] */

/*
/cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 1837(line=38, offs=184) -- 1872(line=38, offs=219)
*/
/*
local: EulerTrans_con_0$0(level=0)
global: EulerTrans_con_0$0(level=0), C__EulerTrans$5$0(level=0)
local: 
global: 
*/
ATSextern()
atstkind_type(atstype_ptrk)
C__EulerTrans(atstkind_type(atstype_ptrk) arg0)
{
/* tmpvardeclst(beg) */
ATStmpdec(tmpret16, atstkind_type(atstype_ptrk)) ;
/* tmpvardeclst(end) */
/* funbodyinstrlst(beg) */
/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 1826(line=38, offs=173) -- 1872(line=38, offs=219)
*/
__patsflab_EulerTrans:
/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 1845(line=38, offs=192) -- 1872(line=38, offs=219)
*/
ATSINSmove_delay(tmpret16, atstype_boxed, ATSPMVcfunlab(-1, __patsfun_6, (arg0))) ;
/* funbodyinstrlst(end) */
ATSreturn(tmpret16) ;
} /* end of [C__EulerTrans] */

/*
/cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 1845(line=38, offs=192) -- 1872(line=38, offs=219)
*/
/*
local: EulerTrans_con_0$0(level=0)
global: EulerTrans_con_0$0(level=0), __patsfun_6$0(level=1)
local: xs0$3837(1)(HSEapp(HSEcst(atstkind_type); HSEs2exp(S2Eextkind(atstype_ptrk))))
global: xs0$3837(1)(HSEapp(HSEcst(atstkind_type); HSEs2exp(S2Eextkind(atstype_ptrk))))
*/
ATSstatic()
atstype_boxed
__patsfun_6(atstkind_type(atstype_ptrk) env0)
{
/* tmpvardeclst(beg) */
ATStmpdec(tmpret17, atstype_boxed) ;
/* tmpvardeclst(end) */
/* funbodyinstrlst(beg) */
/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 1845(line=38, offs=192) -- 1872(line=38, offs=219)
*/
__patsflab___patsfun_6:
/*
emit_instr: loc0 = /cs-pub/www-dir/faculty/hwxi/academic/courses/CS320/Spring14/code/lecture-04-08/EulerTrans.dats: 1853(line=38, offs=200) -- 1871(line=38, offs=218)
*/
ATSINSmove(tmpret17, EulerTrans_con_0(env0)) ;

/* funbodyinstrlst(end) */
ATSreturn(tmpret17) ;
} /* end of [__patsfun_6] */

#if(0)
/*
** for initialization(dynloading)
*/
atsvoid_t0ype
_057_cs_055_pub_057_www_055_dir_057_faculty_057_hwxi_057_academic_057_courses_057_CS320_057_Spring14_057_code_057_lecture_055_04_055_08_057_EulerTrans_056_dats__dynload()
{
ATSdynload0(
_057_cs_055_pub_057_www_055_dir_057_faculty_057_hwxi_057_academic_057_courses_057_CS320_057_Spring14_057_code_057_lecture_055_04_055_08_057_EulerTrans_056_dats__dynloadflag
) ;
ATSif(
ATSCKiseqz(
_057_cs_055_pub_057_www_055_dir_057_faculty_057_hwxi_057_academic_057_courses_057_CS320_057_Spring14_057_code_057_lecture_055_04_055_08_057_EulerTrans_056_dats__dynloadflag
)
) ATSthen() {
ATSdynloadset(_057_cs_055_pub_057_www_055_dir_057_faculty_057_hwxi_057_academic_057_courses_057_CS320_057_Spring14_057_code_057_lecture_055_04_055_08_057_EulerTrans_056_dats__dynloadflag) ;
/*
dynexnlst-initize(beg)
*/
/*
dynexnlst-initize(end)
*/
/* local */
/* in of [local] */
/* end of [local] */
} /* ATSendif */
ATSreturn_void() ;
} /* end of [*_dynload] */
#endif // end of [#if(0)]

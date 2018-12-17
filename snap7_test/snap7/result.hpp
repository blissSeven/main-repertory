#ifndef RESULT_HPP
#define RESULT_HPP

/*
0x01
Client->SetConnectionType ok 1

+-----------------------------------------------------
| UNIT Connection
+-----------------------------------------------------
| Result         : OK
| Execution time : 81 ms
+-----------------------------------------------------
  Connected to   : 192.168.1.10 (Rack=0, Slot=1)
  PDU Requested  : 480 bytes
  PDU Negotiated : 240 bytes

+-----------------------------------------------------
| Catalog
+-----------------------------------------------------
| Result         : OK
| Execution time : 8 ms
+-----------------------------------------------------
  Order Code : 6ES7 214-1AG40-0XB0
  Version    : 4.2.2

+-----------------------------------------------------
| Unit Info
+-----------------------------------------------------
| ERROR !!! code 0x c00000
| CPU : Item not available
+-----------------------------------------------------

+-----------------------------------------------------
| Communication processor Info
+-----------------------------------------------------
| ERROR !!! code 0x c00000
| CPU : Item not available
+-----------------------------------------------------

+-----------------------------------------------------
| CPU Status
+-----------------------------------------------------
| Result         : OK
| Execution time : 7 ms
+-----------------------------------------------------
  RUN

+-----------------------------------------------------
| Read SZL - ID : 0x0011, IDX 0x0000
+-----------------------------------------------------
| Result         : OK
| Execution time : 7 ms
+-----------------------------------------------------
  LENTHDR : 28
  N_DR    : 3
Dump (88 bytes) :
0x0000: 1c 00 03 00 00 01 36 45 53 37 20 32 31 34 2d 31 ......6ES7 214-1
0x0010: 41 47 34 30 2d 30 58 42 30 20 00 00 00 09 20 20 AG40-0XB0 ....
0x0020: 00 06 36 45 53 37 20 32 31 34 2d 31 41 47 34 30 ..6ES7 214-1AG40
0x0030: 2d 30 58 42 30 20 00 00 00 09 20 20 00 07 36 45 -0XB0 ....  ..6E
0x0040: 53 37 20 32 31 34 2d 31 41 47 34 30 2d 30 58 42 S7 214-1AG40-0XB
0x0050: 30 20 00 00 56 04 02 02                         0 ..V...

+-----------------------------------------------------
| Block Upload (SDB 0)
+-----------------------------------------------------
| ERROR !!! code 0x 1400000
| CPU : Function not available
+-----------------------------------------------------

+-----------------------------------------------------
| Async (callback) Block Upload (SDB 0)
+-----------------------------------------------------
| ERROR !!! code 0x 1400000
| CPU : Function not available
+-----------------------------------------------------

+-----------------------------------------------------
| Async (Wait event) Block Upload (SDB 0)
+-----------------------------------------------------
| ERROR !!! code 0x 1400000
| CPU : Function not available
+-----------------------------------------------------

+-----------------------------------------------------
| Async (polling) Block Upload (SDB 0)
+-----------------------------------------------------
| ERROR !!! code 0x 1400000
| CPU : Function not available
+-----------------------------------------------------

+-----------------------------------------------------
| Multiread Vars
+-----------------------------------------------------
| Result         : OK
| Execution time : 10 ms
+-----------------------------------------------------
Dump MB0..MB15 - Var Result : 0
0x0000: 6f 04 00 00 00 00 00 00 00 00 02 00 00 00 00 00 o...............
Dump EB0..EB15 - Var Result : 0
0x0000: 30 00 01 92 01 c7 00 00 00 00 00 12 38 20 00 00 0....?.....8 ..
Dump AB0..AB15 - Var Result : 0
0x0000: 00 00 20 00 08 00 00 00 00 00 00 00 00 00 00 00 .. .............
Dump T0..T7 - Var Result : 9437184
Dump Z0..Z7 - Var Result : 9437184

+-----------------------------------------------------
| Test Summary
+-----------------------------------------------------
| Performed : 11
| Passed    : 5
| Failed    : 6
+----------------------------------------[press a key]

0x02
Client->SetConnectionType ok 2

+-----------------------------------------------------
| UNIT Connection
+-----------------------------------------------------
| ERROR !!! code 0x 2751
|  TCP : Unreachable peer
+-----------------------------------------------------

+-----------------------------------------------------
| Test Summary
+-----------------------------------------------------
| Performed : 1
| Passed    : 0
| Failed    : 1
+----------------------------------------[press a key]
0x03
Client->SetConnectionType ok 3

+-----------------------------------------------------
| UNIT Connection
+-----------------------------------------------------
| Result         : OK
| Execution time : 72 ms
+-----------------------------------------------------
  Connected to   : 192.168.1.10 (Rack=0, Slot=1)
  PDU Requested  : 480 bytes
  PDU Negotiated : 240 bytes

+-----------------------------------------------------
| Catalog
+-----------------------------------------------------
| Result         : OK
| Execution time : 8 ms
+-----------------------------------------------------
  Order Code : 6ES7 214-1AG40-0XB0
  Version    : 4.2.2

+-----------------------------------------------------
| Unit Info
+-----------------------------------------------------
| ERROR !!! code 0x c00000
| CPU : Item not available
+-----------------------------------------------------

+-----------------------------------------------------
| Communication processor Info
+-----------------------------------------------------
| ERROR !!! code 0x c00000
| CPU : Item not available
+-----------------------------------------------------

+-----------------------------------------------------
| CPU Status
+-----------------------------------------------------
| Result         : OK
| Execution time : 8 ms
+-----------------------------------------------------
  RUN

+-----------------------------------------------------
| Read SZL - ID : 0x0011, IDX 0x0000
+-----------------------------------------------------
| Result         : OK
| Execution time : 9 ms
+-----------------------------------------------------
  LENTHDR : 28
  N_DR    : 3
Dump (88 bytes) :
0x0000: 1c 00 03 00 00 01 36 45 53 37 20 32 31 34 2d 31 ......6ES7 214-1
0x0010: 41 47 34 30 2d 30 58 42 30 20 00 00 00 09 20 20 AG40-0XB0 ....
0x0020: 00 06 36 45 53 37 20 32 31 34 2d 31 41 47 34 30 ..6ES7 214-1AG40
0x0030: 2d 30 58 42 30 20 00 00 00 09 20 20 00 07 36 45 -0XB0 ....  ..6E
0x0040: 53 37 20 32 31 34 2d 31 41 47 34 30 2d 30 58 42 S7 214-1AG40-0XB
0x0050: 30 20 00 00 56 04 02 02                         0 ..V...

+-----------------------------------------------------
| Block Upload (SDB 0)
+-----------------------------------------------------
| ERROR !!! code 0x 1400000
| CPU : Function not available
+-----------------------------------------------------

+-----------------------------------------------------
| Async (callback) Block Upload (SDB 0)
+-----------------------------------------------------
| ERROR !!! code 0x 1400000
| CPU : Function not available
+-----------------------------------------------------

+-----------------------------------------------------
| Async (Wait event) Block Upload (SDB 0)
+-----------------------------------------------------
| ERROR !!! code 0x 1400000
| CPU : Function not available
+-----------------------------------------------------

+-----------------------------------------------------
| Async (polling) Block Upload (SDB 0)
+-----------------------------------------------------
| ERROR !!! code 0x 1400000
| CPU : Function not available
+-----------------------------------------------------

+-----------------------------------------------------
| Multiread Vars
+-----------------------------------------------------
| Result         : OK
| Execution time : 9 ms
+-----------------------------------------------------
Dump MB0..MB15 - Var Result : 0
0x0000: 89 04 00 00 00 00 00 00 00 00 02 00 00 00 00 00 ................
Dump EB0..EB15 - Var Result : 0
0x0000: 30 00 01 92 01 c7 00 00 00 00 00 02 38 20 00 00 0....?.....8 ..
Dump AB0..AB15 - Var Result : 0
0x0000: 00 00 20 00 08 00 00 00 00 00 00 00 00 00 00 00 .. .............
Dump T0..T7 - Var Result : 9437184
Dump Z0..Z7 - Var Result : 9437184

+-----------------------------------------------------
| Test Summary
+-----------------------------------------------------
| Performed : 11
| Passed    : 5
| Failed    : 6
+----------------------------------------[press a key]
0x04

Client->SetConnectionType ok 4

+-----------------------------------------------------
| UNIT Connection
+-----------------------------------------------------
| ERROR !!! code 0x a274c
|  ISO : An error occurred during recv TCP : Connection timed out
+-----------------------------------------------------

+-----------------------------------------------------
| Test Summary
+-----------------------------------------------------
| Performed : 1
| Passed    : 0
| Failed    : 1
+----------------------------------------[press a key]
0x05
Client->SetConnectionType ok 5

+-----------------------------------------------------
| UNIT Connection
+-----------------------------------------------------
| ERROR !!! code 0x a274c
|  ISO : An error occurred during recv TCP : Connection timed out
+-----------------------------------------------------

+-----------------------------------------------------
| Test Summary
+-----------------------------------------------------
| Performed : 1
| Passed    : 0
| Failed    : 1
+----------------------------------------[press a key]



*/
#endif // RESULT_HPP

#ifndef		_ICMPVARS_H_
#define		_ICMPVARS_H_

CVoidType	icmpInit (void);

#define ICMPINMSGS     0
#define ICMPINERRORS     1
#define ICMPINDESTUNREACHS   2
#define ICMPINTIMEEXCDS      3
#define ICMPINPARMPROBS      4
#define ICMPINSRCQUENCHS     5
#define ICMPINREDIRECTS      6
#define ICMPINECHOS     7
#define ICMPINECHOREPS     8
#define ICMPINTIMESTAMPS     9
#define ICMPINTIMESTAMPREPS 10
#define ICMPINADDRMASKS     11
#define ICMPINADDRMASKREPS  12
#define ICMPOUTMSGS    13
#define ICMPOUTERRORS    14
#define ICMPOUTDESTUNREACHS 15
#define ICMPOUTTIMEEXCDS    16
#define ICMPOUTPARMPROBS    17
#define ICMPOUTSRCQUENCHS   18
#define ICMPOUTREDIRECTS    19
#define ICMPOUTECHOS    20
#define ICMPOUTECHOREPS     21
#define ICMPOUTTIMESTAMPS   22
#define ICMPOUTTIMESTAMPREPS 23
#define ICMPOUTADDRMASKS    24
#define ICMPOUTADDRMASKREPS 25

#endif		/*	_ICMPVARS_H_	*/
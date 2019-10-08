/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w  -I/usr/local/Cellar/nim/0.18.0_1/nim/lib -o /Users/bweyl/Documents/PythonCoding/AdventOfCode/2018/Day2/nimcache/stdlib_sequtils.o /Users/bweyl/Documents/PythonCoding/AdventOfCode/2018/Day2/nimcache/stdlib_sequtils.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct tySequence_DHIrxNKue9cYL0t8jxSKHqw tySequence_DHIrxNKue9cYL0t8jxSKHqw;
typedef struct tyTuple_g5PgxDE0xvxcVvCQbeddNg tyTuple_g5PgxDE0xvxcVvCQbeddNg;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct tyTuple_g5PgxDE0xvxcVvCQbeddNg {
NIM_CHAR Field0;
NIM_CHAR Field1;
};
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tySequence_DHIrxNKue9cYL0t8jxSKHqw {
  TGenericSeq Sup;
  tyTuple_g5PgxDE0xvxcVvCQbeddNg data[SEQ_DECL_SIZE];
};
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_NIMCALL(void, Marker_tySequence_DHIrxNKue9cYL0t8jxSKHqw)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
TNimType NTI_g5PgxDE0xvxcVvCQbeddNg_;
extern TNimType NTI_nmiMWKVIe46vacnhAFrQvw_;
TNimType NTI_DHIrxNKue9cYL0t8jxSKHqw_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
static N_NIMCALL(void, Marker_tySequence_DHIrxNKue9cYL0t8jxSKHqw)(void* p, NI op) {
	tySequence_DHIrxNKue9cYL0t8jxSKHqw* a;
	NI T1_;
	a = (tySequence_DHIrxNKue9cYL0t8jxSKHqw*)p;
	T1_ = (NI)0;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

N_LIB_PRIVATE N_NIMCALL(tySequence_DHIrxNKue9cYL0t8jxSKHqw*, zip_A8M9bfjc2VRV0BEJvvwI4rQ)(NIM_CHAR* s1, NI s1Len_0, NIM_CHAR* s2, NI s2Len_0) {
	tySequence_DHIrxNKue9cYL0t8jxSKHqw* result;
	NI m;
	nimfr_("zip", "sequtils.nim");
	result = (tySequence_DHIrxNKue9cYL0t8jxSKHqw*)0;
	nimln_(133, "sequtils.nim");
	m = ((s1Len_0 <= s2Len_0) ? s1Len_0 : s2Len_0);
	nimln_(134, "sequtils.nim");
	result = (tySequence_DHIrxNKue9cYL0t8jxSKHqw*) newSeq((&NTI_DHIrxNKue9cYL0t8jxSKHqw_), ((NI)chckRange(m, ((NI) 0), ((NI) IL64(9223372036854775807)))));
	{
		NI i;
		NI i_2;
		i = (NI)0;
		nimln_(3519, "system.nim");
		i_2 = ((NI) 0);
		{
			nimln_(3520, "system.nim");
			while (1) {
				NI TM_77ITQxrABVT9b2GcbWeV4SQ_3;
				if (!(i_2 < m)) goto LA3;
				nimln_(3521, "system.nim");
				i = i_2;
				if ((NU)(i) >= (NU)(result->Sup.len)) raiseIndexError();
				nimln_(136, "sequtils.nim");
				if ((NU)(i) >= (NU)(s1Len_0)) raiseIndexError();
				result->data[i].Field0 = s1[i];
				if ((NU)(i) >= (NU)(s2Len_0)) raiseIndexError();
				result->data[i].Field1 = s2[i];
				nimln_(3522, "system.nim");
				TM_77ITQxrABVT9b2GcbWeV4SQ_3 = addInt(i_2, ((NI) 1));
				i_2 = (NI)(TM_77ITQxrABVT9b2GcbWeV4SQ_3);
			} LA3: ;
		}
	}
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsInit000)(void) {
	nimfr_("sequtils", "sequtils.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsDatInit000)(void) {
static TNimNode* TM_77ITQxrABVT9b2GcbWeV4SQ_2[2];
static TNimNode TM_77ITQxrABVT9b2GcbWeV4SQ_0[3];
NTI_g5PgxDE0xvxcVvCQbeddNg_.size = sizeof(tyTuple_g5PgxDE0xvxcVvCQbeddNg);
NTI_g5PgxDE0xvxcVvCQbeddNg_.kind = 18;
NTI_g5PgxDE0xvxcVvCQbeddNg_.base = 0;
NTI_g5PgxDE0xvxcVvCQbeddNg_.flags = 3;
TM_77ITQxrABVT9b2GcbWeV4SQ_2[0] = &TM_77ITQxrABVT9b2GcbWeV4SQ_0[1];
TM_77ITQxrABVT9b2GcbWeV4SQ_0[1].kind = 1;
TM_77ITQxrABVT9b2GcbWeV4SQ_0[1].offset = offsetof(tyTuple_g5PgxDE0xvxcVvCQbeddNg, Field0);
TM_77ITQxrABVT9b2GcbWeV4SQ_0[1].typ = (&NTI_nmiMWKVIe46vacnhAFrQvw_);
TM_77ITQxrABVT9b2GcbWeV4SQ_0[1].name = "Field0";
TM_77ITQxrABVT9b2GcbWeV4SQ_2[1] = &TM_77ITQxrABVT9b2GcbWeV4SQ_0[2];
TM_77ITQxrABVT9b2GcbWeV4SQ_0[2].kind = 1;
TM_77ITQxrABVT9b2GcbWeV4SQ_0[2].offset = offsetof(tyTuple_g5PgxDE0xvxcVvCQbeddNg, Field1);
TM_77ITQxrABVT9b2GcbWeV4SQ_0[2].typ = (&NTI_nmiMWKVIe46vacnhAFrQvw_);
TM_77ITQxrABVT9b2GcbWeV4SQ_0[2].name = "Field1";
TM_77ITQxrABVT9b2GcbWeV4SQ_0[0].len = 2; TM_77ITQxrABVT9b2GcbWeV4SQ_0[0].kind = 2; TM_77ITQxrABVT9b2GcbWeV4SQ_0[0].sons = &TM_77ITQxrABVT9b2GcbWeV4SQ_2[0];
NTI_g5PgxDE0xvxcVvCQbeddNg_.node = &TM_77ITQxrABVT9b2GcbWeV4SQ_0[0];
NTI_DHIrxNKue9cYL0t8jxSKHqw_.size = sizeof(tySequence_DHIrxNKue9cYL0t8jxSKHqw*);
NTI_DHIrxNKue9cYL0t8jxSKHqw_.kind = 24;
NTI_DHIrxNKue9cYL0t8jxSKHqw_.base = (&NTI_g5PgxDE0xvxcVvCQbeddNg_);
NTI_DHIrxNKue9cYL0t8jxSKHqw_.flags = 2;
NTI_DHIrxNKue9cYL0t8jxSKHqw_.marker = Marker_tySequence_DHIrxNKue9cYL0t8jxSKHqw;
}

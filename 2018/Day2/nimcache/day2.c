/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w  -I/usr/local/Cellar/nim/0.18.0_1/nim/lib -o /Users/bweyl/Documents/PythonCoding/AdventOfCode/2018/Day2/nimcache/day2.o /Users/bweyl/Documents/PythonCoding/AdventOfCode/2018/Day2/nimcache/day2.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <setjmp.h>
#include <string.h>
#include <stdio.h>
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct tySequence_uB9b75OUPRENsBAu4AnoePA tySequence_uB9b75OUPRENsBAu4AnoePA;
typedef struct TSafePoint TSafePoint;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
typedef N_NIMCALL_PTR(void, tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
typedef NU8 tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ;
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence_uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (Exception* e, void* ClE_0);
void* ClE_0;
} tyProc_KeeAOYBd84Ofsw6Y7LizaQ;
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
tyProc_KeeAOYBd84Ofsw6Y7LizaQ raiseAction;
};
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
typedef NimStringDesc* tyArray_nHXaesL0DJZHyVS07ARPRA[1];
struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct tySequence_uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM_25SgvDuHI4x4WsGrjJvYzg_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
N_LIB_PRIVATE N_NIMCALL(FILE*, open_hqzpWQbdA2B8l9a6wwNoP4g)(NimStringDesc* filename, tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ mode, NI bufSize);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readLine_sO1bQXVRA6RP9cdYJXNKeSw)(FILE* f, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, raiseIndexError)(void);
N_LIB_PRIVATE N_NIMCALL(NI, nsuCountChar)(NimStringDesc* s, NIM_CHAR sub);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA)(NimStringDesc* msg);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_LIB_PRIVATE N_NIMCALL(void, close_BWnr8V7RERYno9bIdPmw8Hw_2)(FILE* f);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(void, echoBinSafe)(NimStringDesc** args, NI argsLen_0);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, setStackBottom)(void* theStackBottom);
NIM_EXTERNC N_NOINLINE(void, systemInit000)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_setsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_setsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void);
NIM_EXTERNC N_NOINLINE(void, day2DatInit000)(void);
NI two_count_9c59bZD9bQDuMcOPZ27mQau4g;
NI three_count_p0Hhz9c9bh7NboioRNlg8UMw;
NimStringDesc* line_4UGpqrnBEdo268Lr5fi6CQ;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
NIM_BOOL isTwo_XNvML6CvQZnoIj1CS4PSyA;
NIM_BOOL isThree_v1osbwRG2zXlssSHKlAnLA;
NIM_CHAR letter_cBFii7K7ZeQMmsiappip0w;
STRING_LITERAL(TM_25SgvDuHI4x4WsGrjJvYzg_3, "day2.in", 7);
STRING_LITERAL(TM_25SgvDuHI4x4WsGrjJvYzg_6, "len(a) == L string modified while iterating over it", 51);
static N_NIMCALL(void, TM_25SgvDuHI4x4WsGrjJvYzg_2)(void) {
	nimGCvisit((void*)line_4UGpqrnBEdo268Lr5fi6CQ, 0);
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = excHandler_rqLlY5bs9atDw2OXYqJEn5g;
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = s;
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

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	nimfr_("usrToCell", "gc.nim");
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(132, "gc.nim");
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "gc.nim");
	nimln_(211, "gc.nim");
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	nimfr_("nimGCunrefNoCycle", "gc.nim");
	nimln_(250, "gc.nim");
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	nimln_(252, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(253, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
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

static N_INLINE(void, popSafePoint)(void) {
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = (*excHandler_rqLlY5bs9atDw2OXYqJEn5g).prev;
}

static N_INLINE(void, setFrame)(TFrame* s) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
}

static N_INLINE(void, initStackBottomWith)(void* locals) {
	setStackBottom(locals);
}
void PreMainInner(void) {
	systemInit000();
	stdlib_parseutilsDatInit000();
	stdlib_mathDatInit000();
	stdlib_algorithmDatInit000();
	stdlib_strutilsDatInit000();
	stdlib_macrosDatInit000();
	stdlib_sequtilsDatInit000();
	stdlib_hashesDatInit000();
	stdlib_setsDatInit000();
	day2DatInit000();
	stdlib_parseutilsInit000();
	stdlib_mathInit000();
	stdlib_algorithmInit000();
	stdlib_strutilsInit000();
	stdlib_macrosInit000();
	stdlib_sequtilsInit000();
	stdlib_hashesInit000();
	stdlib_setsInit000();
}

void PreMain(void) {
	void (*volatile inner)(void);
	systemDatInit000();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	NimMainModule();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)(void);
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void) {
	tyArray_nHXaesL0DJZHyVS07ARPRA T34_;
	NI TM_25SgvDuHI4x4WsGrjJvYzg_9;
	nimfr_("day2", "day2.nim");
nimRegisterGlobalMarker(TM_25SgvDuHI4x4WsGrjJvYzg_2);
	nimln_(10, "day2.nim");
	two_count_9c59bZD9bQDuMcOPZ27mQau4g = ((NI) 0);
	three_count_p0Hhz9c9bh7NboioRNlg8UMw = ((NI) 0);
	{
		FILE* f;
		TSafePoint TM_25SgvDuHI4x4WsGrjJvYzg_4;
		nimln_(3322, "system.nim");
		f = open_hqzpWQbdA2B8l9a6wwNoP4g(((NimStringDesc*) &TM_25SgvDuHI4x4WsGrjJvYzg_3), ((tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ) 0), ((NI) 8000));
		nimln_(3323, "system.nim");
		pushSafePoint(&TM_25SgvDuHI4x4WsGrjJvYzg_4);
		TM_25SgvDuHI4x4WsGrjJvYzg_4.status = _setjmp(TM_25SgvDuHI4x4WsGrjJvYzg_4.context);
		if (TM_25SgvDuHI4x4WsGrjJvYzg_4.status == 0) {
			NimStringDesc* res;
			nimln_(3324, "system.nim");
			res = rawNewString(((NI) 80));
			{
				nimln_(3325, "system.nim");
				while (1) {
					NIM_BOOL T5_;
					NimStringDesc* T6_;
					T5_ = (NIM_BOOL)0;
					T5_ = readLine_sO1bQXVRA6RP9cdYJXNKeSw(f, (&res));
					if (!T5_) goto LA4;
					T6_ = (NimStringDesc*)0;
					T6_ = line_4UGpqrnBEdo268Lr5fi6CQ; line_4UGpqrnBEdo268Lr5fi6CQ = copyStringRC1(res);
					if (T6_) nimGCunrefNoCycle(T6_);
					isTwo_XNvML6CvQZnoIj1CS4PSyA = 0;
					nimln_(12, "day2.nim");
					isTwo_XNvML6CvQZnoIj1CS4PSyA = NIM_FALSE;
					isThree_v1osbwRG2zXlssSHKlAnLA = 0;
					isThree_v1osbwRG2zXlssSHKlAnLA = NIM_FALSE;
					{
						NI volatile i;
						NI L;
						letter_cBFii7K7ZeQMmsiappip0w = 0;
						nimln_(3823, "system.nim");
						i = ((NI) 0);
						nimln_(3824, "system.nim");
						L = (line_4UGpqrnBEdo268Lr5fi6CQ ? line_4UGpqrnBEdo268Lr5fi6CQ->Sup.len : 0);
						{
							nimln_(3825, "system.nim");
							while (1) {
								NI TM_25SgvDuHI4x4WsGrjJvYzg_5;
								if (!(i < L)) goto LA9;
								nimln_(3826, "system.nim");
								if ((NU)(i) > (NU)(line_4UGpqrnBEdo268Lr5fi6CQ->Sup.len)) raiseIndexError();
								letter_cBFii7K7ZeQMmsiappip0w = line_4UGpqrnBEdo268Lr5fi6CQ->data[i];
								nimln_(14, "day2.nim");
								{
									NI T12_;
									T12_ = (NI)0;
									T12_ = nsuCountChar(line_4UGpqrnBEdo268Lr5fi6CQ, letter_cBFii7K7ZeQMmsiappip0w);
									if (!(T12_ == ((NI) 2))) goto LA13_;
									nimln_(15, "day2.nim");
									isTwo_XNvML6CvQZnoIj1CS4PSyA = NIM_TRUE;
								}
								LA13_: ;
								nimln_(16, "day2.nim");
								{
									NI T17_;
									T17_ = (NI)0;
									T17_ = nsuCountChar(line_4UGpqrnBEdo268Lr5fi6CQ, letter_cBFii7K7ZeQMmsiappip0w);
									if (!(T17_ == ((NI) 3))) goto LA18_;
									nimln_(17, "day2.nim");
									isThree_v1osbwRG2zXlssSHKlAnLA = NIM_TRUE;
								}
								LA18_: ;
								nimln_(3827, "system.nim");
								TM_25SgvDuHI4x4WsGrjJvYzg_5 = addInt(i, ((NI) 1));
								i = (NI)(TM_25SgvDuHI4x4WsGrjJvYzg_5);
								nimln_(3828, "system.nim");
								{
									if (!!(((line_4UGpqrnBEdo268Lr5fi6CQ ? line_4UGpqrnBEdo268Lr5fi6CQ->Sup.len : 0) == L))) goto LA22_;
									failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_25SgvDuHI4x4WsGrjJvYzg_6));
								}
								LA22_: ;
							} LA9: ;
						}
					}
					nimln_(18, "day2.nim");
					{
						NI TM_25SgvDuHI4x4WsGrjJvYzg_7;
						if (!isTwo_XNvML6CvQZnoIj1CS4PSyA) goto LA26_;
						nimln_(19, "day2.nim");
						TM_25SgvDuHI4x4WsGrjJvYzg_7 = addInt(two_count_9c59bZD9bQDuMcOPZ27mQau4g, ((NI) 1));
						two_count_9c59bZD9bQDuMcOPZ27mQau4g = (NI)(TM_25SgvDuHI4x4WsGrjJvYzg_7);
					}
					LA26_: ;
					nimln_(20, "day2.nim");
					{
						NI TM_25SgvDuHI4x4WsGrjJvYzg_8;
						if (!isThree_v1osbwRG2zXlssSHKlAnLA) goto LA30_;
						nimln_(21, "day2.nim");
						TM_25SgvDuHI4x4WsGrjJvYzg_8 = addInt(three_count_p0Hhz9c9bh7NboioRNlg8UMw, ((NI) 1));
						three_count_p0Hhz9c9bh7NboioRNlg8UMw = (NI)(TM_25SgvDuHI4x4WsGrjJvYzg_8);
					}
					LA30_: ;
				} LA4: ;
			}
			popSafePoint();
		}
		else {
			popSafePoint();
			setFrame((TFrame*)&FR_);
		}
		{
			nimln_(3323, "system.nim");
			close_BWnr8V7RERYno9bIdPmw8Hw_2(f);
		}
		if (TM_25SgvDuHI4x4WsGrjJvYzg_4.status != 0) reraiseException();
	}
	nimln_(22, "day2.nim");
	memset((void*)T34_, 0, sizeof(T34_));
	TM_25SgvDuHI4x4WsGrjJvYzg_9 = mulInt(two_count_9c59bZD9bQDuMcOPZ27mQau4g, three_count_p0Hhz9c9bh7NboioRNlg8UMw);
	T34_[0] = nimIntToStr((NI)(TM_25SgvDuHI4x4WsGrjJvYzg_9));
	echoBinSafe(T34_, 1);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, day2DatInit000)(void) {
}


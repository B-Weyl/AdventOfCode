/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w  -I/usr/local/Cellar/nim/0.18.0_1/nim/lib -o /Users/bweyl/Documents/PythonCoding/AdventOfCode/2018/Day1/nimcache/day1.o /Users/bweyl/Documents/PythonCoding/AdventOfCode/2018/Day1/nimcache/day1.c */
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
typedef struct tySequence_qwqHTkRvwhrRyENtudHQ7g tySequence_qwqHTkRvwhrRyENtudHQ7g;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg;
typedef struct tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ;
typedef struct tySequence_9brg1xNurxcus33lU4IE1Dw tySequence_9brg1xNurxcus33lU4IE1Dw;
typedef struct NimStringDesc NimStringDesc;
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
typedef NI tyArray_emiAJ8okywrJw7ZHLzlXbQ[34];
struct tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg {
NI elems;
NI counter;
NI max;
tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* head;
tySequence_9brg1xNurxcus33lU4IE1Dw* data;
tyArray_emiAJ8okywrJw7ZHLzlXbQ a;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
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
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ {
tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
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
struct tySequence_qwqHTkRvwhrRyENtudHQ7g {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct tySequence_9brg1xNurxcus33lU4IE1Dw {
  TGenericSeq Sup;
  tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* data[SEQ_DECL_SIZE];
};
struct tySequence_uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
static N_NIMCALL(void, Marker_tySequence_qwqHTkRvwhrRyENtudHQ7g)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM_sI4HKEgeSdUjhISo1q6qQw_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
static N_NIMCALL(void, TM_sI4HKEgeSdUjhISo1q6qQw_3)(void);
N_LIB_PRIVATE N_NIMCALL(void, initIntSet_a9a80eJplB17xrdZJ41Baww)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* Result);
N_LIB_PRIVATE N_NIMCALL(void, incl_iUpE9bYmIR0fROyJskQwN8g)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* s, NI key);
static N_NIMCALL(void, TM_sI4HKEgeSdUjhISo1q6qQw_4)(void);
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
N_LIB_PRIVATE N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemSize);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_LIB_PRIVATE N_NIMCALL(void, close_BWnr8V7RERYno9bIdPmw8Hw_2)(FILE* f);
N_NIMCALL(void, reraiseException)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, contains_sYBLNwnPJlAFi0nfWU79awg)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* s, NI key);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA)(NimStringDesc* msg);
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
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void);
NIM_EXTERNC N_NOINLINE(void, day1DatInit000)(void);
NI total_6MOGD9bWOFSCWsVjwwwWCLA;
tySequence_qwqHTkRvwhrRyENtudHQ7g* changelist_R9aDTM2k9bSeofQvIOSxIZcA;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
TNimType NTI_qwqHTkRvwhrRyENtudHQ7g_;
tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg freqset_MvE1KeEiOYJsqtnzNYFOZg;
extern TNimType NTI_PQrmFm4BXFkFSVOUl1ojSg_;
NimStringDesc* line_BHsK7GawTu2wWno9c7OEBNA;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
NI freq_Bum4VyFBuNP49cVeEFSTeWA;
NI change_oHPbaOgB7Hp83KxwYL4etQ;
STRING_LITERAL(TM_sI4HKEgeSdUjhISo1q6qQw_5, "day1.in", 7);
STRING_LITERAL(TM_sI4HKEgeSdUjhISo1q6qQw_9, "len(a) == L seq modified while iterating over it", 48);
static N_NIMCALL(void, Marker_tySequence_qwqHTkRvwhrRyENtudHQ7g)(void* p, NI op) {
	tySequence_qwqHTkRvwhrRyENtudHQ7g* a;
	NI T1_;
	a = (tySequence_qwqHTkRvwhrRyENtudHQ7g*)p;
	T1_ = (NI)0;
}
static N_NIMCALL(void, TM_sI4HKEgeSdUjhISo1q6qQw_2)(void) {
	nimGCvisit((void*)changelist_R9aDTM2k9bSeofQvIOSxIZcA, 0);
}
static N_NIMCALL(void, TM_sI4HKEgeSdUjhISo1q6qQw_3)(void) {
	NI T1_;
	nimGCvisit((void*)freqset_MvE1KeEiOYJsqtnzNYFOZg.head, 0);
	nimGCvisit((void*)freqset_MvE1KeEiOYJsqtnzNYFOZg.data, 0);
	T1_ = (NI)0;
}
static N_NIMCALL(void, TM_sI4HKEgeSdUjhISo1q6qQw_4)(void) {
	nimGCvisit((void*)line_BHsK7GawTu2wWno9c7OEBNA, 0);
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

static N_INLINE(void, popSafePoint)(void) {
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = (*excHandler_rqLlY5bs9atDw2OXYqJEn5g).prev;
}

static N_INLINE(void, setFrame)(TFrame* s) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
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

static N_INLINE(void, initStackBottomWith)(void* locals) {
	setStackBottom(locals);
}
void PreMainInner(void) {
	systemInit000();
	stdlib_parseutilsDatInit000();
	stdlib_mathDatInit000();
	stdlib_algorithmDatInit000();
	stdlib_strutilsDatInit000();
	stdlib_hashesDatInit000();
	stdlib_intsetsDatInit000();
	day1DatInit000();
	stdlib_parseutilsInit000();
	stdlib_mathInit000();
	stdlib_algorithmInit000();
	stdlib_strutilsInit000();
	stdlib_hashesInit000();
	stdlib_intsetsInit000();
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
	tyArray_nHXaesL0DJZHyVS07ARPRA T28_;
	tyArray_nHXaesL0DJZHyVS07ARPRA T29_;
	nimfr_("day1", "day1.nim");
nimRegisterGlobalMarker(TM_sI4HKEgeSdUjhISo1q6qQw_2);
nimRegisterGlobalMarker(TM_sI4HKEgeSdUjhISo1q6qQw_3);
nimRegisterGlobalMarker(TM_sI4HKEgeSdUjhISo1q6qQw_4);
	nimln_(4, "day1.nim");
	total_6MOGD9bWOFSCWsVjwwwWCLA = ((NI) 0);
	nimln_(6, "day1.nim");
	initIntSet_a9a80eJplB17xrdZJ41Baww((&freqset_MvE1KeEiOYJsqtnzNYFOZg));
	nimln_(7, "day1.nim");
	incl_iUpE9bYmIR0fROyJskQwN8g((&freqset_MvE1KeEiOYJsqtnzNYFOZg), ((NI) 0));
	{
		FILE* f;
		TSafePoint TM_sI4HKEgeSdUjhISo1q6qQw_6;
		nimln_(3322, "system.nim");
		f = open_hqzpWQbdA2B8l9a6wwNoP4g(((NimStringDesc*) &TM_sI4HKEgeSdUjhISo1q6qQw_5), ((tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ) 0), ((NI) 8000));
		nimln_(3323, "system.nim");
		pushSafePoint(&TM_sI4HKEgeSdUjhISo1q6qQw_6);
		TM_sI4HKEgeSdUjhISo1q6qQw_6.status = _setjmp(TM_sI4HKEgeSdUjhISo1q6qQw_6.context);
		if (TM_sI4HKEgeSdUjhISo1q6qQw_6.status == 0) {
			NimStringDesc* res;
			nimln_(3324, "system.nim");
			res = rawNewString(((NI) 80));
			{
				nimln_(3325, "system.nim");
				while (1) {
					NIM_BOOL T5_;
					NimStringDesc* T6_;
					NI T7_;
					NI T8_;
					T5_ = (NIM_BOOL)0;
					T5_ = readLine_sO1bQXVRA6RP9cdYJXNKeSw(f, (&res));
					if (!T5_) goto LA4;
					T6_ = (NimStringDesc*)0;
					T6_ = line_BHsK7GawTu2wWno9c7OEBNA; line_BHsK7GawTu2wWno9c7OEBNA = copyStringRC1(res);
					if (T6_) nimGCunrefNoCycle(T6_);
					nimln_(12, "day1.nim");
					T7_ = (NI)0;
					T7_ = nsuParseInt(line_BHsK7GawTu2wWno9c7OEBNA);
					changelist_R9aDTM2k9bSeofQvIOSxIZcA = (tySequence_qwqHTkRvwhrRyENtudHQ7g*) incrSeqV2(&(changelist_R9aDTM2k9bSeofQvIOSxIZcA)->Sup, sizeof(NI));
					T8_ = changelist_R9aDTM2k9bSeofQvIOSxIZcA->Sup.len++;
					changelist_R9aDTM2k9bSeofQvIOSxIZcA->data[T8_] = T7_;
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
		if (TM_sI4HKEgeSdUjhISo1q6qQw_6.status != 0) reraiseException();
	}
	nimln_(20, "day1.nim");
	freq_Bum4VyFBuNP49cVeEFSTeWA = ((NI) 0);
	{
		{
			nimln_(16, "day1.nim");
			while (1) {
				{
					NI change;
					NI i;
					NI L;
					NI T15_;
					change = (NI)0;
					nimln_(3805, "system.nim");
					i = ((NI) 0);
					nimln_(3806, "system.nim");
					T15_ = (changelist_R9aDTM2k9bSeofQvIOSxIZcA ? changelist_R9aDTM2k9bSeofQvIOSxIZcA->Sup.len : 0);
					L = T15_;
					{
						nimln_(3807, "system.nim");
						while (1) {
							NI TM_sI4HKEgeSdUjhISo1q6qQw_7;
							NI TM_sI4HKEgeSdUjhISo1q6qQw_8;
							if (!(i < L)) goto LA17;
							nimln_(3808, "system.nim");
							if ((NU)(i) >= (NU)(changelist_R9aDTM2k9bSeofQvIOSxIZcA->Sup.len)) raiseIndexError();
							change = changelist_R9aDTM2k9bSeofQvIOSxIZcA->data[i];
							nimln_(18, "day1.nim");
							change_oHPbaOgB7Hp83KxwYL4etQ = change;
							nimln_(23, "day1.nim");
							TM_sI4HKEgeSdUjhISo1q6qQw_7 = addInt(freq_Bum4VyFBuNP49cVeEFSTeWA, change_oHPbaOgB7Hp83KxwYL4etQ);
							freq_Bum4VyFBuNP49cVeEFSTeWA = (NI)(TM_sI4HKEgeSdUjhISo1q6qQw_7);
							nimln_(24, "day1.nim");
							{
								NIM_BOOL T20_;
								T20_ = (NIM_BOOL)0;
								T20_ = contains_sYBLNwnPJlAFi0nfWU79awg((&freqset_MvE1KeEiOYJsqtnzNYFOZg), freq_Bum4VyFBuNP49cVeEFSTeWA);
								if (!T20_) goto LA21_;
								nimln_(25, "day1.nim");
								goto LA11;
							}
							LA21_: ;
							nimln_(26, "day1.nim");
							incl_iUpE9bYmIR0fROyJskQwN8g((&freqset_MvE1KeEiOYJsqtnzNYFOZg), freq_Bum4VyFBuNP49cVeEFSTeWA);
							nimln_(3809, "system.nim");
							TM_sI4HKEgeSdUjhISo1q6qQw_8 = addInt(i, ((NI) 1));
							i = (NI)(TM_sI4HKEgeSdUjhISo1q6qQw_8);
							nimln_(3810, "system.nim");
							{
								NI T25_;
								T25_ = (changelist_R9aDTM2k9bSeofQvIOSxIZcA ? changelist_R9aDTM2k9bSeofQvIOSxIZcA->Sup.len : 0);
								if (!!((T25_ == L))) goto LA26_;
								failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_sI4HKEgeSdUjhISo1q6qQw_9));
							}
							LA26_: ;
						} LA17: ;
					}
				}
			}
		}
	} LA11: ;
	nimln_(27, "day1.nim");
	memset((void*)T28_, 0, sizeof(T28_));
	T28_[0] = nimIntToStr(freq_Bum4VyFBuNP49cVeEFSTeWA);
	echoBinSafe(T28_, 1);
	nimln_(28, "day1.nim");
	memset((void*)T29_, 0, sizeof(T29_));
	T29_[0] = nimIntToStr(total_6MOGD9bWOFSCWsVjwwwWCLA);
	echoBinSafe(T29_, 1);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, day1DatInit000)(void) {
NTI_qwqHTkRvwhrRyENtudHQ7g_.size = sizeof(tySequence_qwqHTkRvwhrRyENtudHQ7g*);
NTI_qwqHTkRvwhrRyENtudHQ7g_.kind = 24;
NTI_qwqHTkRvwhrRyENtudHQ7g_.base = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
NTI_qwqHTkRvwhrRyENtudHQ7g_.flags = 2;
NTI_qwqHTkRvwhrRyENtudHQ7g_.marker = Marker_tySequence_qwqHTkRvwhrRyENtudHQ7g;
}


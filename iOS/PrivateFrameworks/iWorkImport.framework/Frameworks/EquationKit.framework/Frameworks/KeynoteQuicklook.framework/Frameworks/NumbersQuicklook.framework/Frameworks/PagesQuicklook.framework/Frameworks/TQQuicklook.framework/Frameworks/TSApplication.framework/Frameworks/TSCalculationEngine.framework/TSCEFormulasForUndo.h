//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSCEFormulasForUndo : NSObject
{
    struct unordered_map<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *, std::__1::hash<TSCESubFormulaOwnerIndex>, std::__1::equal_to<TSCESubFormulaOwnerIndex>, std::__1::allocator<std::__1::pair<const TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>>> _formulasForOwnerKind;
    struct unordered_map<TSCECellRef, NSString *, std::__1::hash<TSCECellRef>, std::__1::equal_to<TSCECellRef>, std::__1::allocator<std::__1::pair<const TSCECellRef, NSString *>>> _formulaStringsForCellRefs;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)formulaStringAtCellRef:(const struct TSCECellRef *)arg1;
- (void)addFormulaString:(id)arg1 atCellRef:(const struct TSCECellRef *)arg2;
- (void)saveToArchive:(struct FormulasForUndoArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct FormulasForUndoArchive *)arg1;
- (id)description;
- (void)foreachFormulaInOwnerKind:(unsigned short)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)splitIntoChunksForExcessiveSize;
- (unsigned long long)countForOwnerKind:(unsigned short)arg1;
- (id)subsetForOwnerKind:(unsigned short)arg1;
- (vector_8b45bc7e)allOwnerKinds;
- (unordered_set_c6a929bd)ownerUIDsForOwnerKind:(unsigned short)arg1;
- (_Bool)isEmpty;
- (unsigned long long)count;
- (void)addFormulaObject:(id)arg1 atCellRef:(const struct TSCECellRef *)arg2 forOwnerKind:(unsigned short)arg3;

@end

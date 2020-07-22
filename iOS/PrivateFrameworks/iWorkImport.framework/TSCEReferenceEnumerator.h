//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCEReferenceEnumerator : NSObject
{
    struct TSCEASTNodeArray *mAST;
    struct TSCEASTNodeArrayReferenceIteratorState *mReferenceIteratorState;
}

- (const struct TSCECReference *)nextReference;
- (void)dealloc;
- (id)initWithCalculationEngine:(id)arg1 defaultFormulaOwnerUID:(const UUIDData_5fbc143e *)arg2 nodeArray:(const struct TSCEASTNodeArray *)arg3 myHostCellID:(struct TSUCellCoord)arg4 doImplicitIntersection:(_Bool)arg5 doUidReferences:(_Bool)arg6;

@end


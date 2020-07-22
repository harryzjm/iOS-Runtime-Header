//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSTCellDictionary : NSObject
{
    struct os_unfair_lock_s _lock;
    struct map<TSUCellCoord, SFUtility::ObjcSharedPtr<TSTCell>, std::__1::less<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, SFUtility::ObjcSharedPtr<TSTCell>>>> _cellsByCoord;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)applyBlockToAllCells:(CDUnknownBlockType)arg1;
- (id)allCells;
- (vector_13f93596)removeAllCells;
- (id)cellAtCellID:(struct TSUCellCoord)arg1;
- (void)setCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (id)init;

@end


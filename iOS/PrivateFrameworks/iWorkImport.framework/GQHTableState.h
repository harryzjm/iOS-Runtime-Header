//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GQDTTable;

@interface GQHTableState : NSObject
{
    int mPrevRowIndex;
    int mPrevColumnIndex;
    GQDTTable *mTable;
    void *mCellCountInColumns;
    int mGroupLevel;
    _Bool mSplitTable;
    double mCurrentTablePosition;
    double mLastAttachmentPosition;
    long long mSplitTableIndex;
    double mOriginalTableHeight;
}

- (void)setOriginalTableHeight:(double)arg1;
- (double)originalTableHeight;
- (void)setLastAttachmentPosition:(double)arg1;
- (double)lastAttachmentPosition;
- (void)addRowHeight:(float)arg1;
- (double)currentTablePosition;
- (long long)nextSplitTableIndex;
- (void)setSplitTableIndex:(long long)arg1;
- (void)setSplitTable:(_Bool)arg1;
- (_Bool)splitTable;
- (void)setGroupLevel:(int)arg1;
- (int)groupLevel;
- (void *)cellCountInColumns;
- (void)setTable:(id)arg1;
- (id)table;
- (void)setPrevRowIndex:(int)arg1 columnIndex:(int)arg2;
- (int)prevColumnIndex;
- (int)prevRowIndex;
- (void)dealloc;
- (id)init;

@end


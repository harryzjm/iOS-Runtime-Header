//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class EDRowBlock, EDRowBlocks;

__attribute__((visibility("hidden")))
@interface EDCellIterator : NSObject
{
    EDRowBlocks *mRowBlocks;
    EDRowBlock *mCurrentRowBlock;
    struct EDRowInfo *mCurrentRowInfo;
    unsigned int mCurrentRowInfoIndex;
    struct EDCellHeader *mCurrentCell;
    unsigned int mCurrentCellIndex;
    unsigned int mDesiredRowNumber;
    unsigned int mDesiredColumnNumber;
}

- (struct EDCellHeader *)scanToRowNumber:(unsigned int)arg1 columnNumber:(unsigned int)arg2;
- (struct EDCellHeader *)adjacentCellRight;
- (struct EDCellHeader *)adjacentCellLeft;
- (void)dealloc;
- (id)initWithWorksheet:(id)arg1;
- (struct EDCellHeader *)adjacentCell:(int)arg1;

@end


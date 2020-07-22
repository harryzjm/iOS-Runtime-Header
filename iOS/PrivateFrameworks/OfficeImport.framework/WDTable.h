//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, WDTableProperties;

@interface WDTable
{
    WDTableProperties *mProperties;
    NSMutableArray *mRows;
}

- (id)description;
- (id)newRunIterator;
- (id)runIterator;
- (id)newCellIterator;
- (id)cellIterator;
- (id)newRowIterator;
- (id)rowIterator;
- (int)nestingLevel;
- (int)blockType;
- (void)clearRows;
- (id)insertRowAtIndex:(unsigned long long)arg1;
- (id)addRow;
- (id)rowAt:(unsigned long long)arg1;
- (unsigned long long)rowCount;
- (void)clearProperties;
- (id)properties;
- (void)dealloc;
- (id)initWithText:(id)arg1;

@end


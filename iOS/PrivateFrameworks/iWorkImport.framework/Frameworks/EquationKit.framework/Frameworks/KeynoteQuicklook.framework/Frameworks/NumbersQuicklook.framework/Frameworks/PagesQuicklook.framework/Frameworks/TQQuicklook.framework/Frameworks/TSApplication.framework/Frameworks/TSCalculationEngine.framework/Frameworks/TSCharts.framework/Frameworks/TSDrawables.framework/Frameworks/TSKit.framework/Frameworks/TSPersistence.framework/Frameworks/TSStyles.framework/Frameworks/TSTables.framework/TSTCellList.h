//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSPObject.h>

#import <TSTables/NSCopying-Protocol.h>

@interface TSTCellList : TSPObject <NSCopying>
{
    vector_73284f0b _cells;
    unsigned long long _trailingEmptyCellCount;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)lastCell;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)replaceCell:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)cellAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)shallowAddCell:(id)arg1;
- (id)addCell:(id)arg1;
- (void)addPrecopiedCell:(id)arg1;
- (unsigned long long)trailingEmptyCellCount;
- (id)initWithContext:(id)arg1;

@end

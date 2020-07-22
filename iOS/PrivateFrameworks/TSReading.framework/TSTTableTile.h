//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray;

@interface TSTTableTile
{
    unsigned char mMaxColumn;
    unsigned short mMaxRow;
    unsigned short mNumCells;
    NSMutableArray *mRowInfos;
    unsigned short mNumRows;
    unsigned char mStorageVersion;
}

- (id)description;
- (void)validate;
- (void)debugListRows;
- (void)debugDump;
@property(readonly, nonatomic) NSArray *rowInfos;
@property(readonly, nonatomic) unsigned short numRows;
@property(readonly, nonatomic) unsigned short numCells;
@property(readonly, nonatomic) unsigned short maxRow;
@property(readonly, nonatomic) unsigned char maxColumn;
- (id)packageLocator;
- (unsigned long long)flushableSize;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithRows:(id)arg1 context:(id)arg2;
- (void)i_upgradeTileRowInfosWithDataStore:(id)arg1;

@end


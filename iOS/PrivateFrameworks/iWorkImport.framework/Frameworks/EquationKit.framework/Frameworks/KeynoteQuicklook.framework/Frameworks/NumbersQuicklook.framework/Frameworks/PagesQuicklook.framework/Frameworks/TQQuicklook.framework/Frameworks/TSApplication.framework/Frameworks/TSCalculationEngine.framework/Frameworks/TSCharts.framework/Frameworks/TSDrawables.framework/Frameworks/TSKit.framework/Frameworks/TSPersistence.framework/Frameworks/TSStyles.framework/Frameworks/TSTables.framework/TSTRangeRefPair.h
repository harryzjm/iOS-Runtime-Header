//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSCECellTractRef, TSTTableInfo, TSTTableModel;

@interface TSTRangeRefPair : NSObject
{
    TSCECellTractRef *_baseTractRef;
    TSCECellTractRef *_chromeTractRef;
    TSTTableInfo *_tableInfo;
    TSTTableModel *_tableModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TSTTableModel *tableModel; // @synthesize tableModel=_tableModel;
@property(retain, nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
@property(retain, nonatomic) TSCECellTractRef *chromeTractRef; // @synthesize chromeTractRef=_chromeTractRef;
@property(retain, nonatomic) TSCECellTractRef *baseTractRef; // @synthesize baseTractRef=_baseTractRef;
@property(readonly, nonatomic) struct TSKUIDStruct tableUID;
@property(readonly, nonatomic) RefTypeHolder_41ae741d baseRangeRef;
@property(readonly, nonatomic) RefTypeHolder_b26a20d2 chromeRangeRef;
- (id)initWithBaseTractRef:(id)arg1 calcEngine:(id)arg2;
- (id)initWithChromeTractRef:(id)arg1 calcEngine:(id)arg2;

@end


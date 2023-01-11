//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSCECellTractRef, TSTInfo, TSTTableModel;

__attribute__((visibility("hidden")))
@interface TSTRangeRefPair : NSObject
{
    TSCECellTractRef *_baseTractRef;
    TSCECellTractRef *_chromeTractRef;
    TSTInfo *_tableInfo;
    TSTTableModel *_tableModel;
}

@property(retain, nonatomic) TSTTableModel *tableModel; // @synthesize tableModel=_tableModel;
@property(retain, nonatomic) TSTInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
@property(retain, nonatomic) TSCECellTractRef *chromeTractRef; // @synthesize chromeTractRef=_chromeTractRef;
@property(retain, nonatomic) TSCECellTractRef *baseTractRef; // @synthesize baseTractRef=_baseTractRef;
- (void).cxx_destruct;
@property(readonly, nonatomic) UUIDData_5fbc143e tableUID;
@property(readonly, nonatomic) RefTypeHolder_1140c985 baseRangeRef;
@property(readonly, nonatomic) RefTypeHolder_8c6da553 chromeRangeRef;
- (id)initWithBaseTractRef:(id)arg1 calcEngine:(id)arg2;
- (id)initWithChromeTractRef:(id)arg1 calcEngine:(id)arg2;

@end


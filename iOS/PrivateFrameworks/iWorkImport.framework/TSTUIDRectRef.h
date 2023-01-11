//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSCECalculationEngine, TSCECellTractRef;

__attribute__((visibility("hidden")))
@interface TSTUIDRectRef : NSObject <NSCopying>
{
    TSCECalculationEngine *_calcEngine;
    UUIDRect_d701734b _uidRange;
    TSCECellTractRef *_lastKnownViewTractRef;
    unsigned char _preserveFlags;
    UUIDData_5fbc143e _tableUID;
    RefTypeHolder_8c6da553 _chromeRangeRef;
}

@property(nonatomic) RefTypeHolder_8c6da553 chromeRangeRef; // @synthesize chromeRangeRef=_chromeRangeRef;
@property(readonly, nonatomic) UUIDData_5fbc143e tableUID; // @synthesize tableUID=_tableUID;
@property(readonly, nonatomic) UUIDRect_d701734b uidRange; // @synthesize uidRange=_uidRange;
@property(nonatomic) unsigned char preserveFlags; // @synthesize preserveFlags=_preserveFlags;
@property(nonatomic) __weak TSCECalculationEngine *calcEngine; // @synthesize calcEngine=_calcEngine;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)uidTractList;
@property(readonly, nonatomic) _Bool spansAllRows;
@property(readonly, nonatomic) _Bool spansAllColumns;
- (_Bool)isValidReference;
- (id)viewCellRegionWithRangeContext:(unsigned char)arg1;
@property(readonly) struct TSUModelCellCoord baseBottomRightCoord;
@property(readonly) struct TSUModelCellCoord baseTopLeftCoord;
@property(readonly) struct TSUViewCellCoord viewBottomRightCoord;
@property(readonly) struct TSUViewCellCoord viewTopLeftCoord;
- (id)chromeTractRef;
- (id)viewTractRef;
- (id)baseTractRef;
- (vector_e93a2b69)viewRangeRefs;
- (vector_40295af5)baseRangeRefs;
- (RefTypeHolder_45a2a752)viewRangeRef;
- (RefTypeHolder_1140c985)baseRangeRef;
- (void)setBaseRangeRef:(const RefTypeHolder_1140c985 *)arg1 preserveFlags:(unsigned char)arg2;
- (void)setChromeRangeRef:(const RefTypeHolder_8c6da553 *)arg1 preserveFlags:(unsigned char)arg2;
- (void)setViewRangeRef:(const RefTypeHolder_45a2a752 *)arg1 preserveFlags:(unsigned char)arg2;
@property(readonly, nonatomic) _Bool isBaseRectangle;
@property(readonly, nonatomic) _Bool isViewRectangle;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool isValid;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)convertUIDRefToViewTractRef;
- (void)convertViewTractRefToUID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)tableInfo;
- (id)tableModel;
- (id)initWithCalcEngine:(id)arg1 tableUID:(const UUIDData_5fbc143e *)arg2 uidRange:(const UUIDRect_d701734b *)arg3 preserveFlags:(unsigned char)arg4;
- (id)initWithCalcEngine:(id)arg1 baseRangeRef:(const RefTypeHolder_1140c985 *)arg2 preserveFlags:(unsigned char)arg3;
- (id)initWithCalcEngine:(id)arg1 chromeRangeRef:(const RefTypeHolder_8c6da553 *)arg2 preserveFlags:(unsigned char)arg3;
- (id)initWithCalcEngine:(id)arg1 viewRangeRef:(const RefTypeHolder_45a2a752 *)arg2 preserveFlags:(unsigned char)arg3;
- (id)initWithCalcEngine:(id)arg1 viewTractRef:(id)arg2;

@end


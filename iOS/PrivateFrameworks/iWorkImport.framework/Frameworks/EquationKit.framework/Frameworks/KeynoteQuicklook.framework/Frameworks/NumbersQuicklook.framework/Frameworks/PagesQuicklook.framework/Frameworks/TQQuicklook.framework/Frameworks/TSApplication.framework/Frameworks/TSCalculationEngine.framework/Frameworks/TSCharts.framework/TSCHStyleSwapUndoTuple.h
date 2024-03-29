//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID, TSCHStyleOwnerReference, TSCHStyleSemanticTag, TSPObject, TSSPropertySet, TSSStyle;
@protocol TSCHStyleSwapSupporting;

@interface TSCHStyleSwapUndoTuple : NSObject
{
    TSSStyle *_oldValue;
    TSSStyle *_newValue;
    int _swapType;
    int _index;
    NSUUID *_refLineUUID;
    TSPObject<TSCHStyleSwapSupporting> *_styleSwapSupporting;
    TSSPropertySet *_mutatedProperties;
}

+ (id)convertedSwapTuplesForSwapTuples:(id)arg1 chartInfo:(id)arg2;
+ (_Bool)hasSwapTuplesRequiringConversion:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *refLineUUID; // @synthesize refLineUUID=_refLineUUID;
@property(readonly, nonatomic) int swapType; // @synthesize swapType=_swapType;
@property(readonly, nonatomic) TSSStyle *afterValue; // @synthesize afterValue=_newValue;
@property(readonly, nonatomic) TSSStyle *beforeValue; // @synthesize beforeValue=_oldValue;
@property(readonly, nonatomic) TSPObject<TSCHStyleSwapSupporting> *styleSwapSupporting; // @synthesize styleSwapSupporting=_styleSwapSupporting;
- (void)saveToArchive:(void *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const void *)arg1 unarchiver:(id)arg2;
- (id)convertedSwapTupleForChartInfo:(id)arg1;
- (id)migratedSwapTupleForDocumentRoot:(id)arg1;
- (id)migratedStyleForStyle:(id)arg1 documentRoot:(id)arg2;
@property(readonly, nonatomic) TSCHStyleOwnerReference *styleOwnerReference;
@property(readonly, nonatomic) TSCHStyleSemanticTag *semanticTag;
- (_Bool)canApplyTupleToStyleSwapSupporting:(id)arg1;
- (id)description;
@property(readonly, nonatomic) TSSPropertySet *mutatedProperties;
- (id)p_nonequalPropertiesFromMap:(id)arg1 toMap:(id)arg2;
@property(readonly, nonatomic) unsigned long long index;
- (unsigned long long)hash;
- (_Bool)isSwappingSameStyleValues:(id)arg1;
- (_Bool)isSwappingSameStyleObject:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)inverse;
- (id)initFromSOSWithSwapType:(int)arg1 index:(unsigned long long)arg2 oldValue:(id)arg3 newValue:(id)arg4 refLineUUID:(id)arg5;
- (id)initWithChartStylePreset:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5;
- (id)initWithChartInfo:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5;
- (id)initWithChartInfo:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 refLineUUID:(id)arg6;
- (id)initWithPersistentStyleSwapSupporting:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 refLineUUID:(id)arg6;

@end


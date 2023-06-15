//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TSCHChartInfo;

@interface TSCHLegendModel : NSObject
{
    TSCHChartInfo *_chartInfo;
    struct CGRect _legendFrame;
}

+ (unsigned char)styleOwnerPathType;
- (void).cxx_destruct;
@property(nonatomic) __weak TSCHChartInfo *chartInfo; // @synthesize chartInfo=_chartInfo;
- (_Bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)transformedTuplesWithTuple:(id)arg1;
- (id)nonstyle;
- (id)style;
- (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
- (id)swapTuplesForMutations:(id)arg1 forImport:(_Bool)arg2;
- (id)context;
- (id)valueForProperty:(int)arg1;
- (id)objectValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2;
- (int)intValueForProperty:(int)arg1 defaultValue:(int)arg2;
- (_Bool)hasObjectValueForProperty:(int)arg1 value:(id *)arg2;
- (_Bool)hasFloatValueForProperty:(int)arg1 value:(float *)arg2;
- (_Bool)hasIntValueForProperty:(int)arg1 value:(int *)arg2;
- (int)defaultPropertyForGeneric:(int)arg1;
- (int)specificPropertyForGeneric:(int)arg1;
- (id)operationPropertyNameFromGenericProperty:(int)arg1;
- (id)defaultProperties;
- (id)p_genericToDefaultPropertyMap;
@property(nonatomic) struct CGSize legendSize;
@property(nonatomic) struct CGPoint legendOffset;
- (id)model;
- (void)willModify;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)loadFromPreUFFArchive:(const void *)arg1;
- (id)g_operationPropertyNameForGenericProperty:(int)arg1;
- (id)g_genericToDefaultPropertyMap;
- (void)saveToUnityArchive:(void *)arg1;
- (void)loadFromUnityArchive:(const void *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


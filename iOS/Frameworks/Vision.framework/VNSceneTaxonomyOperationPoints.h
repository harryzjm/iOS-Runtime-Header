//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VNSceneTaxonomyOperationPoints
{
    NSString *_frameworkOperationPointsIdentifier;
    NSURL *_nonframeworkDataURL;
    NSMapTable *_labelToOperationPointsDataIndexMap;
    CDStruct_47a8b21a *_operationPointsDataArray;
    unsigned long long _cachedHashValue;
}

+ (_Bool)supportsSecureCoding;
+ (id)loadFromURL:(id)arg1 error:(id *)arg2;
+ (id)loadFromPropertyList:(id)arg1 error:(id *)arg2;
+ (id)URLForIdentifier:(id)arg1 error:(id *)arg2;
+ (id)loadFromIdentifier:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)getClassificationMetrics:(id *)arg1 forClassificationIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)getRecall:(float *)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id *)arg4;
- (_Bool)getConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 withRecall:(float)arg3 error:(id *)arg4;
- (_Bool)getPrecision:(float *)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id *)arg4;
- (_Bool)getConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 withPrecision:(float)arg3 error:(id *)arg4;
- (_Bool)getDefaultConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 error:(id *)arg3;
- (id)_propertyListRepresentation;
- (id)_allClassificationIdentifiers;
- (const CDStruct_47a8b21a *)_operationPointsDataForClassificationIdentifier:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithLabelToOperationPointsDataIndexMap:(id)arg1 operationPointsDataArray:(CDStruct_47a8b21a *)arg2;

@end


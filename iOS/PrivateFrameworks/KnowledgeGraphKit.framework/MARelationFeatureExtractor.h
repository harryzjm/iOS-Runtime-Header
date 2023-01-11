//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MAIndexCache, MARelation, NSString;

@interface MARelationFeatureExtractor
{
    NSString *_name;
    MAIndexCache *_featureNameIndexCache;
    MARelation *_relation;
    CDUnknownBlockType _labelForTargetBlock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType labelForTargetBlock; // @synthesize labelForTargetBlock=_labelForTargetBlock;
@property(readonly, nonatomic) MARelation *relation; // @synthesize relation=_relation;
@property(readonly, nonatomic) MAIndexCache *featureNameIndexCache; // @synthesize featureNameIndexCache=_featureNameIndexCache;
- (id)name;
- (id)featureNames;
- (id)floatVectorWithEntity:(id)arg1 error:(id *)arg2;
- (id)initWithName:(id)arg1 featureNames:(id)arg2 relation:(id)arg3 labelForTargetBlock:(CDUnknownBlockType)arg4;

@end

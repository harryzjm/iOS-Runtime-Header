//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGGraphLocalizable-Protocol.h>
#import <PhotosGraph/PGGraphSynonymSupport-Protocol.h>

@class NSArray, NSString;

@interface PGGraphMeaningNode <PGGraphLocalizable, PGGraphSynonymSupport>
{
    long long _isVeryMeaningfulCachedValue;
}

+ (id)meaningLabelsForMeaningNodes:(id)arg1;
@property(nonatomic) long long isVeryMeaningfulCachedValue; // @synthesize isVeryMeaningfulCachedValue=_isVeryMeaningfulCachedValue;
- (id)associatedNodesForRemoval;
@property(readonly, nonatomic) NSArray *localizedSynonyms;
- (id)_localizationKeyForMeaningLabel:(id)arg1;
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly, nonatomic, getter=isVeryMeaningful) _Bool veryMeaningful;
- (id)momentNodes;
@property(readonly) PGGraphMeaningNode *parentMeaningNode;
- (void)traverseParentMeaningHierarchyUsingBlock:(CDUnknownBlockType)arg1;
- (void)traverseSubmeaningHierarchyUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSubmeaningsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateCollectionNodesUsingBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

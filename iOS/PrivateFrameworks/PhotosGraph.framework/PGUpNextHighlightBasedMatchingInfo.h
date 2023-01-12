//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGUpNextMatchingTarget-Protocol.h>

@class CLLocation, NSDate, NSString, PGGraphFeatureNodeCollection, PGGraphHighlightNodeCollection, PGGraphMeaningNodeCollection, PGGraphMomentNodeCollection, PGGraphPersonNodeCollection, PGGraphSceneNodeCollection;

@interface PGUpNextHighlightBasedMatchingInfo <PGUpNextMatchingTarget>
{
    PGGraphHighlightNodeCollection *_highlightNodeAsCollection;
}

+ (id)matchingInfosWithHighlightNodes:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) PGGraphHighlightNodeCollection *highlightNodeAsCollection; // @synthesize highlightNodeAsCollection=_highlightNodeAsCollection;
@property(readonly, nonatomic) NSString *debugInfo;
@property(readonly, nonatomic) unsigned long long nodeIdentifier;
- (id)initWithHighlightNodeAsCollection:(id)arg1 momentNodes:(id)arg2;
- (id)initWithHighlightNodeAsCollection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isTripMemory;
@property(readonly, nonatomic) PGGraphMeaningNodeCollection *meaningNodes;
@property(readonly, nonatomic) PGGraphFeatureNodeCollection *memoryFeatureNodes;
@property(readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *personNodes;
@property(readonly, nonatomic) NSDate *representativeDate;
@property(readonly, nonatomic) CLLocation *representativeLocation;
@property(readonly, nonatomic) PGGraphSceneNodeCollection *sceneNodes;
@property(readonly) Class superclass;

@end

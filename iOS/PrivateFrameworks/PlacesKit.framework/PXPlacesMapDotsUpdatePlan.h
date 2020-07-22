//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PlacesKit/PXPlacesMapUpdatePlan-Protocol.h>

@class NSArray, NSString;
@protocol PXPlacesMapPipelineComponentProvider;

@interface PXPlacesMapDotsUpdatePlan : NSObject <PXPlacesMapUpdatePlan>
{
    id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
    NSArray *_previouslyAddedOverlays;
}

@property(retain) NSArray *previouslyAddedOverlays; // @synthesize previouslyAddedOverlays=_previouslyAddedOverlays;
@property(nonatomic) __weak id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; // @synthesize pipelineComponentProvider;
- (void).cxx_destruct;
- (void)reset;
- (id)annotationForLayoutItem:(id)arg1;
- (id)removalPlanResult;
- (id)resultForNewLayoutResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

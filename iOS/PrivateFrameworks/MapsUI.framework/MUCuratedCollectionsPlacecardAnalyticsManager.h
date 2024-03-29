//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MUCuratedCollectionsPlacecardAnalyticsManager : NSObject
{
    struct CollectionsPlacecardEvent _event;
}

- (void).cxx_destruct;
- (void)cleanUp;
- (void)logEvent;
- (void)placecardExploreGuidesButtonTapped;
- (void)placecardCollectionsSeeAllTapped;
- (void)placecardCollectionTapped:(id)arg1 atIndex:(unsigned long long)arg2 isCurrentlySaved:(_Bool)arg3;
- (void)placecardCollectionsScrollForward;
- (void)placecardCollectionsScrollBackward;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/MNCommuteSessionObserver-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MNNavigationStateCommute <MNCommuteSessionObserver>
{
    unsigned long long _desiredCommuteSessionState;
}

+ (id)noDestinationStateFromStateManager:(id)arg1;
@property(nonatomic) unsigned long long desiredCommuteSessionState; // @synthesize desiredCommuteSessionState=_desiredCommuteSessionState;
- (void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2;
- (void)startNavigationForRouteDetails:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)prepareNavigationWithRouteDetails:(id)arg1;
- (void)updateWithLocation:(id)arg1;
- (void)addCommuteDestinationSuggestion:(id)arg1;
- (void)leaveState;
- (void)enterState;
- (id)traceManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/SBSStatusBarStyleOverridesCoordinatorDelegate-Protocol.h>

@class MPMediaControls, NSString, SBSStatusBarStyleOverridesAssertion, SBSStatusBarStyleOverridesCoordinator;

@interface MPMediaControlsStatusBarStyleOverridesCoordinator : NSObject <SBSStatusBarStyleOverridesCoordinatorDelegate>
{
    SBSStatusBarStyleOverridesAssertion *_statusBarStyleOverride;
    SBSStatusBarStyleOverridesCoordinator *_coordinator;
    MPMediaControls *_mediaControls;
}

- (void).cxx_destruct;
- (void)statusBarCoordinator:(id)arg1 invalidatedRegistrationWithError:(id)arg2;
- (_Bool)statusBarCoordinator:(id)arg1 receivedTapWithContext:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)presentMediaControls;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

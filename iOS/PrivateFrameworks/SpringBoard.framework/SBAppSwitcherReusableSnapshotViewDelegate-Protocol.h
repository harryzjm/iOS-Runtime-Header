//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class FBSDisplayIdentity, SBAppLayout, SBAppSwitcherReusableSnapshotView;
@protocol SBApplicationSceneHandleProviding;

@protocol SBAppSwitcherReusableSnapshotViewDelegate <NSObject>
- (FBSDisplayIdentity *)displayIdentityForSnapshotView:(SBAppSwitcherReusableSnapshotView *)arg1;
- (id <SBApplicationSceneHandleProviding>)sceneHandleProviderForSnapshotView:(SBAppSwitcherReusableSnapshotView *)arg1;
- (_Bool)snapshotView:(SBAppSwitcherReusableSnapshotView *)arg1 isInsetForHomeAffordanceForAppLayout:(SBAppLayout *)arg2;
- (_Bool)snapshotView:(SBAppSwitcherReusableSnapshotView *)arg1 shouldShowAppClipOverlayForLayout:(SBAppLayout *)arg2;
- (struct CGRect)layoutFrameForItemWithRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2 interfaceOrientation:(long long)arg3 forSnapshotView:(SBAppSwitcherReusableSnapshotView *)arg4;
@end


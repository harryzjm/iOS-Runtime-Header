//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UITextEffectsWindowHosted
{
}

- (struct UIEdgeInsets)safeAreaInsets;
- (_Bool)_isTextEffectsWindowNotificationOwner;
- (_Bool)_isTextEffectsWindowHosting;
- (void)_sceneBoundsDidChange;
- (_Bool)_isFullscreen;
- (struct CGRect)actualSceneBounds;
- (struct CGRect)actualSceneBoundsForLandscape:(_Bool)arg1;
- (long long)_orientationForRootTransform;
- (long long)_orientationForViewTransform;
- (_Bool)_isConstrainedByScreenJail;
- (_Bool)_usesWindowServerHitTesting;
- (_Bool)_isWindowServerHostingManaged;

@end


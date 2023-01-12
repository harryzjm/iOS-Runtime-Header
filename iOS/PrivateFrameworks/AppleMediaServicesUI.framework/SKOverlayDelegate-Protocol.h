//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServicesUI/NSObject-Protocol.h>

@class NSError, SKOverlay, SKOverlayTransitionContext;

@protocol SKOverlayDelegate <NSObject>

@optional
- (void)storeOverlay:(SKOverlay *)arg1 didFinishDismissal:(SKOverlayTransitionContext *)arg2;
- (void)storeOverlay:(SKOverlay *)arg1 willStartDismissal:(SKOverlayTransitionContext *)arg2;
- (void)storeOverlay:(SKOverlay *)arg1 didFinishPresentation:(SKOverlayTransitionContext *)arg2;
- (void)storeOverlay:(SKOverlay *)arg1 willStartPresentation:(SKOverlayTransitionContext *)arg2;
- (void)storeOverlay:(SKOverlay *)arg1 didFailToLoadWithError:(NSError *)arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Pegasus/NSObject-Protocol.h>

@class BKSAnimationFenceHandle;

@protocol PGPictureInPictureExportedInterface <NSObject>
- (oneway void)actionButtonTapped;
- (oneway void)hostedWindowSizeChangeEnded;
- (oneway void)hostedWindowSizeChangeBegan;
- (oneway void)updateHostedWindowSize:(struct CGSize)arg1 animationType:(long long)arg2 initialSpringVelocity:(double)arg3 synchronizationFence:(BKSAnimationFenceHandle *)arg4;
- (oneway void)pictureInPictureCancelled;
- (oneway void)pictureInPictureResumed;
- (oneway void)pictureInPictureSuspended;
- (oneway void)pictureInPictureInterruptionEnded;
- (oneway void)pictureInPictureInterruptionBegan;
- (oneway void)updatePictureInPicturePossible:(_Bool)arg1;
- (oneway void)pictureInPictureCancelRequestedAnimated:(_Bool)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
- (oneway void)pictureInPictureStopRequestedAnimated:(_Bool)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
- (oneway void)pictureInPictureStartRequestedAnimated:(_Bool)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PGPictureInPictureProxy;

__attribute__((visibility("hidden")))
@interface _PGPictureInPictureConnectionExportedObject : NSObject
{
    PGPictureInPictureProxy *_pictureInPictureProxy;
}

- (void).cxx_destruct;
- (oneway void)handleCommand:(id)arg1;
- (oneway void)setResourcesUsageReductionReasons:(unsigned long long)arg1;
- (oneway void)setStashedOrUnderLock:(_Bool)arg1;
- (oneway void)actionButtonTapped;
- (oneway void)hostedWindowSizeChangeEnded;
- (oneway void)hostedWindowSizeChangeBegan;
- (oneway void)updateHostedWindowSize:(struct CGSize)arg1 animationType:(long long)arg2 initialSpringVelocity:(double)arg3 synchronizationFence:(id)arg4;
- (oneway void)pictureInPictureInvalidated;
- (oneway void)updatePictureInPicturePossible:(_Bool)arg1;
- (oneway void)pictureInPictureCancelRequestedAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (oneway void)endTwoStagePictureInPictureStopWithCompletionBlock:(CDUnknownBlockType)arg1;
- (oneway void)beginTwoStagePictureInPictureStopByRestoringUserInterfaceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (oneway void)pictureInPictureStopRequestedAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (oneway void)pictureInPictureStartRequestedAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithPictureInPictureProxy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


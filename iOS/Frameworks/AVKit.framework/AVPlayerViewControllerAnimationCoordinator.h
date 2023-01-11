//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVKit/AVPlayerViewControllerAnimationCoordinator-Protocol.h>

@class NSMutableArray, NSString;

@interface AVPlayerViewControllerAnimationCoordinator : NSObject <AVPlayerViewControllerAnimationCoordinator>
{
    NSMutableArray *_animations;
    NSMutableArray *_completions;
}

@property(readonly, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(readonly, nonatomic) NSMutableArray *animations; // @synthesize animations=_animations;
- (void).cxx_destruct;
- (void)didFinishAnimations:(_Bool)arg1;
- (void)performCoordinatedAnimations;
- (void)addCoordinatedAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


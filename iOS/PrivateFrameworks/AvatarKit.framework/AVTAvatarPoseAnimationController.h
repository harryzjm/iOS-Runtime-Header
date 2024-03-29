//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTAvatar, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVTAvatarPoseAnimationController : NSObject
{
    AVTAvatar *_avatar;
    NSArray *_animationKeys;
}

- (void).cxx_destruct;
- (void)removeAnimationWithBlendOutDuration:(double)arg1;
- (id)initWithAvatar:(id)arg1 animationKeys:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


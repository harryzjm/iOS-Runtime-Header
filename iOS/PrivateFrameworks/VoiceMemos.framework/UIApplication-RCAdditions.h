//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIApplication.h>

@interface UIApplication (RCAdditions)
+ (void)rc_endTemporaryInteractionEventIgnoringForToken:(id)arg1;
+ (id)rc_beginTemporaryInteractionEventIgnoringWithTimeout:(double)arg1 sessionWillEndHandler:(CDUnknownBlockType)arg2;
+ (double)rc_animationDragCoefficient;
+ (_Bool)rc_isRunningInStoreDemoMode;
+ (_Bool)rc_shouldMakeUIForDefaultPNG;
- (void)rc_createDefaultPNG;
- (id)rc_rootViewController;
@end


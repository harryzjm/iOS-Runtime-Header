//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSString, UIFocusAnimationCoordinator, UIFocusUpdateContext, UIView;

@protocol UIFocusEnvironment <NSObject>
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
- (void)didUpdateFocusInContext:(UIFocusUpdateContext *)arg1 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg2;
- (_Bool)shouldUpdateFocusInContext:(UIFocusUpdateContext *)arg1;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;

@optional
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
- (NSString *)soundIdentifierForFocusUpdateInContext:(UIFocusUpdateContext *)arg1;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIInputViewSetPlacementOwner-Protocol.h>
#import <UIKitCore/_UIRemoteKeyboardViewSource-Protocol.h>

@class UIInputViewSetNotificationInfo, UIInputViewSetPlacement, UIView, UIViewController;
@protocol UIInputViewSetPlacementApplicator;

@protocol UISplitKeyboardSource <_UIRemoteKeyboardViewSource, UIInputViewSetPlacementOwner>
@property(readonly, nonatomic) id <UIInputViewSetPlacementApplicator> applicator;
@property(readonly, nonatomic) UIInputViewSetPlacement *placement;
@property(readonly, nonatomic) UIViewController *_inputViewController;
@property(readonly, nonatomic) struct CGPoint positionConstraintConstant;
@property(readonly, nonatomic) _Bool isChangingPlacement;
@property(readonly, nonatomic) UIView *view;
- (void)finishSplitTransition;
- (void)prepareForSplitTransition;
- (UIInputViewSetNotificationInfo *)constructNotificationInfoForScrollWithMode:(unsigned long long)arg1;
- (void)setInterfaceAutorotationDisabled:(_Bool)arg1;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIButton.h"

#import <UIKitCore/NSCopying-Protocol.h>

@class NSLayoutConstraint, NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface UIStatusBarCarPlayDockAppItemButton : UIButton <NSCopying>
{
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_widthConstraint;
    _Bool _active;
    _Bool _hasBadge;
    NSString *_bundleIdentifier;
    UIImageView *_iconImageView;
    UIImageView *_iconHighlightImageView;
    UIImageView *_badgeView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasBadge; // @synthesize hasBadge=_hasBadge;
@property(retain, nonatomic) UIImageView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIImageView *iconHighlightImageView; // @synthesize iconHighlightImageView=_iconHighlightImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)_buttonPressed:(id)arg1;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setBadgeHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)shouldShowBadge;
@property(readonly, nonatomic) _Bool itemHasBundleIdentifier;
- (void)setCharge:(float)arg1;
- (float)charge;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


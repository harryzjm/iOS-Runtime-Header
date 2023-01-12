//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIButton.h"

@class NSString, UIVisualEffectView, _UIContextMenuSeparatorView;

__attribute__((visibility("hidden")))
@interface _UIEditMenuPageButton : UIButton
{
    _UIContextMenuSeparatorView *_separatorView;
    UIVisualEffectView *_backgroundView;
    UIVisualEffectView *_selectedBackgroundView;
    struct NSDirectionalEdgeInsets _defaultInsets;
    long long _direction;
    struct UIEdgeInsets _arrowEdgeInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets arrowEdgeInsets; // @synthesize arrowEdgeInsets=_arrowEdgeInsets;
@property(readonly, nonatomic) long long direction; // @synthesize direction=_direction;
- (void)layoutSubviews;
- (id)selectedBackgroundView;
- (id)backgroundView;
- (void)_configureButton;
- (id)_imageNameForCurrentDirection;
@property(retain, nonatomic) NSString *backgroundGroupName;
- (id)initWithDirection:(long long)arg1;

@end


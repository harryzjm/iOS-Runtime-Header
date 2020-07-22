//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface CKPhotoTileBadgeView : UIView
{
    _Bool _enabled;
    _Bool _selected;
    UIButton *_actionButton;
    UIView *__backgroundView;
    UIImageView *__badgeImageView;
    UILabel *__textLabel;
}

+ (double)verticalBadgeInset;
+ (double)horizontalBadgeInset;
@property(readonly, nonatomic) UILabel *_textLabel; // @synthesize _textLabel=__textLabel;
@property(readonly, nonatomic) UIImageView *_badgeImageView; // @synthesize _badgeImageView=__badgeImageView;
@property(readonly, nonatomic) UIView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (struct CGSize)maximumSize;
- (void)_updateBadgeImage;
- (void)_updateBadgeText;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


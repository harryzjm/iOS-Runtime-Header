//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PKContinuousButton, PKDiscoveryCallToAction, PKDiscoveryMedia, UIImageView, UILabel;
@protocol PKDiscoveryCardViewDelegate;

@interface PKDiscoveryCallToActionFooterView : UIView
{
    PKDiscoveryCallToAction *_callToAction;
    PKDiscoveryMedia *_media;
    UIImageView *_iconImageView;
    PKContinuousButton *_button;
    UILabel *_titleLabel;
    UILabel *_editorialDescriptionLabel;
    UILabel *_expandedTitleLabel;
    UILabel *_expandedEditorialDescriptionLabel;
    long long _displayType;
    _Bool _hasIcon;
    _Bool _hasButton;
    _Bool _useAccessibilityLayout;
    CDUnknownBlockType _callToActionTappedOverride;
    _Bool _showActivityIndicator;
    id <PKDiscoveryCardViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property(nonatomic) __weak id <PKDiscoveryCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
- (void)_loadImageData;
- (struct CGSize)_iconSize;
- (double)_buttonWidthForLabelWidth:(double)arg1;
- (struct CGSize)_buttonSizeForBounds:(struct CGRect)arg1;
- (id)_editorialDescriptionLabelFont;
- (id)_titleLabelFont;
- (id)_descriptionLabelWithLocalizedDescription:(id)arg1;
- (id)_titleLabelWithLocalizedTitle:(id)arg1;
- (void)_buttonPressed:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_descriptionLabelColor;
- (id)_titleLabelColor;
- (void)setCallToActionTappedOverride:(CDUnknownBlockType)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithCallToAction:(id)arg1 displayType:(long long)arg2;

@end

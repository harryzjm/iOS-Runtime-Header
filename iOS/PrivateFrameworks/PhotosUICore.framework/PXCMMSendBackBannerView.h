//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, PXCMMImageView, PXCapsuleButton, PXUpdater, UILabel;

@interface PXCMMSendBackBannerView : UIView
{
    PXCapsuleButton *_actionButton;
    NSString *_actionButtonTitle;
    CDUnknownBlockType _actionButtonAction;
    PXCMMImageView *_imageView;
    UILabel *_captionLabel;
    UILabel *_headlineLabel;
    PXUpdater *_updater;
}

+ (id)_headlineLabelFont;
+ (id)captionLabelFont;
+ (double)captionLabelTopInset;
- (void).cxx_destruct;
- (id)_attributedStringWithString:(id)arg1;
- (id)_headlineStringAttributes;
- (id)_actionButtonWithTitle:(id)arg1 action:(SEL)arg2 enabled:(_Bool)arg3;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_actionButtonTapped:(id)arg1;
- (void)_updateActionButton;
- (void)_updateLabels;
- (struct CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(_Bool)arg2;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setAsset:(id)arg1 mediaProvider:(id)arg2;
- (void)setActionButtonWithTitle:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (id)initWithMessage:(id)arg1;
- (id)new;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end


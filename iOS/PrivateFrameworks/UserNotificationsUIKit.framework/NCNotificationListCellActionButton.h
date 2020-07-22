//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <UserNotificationsUIKit/MTContentSizeCategoryAdjusting-Protocol.h>

@class MTFontProvider, MTMaterialView, NCNotificationAction, NSString, UILabel, UIView;

@interface NCNotificationListCellActionButton : UIControl <MTContentSizeCategoryAdjusting>
{
    _Bool _adjustsFontForContentSizeCategory;
    NSString *_preferredContentSizeCategory;
    NCNotificationAction *_notificationAction;
    NSString *_title;
    NSString *_backgroundGroupName;
    MTFontProvider *_fontProvider;
    UILabel *_titleLabel;
    MTMaterialView *_backgroundView;
    MTMaterialView *_backgroundOverlayView;
    UIView *_backgroundHighlightView;
}

@property(retain, nonatomic) UIView *backgroundHighlightView; // @synthesize backgroundHighlightView=_backgroundHighlightView;
@property(retain, nonatomic) MTMaterialView *backgroundOverlayView; // @synthesize backgroundOverlayView=_backgroundOverlayView;
@property(retain, nonatomic) MTMaterialView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic, getter=_fontProvider, setter=_setFontProvider:) MTFontProvider *fontProvider; // @synthesize fontProvider=_fontProvider;
@property(copy, nonatomic) NSString *backgroundGroupName; // @synthesize backgroundGroupName=_backgroundGroupName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NCNotificationAction *notificationAction; // @synthesize notificationAction=_notificationAction;
@property(copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)adjustForContentSizeCategoryChange;
- (void)_unHighlightButton:(id)arg1;
- (void)_highlightButton:(id)arg1;
- (long long)_wordCountForText:(id)arg1;
- (void)_layoutTitleLabel;
- (void)_layoutBackgroundHighlightView;
- (void)_layoutBackgroundOverlayView;
- (void)_layoutBackgroundView;
- (void)_configureBackgroundHighlightViewIfNecessary;
- (void)_configureBackgroundOverlayViewIfNecessary;
- (void)_configureBackgroundViewIfNecessary;
- (void)_configureTitleLabelIfNecessary;
- (void)_updateTitleLabelFont;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


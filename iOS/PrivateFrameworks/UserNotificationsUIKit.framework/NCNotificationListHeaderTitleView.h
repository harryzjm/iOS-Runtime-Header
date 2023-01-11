//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/NCLegibilitySettingsAdjusting-Protocol.h>
#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class BSUIFontProvider, NSString, SBUILegibilityLabel, _UILegibilitySettings;

@interface NCNotificationListHeaderTitleView : UIView <NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting>
{
    _Bool _adjustsFontForContentSizeCategory;
    _Bool _primary;
    NSString *_preferredContentSizeCategory;
    NSString *_title;
    SBUILegibilityLabel *_titleLabel;
    _UILegibilitySettings *_legibilitySettings;
    BSUIFontProvider *_fontProvider;
}

@property(retain, nonatomic, getter=_fontProvider, setter=_setFontProvider:) BSUIFontProvider *fontProvider; // @synthesize fontProvider=_fontProvider;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) SBUILegibilityLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic, getter=isPrimary) _Bool primary; // @synthesize primary=_primary;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (void).cxx_destruct;
- (void)_layoutTitleLabel;
- (void)_configureTitleLabelIfNecessary;
- (void)_invalidateTitleLabel;
- (id)_labelFont;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)adjustForContentSizeCategoryChange;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

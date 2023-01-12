//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/MTMaterialGrouping-Protocol.h>
#import <UserNotificationsUIKit/MTVisualStylingRequiring-Protocol.h>
#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class MTVisualStylingProvider, NSArray, NSMutableArray, NSString;

@interface NCDigestFeaturedNotificationsContainerView : UIView <MTVisualStylingRequiring, PLContentSizeCategoryAdjusting, MTMaterialGrouping>
{
    NSArray *_featuredNotificationContentProviders;
    NSMutableArray *_notificationViews;
    NSMutableArray *_notificationViewTapButtons;
    UIView *_dividerView;
    _Bool _isDisplayingFeaturedNotificationViewsWithAttachments;
    MTVisualStylingProvider *_strokeVisualStylingProvider;
    _Bool _adjustsFontForContentSizeCategory;
    NSString *_preferredContentSizeCategory;
    NSString *_materialGroupNameBase;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *materialGroupNameBase; // @synthesize materialGroupNameBase=_materialGroupNameBase;
@property(copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (void)_updateViewHighlightingForView:(id)arg1 isHighlighted:(_Bool)arg2 animated:(_Bool)arg3;
- (id)_notificationViewForTapButton:(id)arg1;
- (id)_contentProviderForTapButton:(id)arg1;
- (void)_buttonTapped:(id)arg1;
- (void)_unhighlightView:(id)arg1;
- (void)_highlightView:(id)arg1;
- (id)_newTapButton;
- (_Bool)_isLayoutHorizontalForFeaturedNotificationViews;
- (_Bool)_shouldPresentFeaturedNotificationViewsWithAttachmentsForContentProviders:(id)arg1;
- (void)_visualStylingProviderDidChange:(id)arg1 forCategory:(long long)arg2 outgoingProvider:(id)arg3;
- (void)_updateVisualStylingOfView:(id)arg1 style:(long long)arg2 visualStylingProvider:(id)arg3 outgoingProvider:(id)arg4;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
@property(readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
- (id)visualStylingProviderForCategory:(long long)arg1;
- (_Bool)adjustForContentSizeCategoryChange;
- (void)_configureDividerViewIfNecessary;
- (void)_configureNotificationContentView:(id)arg1 withContentProvider:(id)arg2;
- (id)_newNotificationSeamlessContentViewForContentProvider:(id)arg1;
- (id)_newFeaturedNotificationViewForContentProvider:(id)arg1;
- (void)_layoutNotificationContentViewsVertically;
- (void)_layoutNotificationContentViewsHorizontally;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateContent;
@property(retain, nonatomic) NSArray *featuredNotificationContentProviders;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

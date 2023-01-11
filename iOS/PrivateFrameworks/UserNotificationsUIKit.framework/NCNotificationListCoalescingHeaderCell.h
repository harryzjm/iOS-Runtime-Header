//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

#import <UserNotificationsUIKit/NCLegibilitySettingsAdjusting-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationListCoalescingControlsHandler-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationListCoalescingControlsViewDelegate-Protocol.h>
#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class NCNotificationListCoalescingControlsView, NCNotificationListHeaderTitleView, NSString, _UILegibilitySettings;
@protocol NCNotificationListCoalescingControlsHandlerDelegate;

@interface NCNotificationListCoalescingHeaderCell : UICollectionViewCell <NCNotificationListCoalescingControlsViewDelegate, NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting, NCNotificationListCoalescingControlsHandler>
{
    _Bool _adjustsFontForContentSizeCategory;
    NSString *_coalescingIdentifier;
    unsigned long long _groupingSection;
    id <NCNotificationListCoalescingControlsHandlerDelegate> _handlerDelegate;
    NSString *_title;
    NSString *_backgroundGroupName;
    NCNotificationListCoalescingControlsView *_coalescingControlsView;
    NCNotificationListHeaderTitleView *_headerTitleView;
    _UILegibilitySettings *_legibilitySettings;
}

+ (double)coalescingHeaderCellHeightForWidth:(double)arg1 title:(id)arg2;
+ (struct CGSize)_coalescingControlsViewPreferredSize;
+ (void)_contentSizeCategoryDidChange:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) NCNotificationListHeaderTitleView *headerTitleView; // @synthesize headerTitleView=_headerTitleView;
@property(retain, nonatomic) NCNotificationListCoalescingControlsView *coalescingControlsView; // @synthesize coalescingControlsView=_coalescingControlsView;
@property(copy, nonatomic) NSString *backgroundGroupName; // @synthesize backgroundGroupName=_backgroundGroupName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property(nonatomic) __weak id <NCNotificationListCoalescingControlsHandlerDelegate> handlerDelegate; // @synthesize handlerDelegate=_handlerDelegate;
@property(nonatomic) unsigned long long groupingSection; // @synthesize groupingSection=_groupingSection;
@property(copy, nonatomic) NSString *coalescingIdentifier; // @synthesize coalescingIdentifier=_coalescingIdentifier;
- (void).cxx_destruct;
- (void)_layoutHeaderTitleView;
- (void)_layoutCoalescingControlsView;
- (struct CGRect)_coalescingControlsViewFrameForBounds:(struct CGRect)arg1;
- (void)_configureHeaderTitleViewIfNecessary;
- (void)_configureCoalescingControlsViewIfNecessary;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)adjustForContentSizeCategoryChange;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (void)notificationListCoalescingControlsViewDidDismissPreviewInteractionPresentedContent:(id)arg1;
- (void)notificationListCoalescingControlsViewDidPresentPreviewInteractionPresentedContent:(id)arg1;
- (void)notificationListCoalescingControlsViewDidBeginPreviewInteraction:(id)arg1;
- (void)notificationListCoalescingControlsView:(id)arg1 didTransitionToClearState:(_Bool)arg2;
- (void)notificationListCoalescingControlsViewRequestsRestack:(id)arg1;
- (void)notificationListCoalescingControlsViewRequestsClearAll:(id)arg1;
- (id)containerViewForCoalescingControlsPreviewInteractionPresentedContent:(id)arg1;
- (void)notificationListCoalescingControlsViewRequestsClear:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (_Bool)shouldReceiveTouchAtPointInWindowSpace:(struct CGPoint)arg1;
- (_Bool)dismissModalFullScreenIfNeeded;
- (void)resetClearButtonStateAnimated:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PlatterKit/PLPlatterView.h>

#import <UserNotificationsUIKit/NCNotificationListDimmable-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationSummaryContentDisplaying-Protocol.h>

@class NCNotificationSummaryContentView, NSArray, NSDate, NSString, UIView;

@interface NCNotificationSummaryPlatterView : PLPlatterView <NCNotificationSummaryContentDisplaying, NCNotificationListDimmable>
{
    NCNotificationSummaryContentView *_summaryContentView;
    UIView *_stackDimmingView;
}

- (void).cxx_destruct;
- (void)_updateStackDimmingVisualStyling;
- (void)_configureSummaryContentViewIfNecessary;
- (_Bool)adjustForContentSizeCategoryChange;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
@property(readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property(copy, nonatomic) NSString *summaryIconSymbolName;
@property(copy, nonatomic) NSDate *summaryDate;
@property(copy, nonatomic) NSString *summaryTitleFontName;
@property(nonatomic, getter=isIconViewLeading) _Bool iconViewLeading;
@property(retain, nonatomic) NSArray *summaryIconViews;
@property(copy, nonatomic) NSString *summary;
@property(copy, nonatomic) NSString *summaryTitle;
- (void)configureStackDimmingForTransform:(struct CGAffineTransform)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithRecipe:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
@property(readonly) Class superclass;

@end

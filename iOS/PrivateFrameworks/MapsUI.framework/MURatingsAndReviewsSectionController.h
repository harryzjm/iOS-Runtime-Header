//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUPlaceSectionController.h"

@class MUPlaceCallToActionAppearance, MUPlaceRatingReviewTitleBuilder, MUPlaceReviewAvatarGenerator, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, MUPlaceSectionView, MUScrollableStackView, NSArray, NSString, UIView, UIViewController;
@protocol MUInfoCardAnalyticsDelegate, MURatingsAndReviewsSectionControllerDelegate;

__attribute__((visibility("hidden")))
@interface MURatingsAndReviewsSectionController : MUPlaceSectionController
{
    MUScrollableStackView *_contentStackView;
    MUPlaceSectionView *_sectionView;
    MUPlaceReviewAvatarGenerator *_avatarGenerator;
    MUPlaceRatingReviewTitleBuilder *_titleBuilder;
    MUPlaceSectionHeaderViewModel *_sectionHeaderViewModel;
    id <MURatingsAndReviewsSectionControllerDelegate> _actionDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MURatingsAndReviewsSectionControllerDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (_Bool)isImpressionable;
- (int)analyticsModuleType;
- (id)infoCardChildPossibleActions;
- (void)pullQuoteViewDidTapMore:(id)arg1;
- (void)_sectionHeaderAccessoryTapped;
@property(readonly, nonatomic) UIView *sectionView;
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel; // @synthesize sectionHeaderViewModel=_sectionHeaderViewModel;
- (void)_addHorizontalTileToContentStackView:(id)arg1 items:(id)arg2;
- (void)_addPlaceCollectionPullQuotesIfNeeded:(id)arg1;
- (void)_addRatingSnippets:(id)arg1 withCellItems:(id)arg2;
- (void)_addUserReviewCategoryTilesIfNeeded:(id)arg1;
- (void)_addAppleRatingsCategoryTileIfNeeded:(id)arg1;
- (void)_setupRatingRows;
- (id)initWithMapItem:(id)arg1;

// Remaining properties
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) UIViewController *sectionViewController;
@property(readonly, nonatomic) NSArray *sectionViews;
@property(retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus;
@property(readonly) Class superclass;

@end


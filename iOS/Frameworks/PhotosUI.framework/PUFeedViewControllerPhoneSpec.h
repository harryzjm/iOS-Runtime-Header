//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PUFeedViewControllerPhoneSpec
{
}

- (double)collectionViewContentInset;
- (_Bool)shouldUseFullscreenLayout;
- (long long)promptStyle;
- (id)photosPickerSpec;
- (id)gridSpec;
- (_Bool)shouldHideBarsInLandscape;
- (double)spacingBetweenSectionWithInfo:(id)arg1 andHeaderWithGroupID:(id)arg2;
- (void)configureTextCell:(id)arg1 forSectionGroupHeaderWithText:(id)arg2 collectionViewType:(long long)arg3;
- (void)configureSeparatorMetrics:(inout struct PUFeedSeparatorMetrics *)arg1 betweenSectionWithInfo:(id)arg2 andSectionWithInfo:(id)arg3 joined:(_Bool)arg4 collectionViewType:(long long)arg5;
- (void)getReferenceMaximumLength:(double *)arg1 minimumNumberOfTilesToOmit:(long long *)arg2 forSectionType:(long long)arg3 collectionViewType:(long long)arg4;
- (void)configureTextCell:(id)arg1 forSectionFooterWithActionText:(id)arg2 collectionViewType:(long long)arg3;
- (void)configureTextCell:(id)arg1 forSectionHeaderWithDescriptionPhrase:(id)arg2 streamDisclosureLabel:(id)arg3 actionText:(id)arg4 buttonType:(long long)arg5 collectionViewType:(long long)arg6 animated:(_Bool)arg7;
- (long long)configurationForSectionHeaderType:(long long)arg1 collectionViewType:(long long)arg2;
- (struct CGSize)thumbnailSize;
- (void)configureCommentSeparatorMetrics:(inout struct PUFeedSeparatorMetrics *)arg1;
- (void)configureTextCell:(id)arg1 forEventWithDescriptionPhrase:(id)arg2;
- (void)configureTextCell:(id)arg1 forLikesWithDescriptionPhrase:(id)arg2;
- (long long)largeNumberOfSubjectsForLikes;
- (void)configureTextCell:(id)arg1 forCommentWithDescriptionPhrase:(id)arg2;
- (void)configureTextCell:(id)arg1 forCaption:(id)arg2;
- (id)emphasizedTextAttributesForCollectionViewType:(long long)arg1;
- (id)defaultTextAttributesForCollectionViewType:(long long)arg1;
- (struct CGSize)minimumVideoTileSize;
- (struct UIEdgeInsets)contentInsetsForSectionType:(long long)arg1 collectionViewType:(long long)arg2;
- (void)configureFeedCollectionViewLayout:(id)arg1 forCollectionViewType:(long long)arg2 collectionViewSize:(struct CGSize)arg3;
- (_Bool)canUseSimplePreheatManager;

@end


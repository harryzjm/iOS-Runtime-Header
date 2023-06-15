//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/MUInfoCardContentProtocol-Protocol.h>

@class MKLookAroundView, MKPlaceCardActionItem, MUPlaceCallToActionAppearance, MUPresentationOptions, NSArray, NSDictionary, NSString, NSURL, UILayoutGuide;
@protocol MUOfflineMapProvider;

@protocol MUPlaceCardContentProtocol <MUInfoCardContentProtocol>
@property(nonatomic) __weak id <MUOfflineMapProvider> offlineMapProvider;
@property(nonatomic) double verifiedHeaderExpansionProgress;
@property(nonatomic) unsigned long long placeNumberOfReportsInReview;
@property(nonatomic) _Bool placeInBookmarks;
@property(nonatomic) _Bool placeInShortcuts;
@property(nonatomic) _Bool placeInCollections;
@property(readonly, nonatomic) _Bool shouldBlurChromeHeaderButtons;
@property(readonly, nonatomic) UILayoutGuide *headerViewTitleLabelToTopLayoutGuide;
@property(readonly, nonatomic) MKLookAroundView *lookAroundView;
- (NSArray *)createShareSheetFooterActions;
- (void)performShareActionWithPresentationOptions:(MUPresentationOptions *)arg1;
- (NSArray *)createMenuActions;
- (void)performAction:(MKPlaceCardActionItem *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(void))arg3;
- (void)updatePlaceEnrichment;
- (void)updatePlaceInfo;
- (void)updateCuratedCollectionsView;
- (void)updateCollectionViewsAnimated:(_Bool)arg1;
- (void)updateSuggestionView;
- (void)updateActionRowView;
- (void)updateUserSubmissionWithPhotoURL:(NSURL *)arg1 photoID:(NSString *)arg2 numberOfPhotos:(long long)arg3;
- (void)updateViewsWithSubmissionStatus:(MUPlaceCallToActionAppearance *)arg1 animated:(_Bool)arg2;
@end


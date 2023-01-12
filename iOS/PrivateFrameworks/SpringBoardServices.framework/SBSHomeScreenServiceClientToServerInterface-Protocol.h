//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BSMachPortSendRight, NSDate, NSError, NSNumber, NSString, NSURL, SBSDebugActiveWidgetInfo, SBSHomeScreenServiceArrayOfNumbers, SBSHomeScreenServiceArrayOfStrings, SBSHomeScreenSilhouetteLayout;

@protocol SBSHomeScreenServiceClientToServerInterface
@property(readonly, copy, nonatomic) SBSHomeScreenServiceArrayOfNumbers *overflowSlotCounts;
@property(readonly, copy, nonatomic) NSNumber *homeScreenLayoutAvailability;
@property(readonly, nonatomic) SBSDebugActiveWidgetInfo *debuggingActiveWidgetInfo;
@property(readonly, copy, nonatomic) NSString *allIconLists;
@property(readonly, copy, nonatomic) SBSHomeScreenServiceArrayOfStrings *allHomeScreenApplicationPlaceholderBundleIdentifiers;
@property(readonly, copy, nonatomic) SBSHomeScreenServiceArrayOfStrings *allHomeScreenApplicationBundleIdentifiers;
@property(copy, nonatomic) NSNumber *showsHomeScreenSearchAffordanceValue;
@property(copy, nonatomic) NSNumber *showsBadgesInAppLibraryValue;
@property(copy, nonatomic) NSNumber *addsNewIconsToHomeScreenValue;
@property(copy, nonatomic) NSNumber *largeIconLayoutEnabledValue;
- (SBSHomeScreenSilhouetteLayout *)silhouetteLayoutForPageAtIndex:(NSNumber *)arg1;
- (void)runWidgetDiscoverabilityTest;
- (void)setupHomeScreenForWidgetScrollPerformanceTest;
- (void)clearAllOverflowSlotCounts;
- (void)setObservingHomeScreenLayoutAvailability:(NSNumber *)arg1;
- (void)addSuggestedPageWithPageType:(NSString *)arg1 focusModeIdentifier:(NSString *)arg2;
- (void)addEmptyPage;
- (void)insertEmptyPageAtIndex:(NSNumber *)arg1;
- (void)setObservingInstalledWebClips:(NSNumber *)arg1;
- (void)addDebugIconWithSizeClassDescription:(NSString *)arg1 inPage:(NSNumber *)arg2 atPositionDescription:(NSString *)arg3;
- (void)dismissAppLibraryWithCompletion:(void (^)(NSError *))arg1;
- (void)presentAppLibraryAnimated:(NSNumber *)arg1 completion:(void (^)(NSError *))arg2;
- (void)presentAppLibraryCategoryPodForCategoryIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)clearTodayViewLayout;
- (void)resetTodayViewLayout;
- (void)reloadHomeScreenLayout;
- (void)reloadIcons;
- (void)overrideBadgeValue:(NSString *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)changeDisplayedDateOffsetOverride:(NSNumber *)arg1;
- (void)changeDisplayedDateOverride:(NSDate *)arg1;
- (void)removeWidgetsFromHomeScreen;
- (void)removeAllWidgets;
- (void)ignoreAllApps;
- (void)randomizeAllIconsAcrossPagesWithPageCount:(NSNumber *)arg1;
- (void)organizeAllIconsAcrossPagesWithPageCount:(NSNumber *)arg1;
- (void)organizeAllIconsIntoFoldersWithPageCount:(NSNumber *)arg1;
- (void)setIconListsHidden:(SBSHomeScreenServiceArrayOfStrings *)arg1;
- (NSError *)configureCategoryMapProviderToUseCategoryMapAtURL:(NSURL *)arg1;
- (void)configureLibraryWithCategoryLimit:(NSNumber *)arg1;
- (void)configureDeweyOneCategoryWithAllApps;
- (void)configureDeweyEachAppHasItsOwnCategory;
- (void)refreshAppLibrary:(NSNumber *)arg1 reason:(NSString *)arg2;
- (void)requestAppLibraryUpdate:(NSNumber *)arg1 reason:(NSString *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)runRemoveAndRestoreIconTest;
- (void)runDownloadingIconTest;
- (_Bool)debugContinuityWithBadgeType:(NSString *)arg1;
- (_Bool)hasWidgetWithBundleIdentifier:(NSString *)arg1;
- (oneway void)runFloatingDockStressTestWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)requestSuggestedApplicationWithBundleIdentifier:(NSString *)arg1 assertionPort:(BSMachPortSendRight *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)forbidApplicationBundleIdentifierFromLibrary:(NSString *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (oneway void)unforbidApplicationBundleIdentifierFromLibrary:(NSString *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (oneway void)resetCategoriesLayoutWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)resetHomeScreenLayoutWithCompletion:(void (^)(NSError *))arg1;
- (void)addWidgetToTodayViewWithBundleIdentifier:(NSString *)arg1;
- (void)addApplicationIconToHomeScreenWithBundleIdentifier:(NSString *)arg1;
- (SBSHomeScreenServiceArrayOfStrings *)folderPathToIconWithBundleIdentifier:(NSString *)arg1;
@end


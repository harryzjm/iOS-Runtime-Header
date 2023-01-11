//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGadgetNavigating-Protocol.h>
#import <PhotosUICore/PXNavigableForYouViewController-Protocol.h>
#import <PhotosUICore/PXNavigableSharedAlbumActivityFeedHostViewController-Protocol.h>
#import <PhotosUICore/PXNavigationRoot-Protocol.h>
#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>

@class NSString, PXForYouBadgeManager, PXForYouGadgetPriorityManager, PXNavigationListDataSourceManager, UIBarButtonItem, UINavigationController;

@interface PXForYouGadgetViewController <PXGadgetNavigating, PXSettingsKeyObserver, PXNavigationRoot, PXNavigableForYouViewController, PXNavigableSharedAlbumActivityFeedHostViewController>
{
    _Bool _needsRefresh;
    UIBarButtonItem *_navigationDisplayModeButtonItem;
    PXForYouBadgeManager *_badgeManager;
    PXForYouGadgetPriorityManager *_priorityManager;
    long long _anchorPosition;
}

+ (id)lastExitedForYouDate;
+ (void)setLastExitedForYouDate:(id)arg1;
@property(nonatomic) long long anchorPosition; // @synthesize anchorPosition=_anchorPosition;
@property(nonatomic) _Bool needsRefresh; // @synthesize needsRefresh=_needsRefresh;
@property(retain, nonatomic) PXForYouGadgetPriorityManager *priorityManager; // @synthesize priorityManager=_priorityManager;
@property(retain, nonatomic) PXForYouBadgeManager *badgeManager; // @synthesize badgeManager=_badgeManager;
@property(retain, nonatomic) UIBarButtonItem *navigationDisplayModeButtonItem; // @synthesize navigationDisplayModeButtonItem=_navigationDisplayModeButtonItem;
- (void).cxx_destruct;
- (void)ppt_navigateToFirstInvitationCMM:(_Bool)arg1 withCompleteHandler:(CDUnknownBlockType)arg2;
- (void)ppt_navigateToFirstSuggestedCMMComposeRecipientViewAfterOneSecondWithCompleteHandler:(CDUnknownBlockType)arg1;
- (void)ppt_navigateToFirstSuggestedCMMWithCompleteHandler:(CDUnknownBlockType)arg1;
- (void)navigateToSharedAlbumActivityFeedAnimated:(_Bool)arg1 configuration:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentWelcomeCloudPhotosViewController;
- (void)navigateToGadgetForCMMSuggestions;
- (void)navigateToGadgetForCMMInvitationWithIdentifier:(id)arg1;
- (void)navigateToInvitationCMMWithUUID:(id)arg1 animated:(_Bool)arg2;
- (void)navigateToSuggestedCMMWithUUID:(id)arg1 animated:(_Bool)arg2;
- (id)navigateToShowAllMemoriesFeedAnimated:(_Bool)arg1;
- (id)navigateToDetailsForMemoryWithLocalIdentifier:(id)arg1;
- (void)navigateToRevealTheMostRecentMemoryAnimated:(_Bool)arg1;
- (void)navigateToSharedAlbumInviteWithUUID:(id)arg1 animated:(_Bool)arg2;
- (void)navigateToSharedAlbumInvitesAnimated:(_Bool)arg1;
@property(readonly, nonatomic) NSString *navigationIdentifier;
@property(readonly, nonatomic) NSString *navigationTitle;
- (id)_suggestionDumpURL;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (void)rootGadgetControllerDidDisappear;
- (void)rootGadgetControllerWillAppear;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_lastSeenBadgeDateChanged;
- (void)_calendarDayChanged;
@property(readonly, nonatomic) NSString *currentDateText;
- (void)reloadContent;
- (id)initWithBadgeManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UINavigationController *navigationController; // @dynamic navigationController;
@property(readonly, nonatomic) PXNavigationListDataSourceManager *navigationListDataSourceManager;
@property(readonly) Class superclass;

@end


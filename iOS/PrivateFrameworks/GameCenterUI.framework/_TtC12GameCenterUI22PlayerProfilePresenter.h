//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, NSString, _TtC12GameCenterUI17NicknamePresenter;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI22PlayerProfilePresenter
{
    MISSING_TYPE *profileType;
    MISSING_TYPE *pageMericsPresenter;
    MISSING_TYPE *requiredDataPresenter;
    MISSING_TYPE *nicknamePresenter;
    MISSING_TYPE *nicknameUpdatedSubscription;
    MISSING_TYPE *primarySections;
    MISSING_TYPE *secondarySections;
    MISSING_TYPE *sections;
    MISSING_TYPE *requiredData;
    MISSING_TYPE *onNicknameChanged;
    MISSING_TYPE *onShowAvatarEditor;
}

+ (_Bool)isSettings;
- (void).cxx_destruct;
- (id)initWithPlayerId:(id)arg1;
- (void)loadMoreActivityFeedWithContinuationToken:(id)arg1;
- (void)didSignOut;
- (void)showAvatarEditor;
- (void)signIntoGameCenter;
- (void)setAllowsNearByMultiplayerInvites:(_Bool)arg1;
- (void)updateSnapshot;
- (void)profileSettings;
- (void)showRecentlyPlayedWithFriends;
- (void)removeFriend;
- (void)reportPlayer;
- (void)viewFriendRequests;
@property(nonatomic, readonly) NSArray *rightBarButtonItems;
- (id)contextMenuAction;
@property(nonatomic) _Bool displayInSplitView;
@property(nonatomic, retain) _TtC12GameCenterUI17NicknamePresenter *nicknamePresenter; // @synthesize nicknamePresenter;
@property(nonatomic, readonly) _Bool isSignedIn;
@property(nonatomic, readonly) NSString *title;
@property(nonatomic, readonly) _Bool wantsHiddenTitle;
@property(nonatomic, readonly) _Bool wantsHiddenNavigationBar;

@end


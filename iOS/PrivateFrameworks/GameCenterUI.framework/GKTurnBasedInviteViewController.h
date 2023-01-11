//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKTurnBasedMatch, NSMutableDictionary;
@protocol GKTurnBasedInviteViewControllerDelegate;

@interface GKTurnBasedInviteViewController
{
    _Bool _deletePreloadedMatch;
    id <GKTurnBasedInviteViewControllerDelegate> _delegateWeak;
    NSMutableDictionary *_inviteMessageDictionary;
    long long _mode;
    GKTurnBasedMatch *_match;
}

@property(nonatomic) _Bool deletePreloadedMatch; // @synthesize deletePreloadedMatch=_deletePreloadedMatch;
@property(retain, nonatomic) GKTurnBasedMatch *match; // @synthesize match=_match;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSMutableDictionary *inviteMessageDictionary; // @synthesize inviteMessageDictionary=_inviteMessageDictionary;
- (void)willQueryGKIDs;
- (void)invitePlayers:(id)arg1;
- (void)removeCurrentMatchAndSetFlagIfNotLoaded:(_Bool)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)shareFinishedWithContactPlayers:(id)arg1 legacyPlayers:(id)arg2;
- (void)willShare;
- (void)loadShareURLWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isLoadingOrRemovingPreloadedMatch) _Bool loadingOrRemovingPreloadedMatch;
- (void)playNow;
- (_Bool)canStartForcedAutomatch;
- (void)setInvitesFailedWithError:(id)arg1;
- (void)createGameWithPlayersToInvite:(id)arg1 forSharing:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
- (void)finishWithError:(id)arg1;
- (void)finishWithMatchID:(id)arg1;
- (void)cancel;
- (void)cleanupStateForCancelOrErrorWithHandler:(CDUnknownBlockType)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) id <GKTurnBasedInviteViewControllerDelegate> delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;

@end

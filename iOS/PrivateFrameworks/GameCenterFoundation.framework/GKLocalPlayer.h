//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKSavedGameListener-Protocol.h>
#import <GameCenterFoundation/NSCoding-Protocol.h>
#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@class GKEventEmitter, GKInvite, NSInvocation, NSString, UIAlertView;
@protocol GKLocalPlayerListener;

@interface GKLocalPlayer <NSCoding, NSSecureCoding, GKSavedGameListener>
{
    _Bool _authenticated;
    _Bool _didAuthenticate;
    _Bool _validatingAccount;
    _Bool _enteringForeground;
    _Bool _newToGameCenter;
    _Bool _showingInGameUI;
    GKInvite *_acceptedInvite;
    CDUnknownBlockType _validateAccountCompletionHandler;
    UIAlertView *_loginAlertView;
    UIAlertView *_currentAlert;
    NSInvocation *_currentFriendRequestInvocation;
    long long _environment;
    GKEventEmitter<GKLocalPlayerListener> *_eventEmitter;
    double _authStartTimeStamp;
    unsigned long long _authenticationType;
}

+ (void)authenticateWithUsername:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)authenticatedLocalPlayersDidChange:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)_sendPlayerAuthAPINotificationForLoggedInPlayerInternals:(id)arg1 loggedOutPlayerInternals:(id)arg2 oldPrimary:(id)arg3 newPrimary:(id)arg4;
+ (id)_localPlayersFromInternals:(id)arg1 authenticated:(_Bool)arg2;
+ (id)localPlayerForCredential:(id)arg1;
+ (id)authenticatedLocalPlayersWithStatus:(unsigned long long)arg1;
+ (id)authenticatedLocalPlayersFiltered:(long long)arg1;
+ (id)authenticatedLocalPlayers;
+ (id)localPlayers;
+ (id)localPlayer;
+ (void)performAsync:(CDUnknownBlockType)arg1;
+ (void)performSync:(CDUnknownBlockType)arg1;
+ (id)localPlayerAccessQueue;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long authenticationType; // @synthesize authenticationType=_authenticationType;
@property(nonatomic) double authStartTimeStamp; // @synthesize authStartTimeStamp=_authStartTimeStamp;
@property(nonatomic, getter=isShowingInGameUI) _Bool showingInGameUI; // @synthesize showingInGameUI=_showingInGameUI;
@property(retain, nonatomic) GKEventEmitter<GKLocalPlayerListener> *eventEmitter; // @synthesize eventEmitter=_eventEmitter;
@property(nonatomic, getter=isNewToGameCenter) _Bool newToGameCenter; // @synthesize newToGameCenter=_newToGameCenter;
@property(readonly, nonatomic) long long environment; // @synthesize environment=_environment;
@property(nonatomic) _Bool enteringForeground; // @synthesize enteringForeground=_enteringForeground;
@property(nonatomic) _Bool validatingAccount; // @synthesize validatingAccount=_validatingAccount;
@property(nonatomic) _Bool didAuthenticate; // @synthesize didAuthenticate=_didAuthenticate;
@property(retain, nonatomic) NSInvocation *currentFriendRequestInvocation; // @synthesize currentFriendRequestInvocation=_currentFriendRequestInvocation;
@property(nonatomic) UIAlertView *currentAlert; // @synthesize currentAlert=_currentAlert;
@property(retain, nonatomic) UIAlertView *loginAlertView; // @synthesize loginAlertView=_loginAlertView;
@property(copy, nonatomic) CDUnknownBlockType validateAccountCompletionHandler; // @synthesize validateAccountCompletionHandler=_validateAccountCompletionHandler;
@property(retain, nonatomic) GKInvite *acceptedInvite; // @synthesize acceptedInvite=_acceptedInvite;
@property(nonatomic, getter=isAuthenticated) _Bool authenticated; // @synthesize authenticated=_authenticated;
- (void)reportAuthenticationLoginCanceled;
- (void)reportAuthenticatingWithAuthKitInvocation;
- (void)reportAuthenticatingWithGreenBuddyInvocation;
- (void)reportAuthenticationErrorNoInternetConnection;
- (void)reportAuthenticationFailedForPlayer;
- (_Bool)shouldDisplayWelcomeBannerForPlayer:(id)arg1 lastAuthDate:(id)arg2 remoteUI:(_Bool)arg3 timeBetweenBanners:(double)arg4;
- (void)generateIdentityVerificationSignatureWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadDefaultLeaderboardCategoryIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadDefaultLeaderboardIdentifierWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setDefaultLeaderboardCategoryID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setDefaultLeaderboardIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)hasEmailAddress:(id)arg1;
- (void)inviteeDeclinedGameInviteWithNotification:(id)arg1;
- (void)inviteeAcceptedGameInviteWithNotification:(id)arg1;
- (void)cancelGameInvite:(id)arg1;
- (void)fetchTurnBasedEvent;
- (void)fetchMultiplayerGameInvite;
- (void)removeAllFriendsWithBlock:(CDUnknownBlockType)arg1;
- (void)removeFriend:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)authenticateWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType authenticateHandler;
- (void)callAuthHandlerWithError:(id)arg1;
@property(nonatomic) _Bool insideAuthenticatorInvocation;
- (void)setLoginStatus:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)signOutWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showSettings;
@property(readonly, nonatomic) _Bool canChangePhoto; // @dynamic canChangePhoto;
- (void)loadFriendsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadRecentPlayersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadFriendPlayersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_loadFriendPlayersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)friends;
- (void)updateFromLocalPlayer:(id)arg1;
- (id)displayNameWithOptions:(unsigned char)arg1;
- (void)setStatus:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setStatus:(id)arg1;
@property(nonatomic) _Bool appIsInBackground;
- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)unregisterAllListeners;
- (void)unregisterListener:(id)arg1;
- (void)registerListener:(id)arg1;
- (void)setupForCloudSavedGames;
- (void)resolveConflictingSavedGames:(id)arg1 withData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteSavedGamesWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveGameData:(id)arg1 withName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchSavedGamesWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *accountName; // @dynamic accountName;
@property(readonly, nonatomic) _Bool allowNearbyMultiplayer; // @dynamic allowNearbyMultiplayer;
@property(readonly, nonatomic, getter=isAuthenticating) _Bool authenticating; // @dynamic authenticating;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *facebookUserID; // @dynamic facebookUserID;
@property(readonly, nonatomic, getter=isFindable) _Bool findable; // @dynamic findable;
@property(retain, nonatomic) NSString *firstName; // @dynamic firstName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *iCloudUserID; // @dynamic iCloudUserID;
@property(retain, nonatomic) NSString *lastName; // @dynamic lastName;
@property(nonatomic, getter=isPurpleBuddyAccount) _Bool purpleBuddyAccount; // @dynamic purpleBuddyAccount;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isUnderage) _Bool underage; // @dynamic underage;

@end


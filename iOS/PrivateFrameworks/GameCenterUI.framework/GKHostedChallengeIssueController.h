//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <GameCenterUI/GKExtensionParentViewControllerProtocol-Protocol.h>

@class GKChallenge, GKChallengeIssueHostViewController, NSArray, NSString;

@interface GKHostedChallengeIssueController : UIViewController <GKExtensionParentViewControllerProtocol>
{
    _Bool _forcePicker;
    GKChallengeIssueHostViewController *_remoteViewController;
    NSArray *_players;
    NSString *_defaultMessage;
    GKChallenge *_challenge;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _receivedRemoteHandler;
    CDUnknownBlockType _dismissCompletionHandler;
}

+ (_Bool)_preventsAppearanceProxyCustomization;
+ (void)presentHostedIssueControllerWithChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3;
+ (id)presentationQueue;
+ (id)hostedIssueControllerWithChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType dismissCompletionHandler; // @synthesize dismissCompletionHandler=_dismissCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType receivedRemoteHandler; // @synthesize receivedRemoteHandler=_receivedRemoteHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) _Bool forcePicker; // @synthesize forcePicker=_forcePicker;
@property(retain, nonatomic) GKChallenge *challenge; // @synthesize challenge=_challenge;
@property(copy, nonatomic) NSString *defaultMessage; // @synthesize defaultMessage=_defaultMessage;
@property(retain, nonatomic) NSArray *players; // @synthesize players=_players;
@property(retain, nonatomic) GKChallengeIssueHostViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (void)doneWithPlayers:(id)arg1 message:(id)arg2;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)extensionDidFinishWithError:(id)arg1;
- (void)_setupRemoteViewController;
- (void)_setupChildViewController;
- (void)dealloc;
- (id)initWithChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


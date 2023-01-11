//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantUI/AFUISiriSessionDelegate-Protocol.h>
#import <AssistantUI/AFUISpeechSynthesisDelegate-Protocol.h>
#import <AssistantUI/NSObject-Protocol.h>
#import <AssistantUI/SiriUIPresentationRemoteControlling-Protocol.h>

@class NSDictionary, NSNumber, NSString, NSValue, SASRequestOptions;
@protocol AFUISiriSession, AFUISpeechSynthesis;

@protocol SRSiriViewControllerServing <NSObject, AFUISiriSessionDelegate, AFUISpeechSynthesisDelegate, SiriUIPresentationRemoteControlling>
- (void)setWaitingForTelephonyToStart:(_Bool)arg1;
- (void)setRunningPPT:(_Bool)arg1 withTestName:(NSString *)arg2 testOptions:(NSDictionary *)arg3;
- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationWillEnterForeground;
- (void)hostApplicationWillResignActive;
- (void)didReceiveDismissalAction:(_Bool)arg1 delayForTTS:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)didReceiveShortTapAction;
- (void)didReceiveBugButtonLongPress;
- (void)didReceiveReportBugAction;
- (void)didReceiveHelpAction;
- (void)setSpeechSynthesis:(id <AFUISpeechSynthesis>)arg1;
- (void)setSession:(id <AFUISiriSession>)arg1;
- (void)siriKeyboardViewDidChange:(CDStruct_a82615c4 *)arg1;
- (void)startRequestForText:(NSString *)arg1;
- (void)siriDidHidePasscodeUnlock;
- (void)siriWillHidePasscodeUnlockForResult:(long long)arg1;
- (void)siriWillShowPasscodeUnlockAndCancelRequest:(_Bool)arg1;
- (void)siriWillShowPasscodeUnlock;
- (void)siriDidDeactivateWithCompletion:(void (^)(void))arg1;
- (void)showPresentationWithIdentifier:(NSString *)arg1 properties:(NSDictionary *)arg2 lockState:(unsigned long long)arg3;
- (void)preloadPluginBundles;
- (void)preloadPresentationBundleWithIdentifier:(NSString *)arg1;
- (void)setRequestOptions:(SASRequestOptions *)arg1;
- (void)siriDidActivateFromSource:(long long)arg1;
- (void)siriWillActivateFromSource:(long long)arg1;
- (void)setStatusViewHeightNumber:(NSNumber *)arg1;
- (void)setStatusBarFrameValue:(NSValue *)arg1;
- (void)setHostFrontMostAppOrientation:(long long)arg1;
@end

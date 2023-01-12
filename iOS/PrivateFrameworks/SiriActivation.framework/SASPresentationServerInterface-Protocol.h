//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, SASActivationRequest, SASButtonIdentifierTransport, SASLockStateTransport, SASPresentationState, SASRequestOptions, SASTimeIntervalTransport, SiriDismissalOptions, SiriLongPressButtonContext, SiriPresentationActivationCancelReasonTransport, SiriPresentationIdentifierTransport, SiriPresentationOptions;

@protocol SASPresentationServerInterface
- (oneway void)ping;
- (oneway void)activationDeterminedShouldDeferWake:(NSNumber *)arg1;
- (oneway void)deviceWonMyriadElection;
- (oneway void)bulletinManagerDidChangeBulletins;
- (oneway void)updateCurrentLockState:(SASLockStateTransport *)arg1;
- (oneway void)handleButtonLongPressFromButtonIdentifier:(SASButtonIdentifierTransport *)arg1 deviceIdentifier:(NSString *)arg2 timestamp:(SASTimeIntervalTransport *)arg3 context:(SiriLongPressButtonContext *)arg4;
- (oneway void)handleButtonTapFromButtonIdentifier:(SASButtonIdentifierTransport *)arg1;
- (oneway void)handleButtonUpFromButtonIdentifier:(SASButtonIdentifierTransport *)arg1 deviceIdentifier:(NSString *)arg2 timestamp:(SASTimeIntervalTransport *)arg3 context:(SiriLongPressButtonContext *)arg4;
- (oneway void)handleButtonDownFromButtonIdentifier:(SASButtonIdentifierTransport *)arg1 timestamp:(SASTimeIntervalTransport *)arg2 context:(SiriLongPressButtonContext *)arg3;
- (_Bool)handleTestingActivation:(SASActivationRequest *)arg1;
- (oneway void)presentationWithIdentifier:(SiriPresentationIdentifierTransport *)arg1 didUpdatePresentationState:(SASPresentationState *)arg2;
- (oneway void)wakeScreenAfterActivationWithReason:(NSString *)arg1;
- (oneway void)cancelPendingActivationEventWithReason:(SiriPresentationActivationCancelReasonTransport *)arg1;
- (oneway void)cancelPreheat;
- (oneway void)preheat;
- (_Bool)presentationisIdleAndQuiet;
- (oneway void)handleRequestWithOptions:(SASRequestOptions *)arg1;
- (oneway void)presentationDismissalRequestedWithOptions:(SiriDismissalOptions *)arg1;
- (oneway void)presentationRequestedWithPresentationOptions:(SiriPresentationOptions *)arg1 requestOptions:(SASRequestOptions *)arg2;
@end


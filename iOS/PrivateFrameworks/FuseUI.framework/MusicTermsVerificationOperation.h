//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

#import <FuseUI/MusicTermsAgreementViewControllerDelegate-Protocol.h>

@class MusicTermsAgreementViewController, NSError, NSObject, NSString, SSVFairPlaySAPSession;
@protocol OS_dispatch_queue;

@interface MusicTermsVerificationOperation : NSOperation <MusicTermsAgreementViewControllerDelegate>
{
    unsigned long long _acceptingTermsVersion;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSError *_error;
    _Bool _executing;
    _Bool _finished;
    SSVFairPlaySAPSession *_SAPSession;
    MusicTermsAgreementViewController *_termsAgreementViewController;
    CDUnknownBlockType _additionalPresentationHandler;
}

+ (_Bool)requiresTermsVerification;
@property(readonly, copy) CDUnknownBlockType additionalPresentationHandler; // @synthesize additionalPresentationHandler=_additionalPresentationHandler;
- (void).cxx_destruct;
- (void)_updateSubscriptionStatus;
- (id)_newTermsUpdateOperationWithAcceptedStoreTermsVersion:(unsigned long long)arg1;
- (void)_finishWithError:(id)arg1;
- (void)_dismissTermsAgreementViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_cleanUpTermsAgreementViewController:(id)arg1;
@property(retain) SSVFairPlaySAPSession *SAPSession;
@property(readonly, copy, nonatomic) NSError *error;
- (void)termsAgreementViewController:(id)arg1 didRequestSendByEmailToEmailAddress:(id)arg2;
- (void)termsAgreementViewControllerDidCancel:(id)arg1;
- (void)termsAgreementViewControllerDidAcceptTerms:(id)arg1;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (id)initWithAdditionalPresentationHandler:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


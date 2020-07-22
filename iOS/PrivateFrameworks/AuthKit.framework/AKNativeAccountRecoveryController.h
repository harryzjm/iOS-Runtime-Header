//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKit/CDPAuthProvider-Protocol.h>

@class AKAccountRecoveryContext, CDPRecoveryController, NSString;
@protocol CDPStateUIProvider;

@interface AKNativeAccountRecoveryController : NSObject <CDPAuthProvider>
{
    CDPRecoveryController *_recoveryController;
    AKAccountRecoveryContext *_recoveryContext;
    id <CDPStateUIProvider> _cdpUiProvider;
}

+ (_Bool)shouldSendServerResponseForRecoveredInfo:(id)arg1 withRecoveryError:(id)arg2;
+ (id)postBodyForiCSCServerUIResponseWithContext:(id)arg1 recoveryError:(id)arg2;
+ (id)requestForRecoveryCompletionWithContext:(id)arg1 recoveredInfo:(id)arg2 recoveryError:(id)arg3;
- (void).cxx_destruct;
- (id)_mapICSCRecoveryResultsToAuthKit:(id)arg1;
- (void)cdpContext:(id)arg1 verifyMasterKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cdpContext:(id)arg1 performSilentRecoveryTokenRenewal:(CDUnknownBlockType)arg2;
- (void)dismissNativeRecoveryUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentNativeRecoveryUIWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


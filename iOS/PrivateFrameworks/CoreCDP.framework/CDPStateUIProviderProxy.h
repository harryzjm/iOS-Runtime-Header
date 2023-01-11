//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDP/CDPStateUIProviderInternal-Protocol.h>

@protocol CDPStateUIProvider;

@interface CDPStateUIProviderProxy : NSObject <CDPStateUIProviderInternal>
{
    id <CDPStateUIProvider> _uiProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <CDPStateUIProvider> uiProvider; // @synthesize uiProvider=_uiProvider;
- (void)cdpContext:(id)arg1 promptForRecoveryKeyWithValidator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cdpContext:(id)arg1 presentRecoveryKeyWithValidator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cdpContext:(id)arg1 showError:(id)arg2 withDefaultIndex:(long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)cdpContext:(id)arg1 showError:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(CDUnknownBlockType)arg2;
- (void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(_Bool)arg3 validator:(id)arg4;
- (void)cdpContext:(id)arg1 beginRemoteApprovalWithValidator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cdpContext:(id)arg1 promptForLocalSecretWithHandler:(id)arg2;
- (void)cdpContext:(id)arg1 promptForLocalSecretWithCompletion:(CDUnknownBlockType)arg2;
- (void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(_Bool)arg2 numericLength:(id)arg3 isRandom:(_Bool)arg4 validator:(id)arg5;
- (void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(CDUnknownBlockType)arg2;
- (id)initWithUIProvider:(id)arg1;

@end

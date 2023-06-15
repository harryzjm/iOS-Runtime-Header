//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LAPSCurrentPasscodeService, LAPSNewPasscodeService, LAPSRecoveryPasscodeService, NSString;

__attribute__((visibility("hidden")))
@interface LAPSPasscodeChangeSystemAdapter : NSObject
{
    LAPSCurrentPasscodeService *_currentPasscodeService;
    LAPSNewPasscodeService *_newPasscodeService;
    LAPSRecoveryPasscodeService *_recoveryPasscodeService;
}

- (void).cxx_destruct;
- (void)verifyNewPasscode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)defaultNewPasscodeType;
- (id)allowedNewPasscodeTypes;
- (void)changePasscode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)verifyPasscode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)failedPasscodeAttempts;
- (id)passcodeType;
- (void)preflightRecoveryWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isPasscodeRecoveryRestricted;
- (_Bool)isPasscodeRecoverySupported;
- (_Bool)isPasscodeRecoveryEnabled;
- (_Bool)hasPasscode;
- (long long)backoffTimeout;
- (id)initWithPersistence:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


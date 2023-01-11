//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISBiometricStore, NSArray, NSNumber, NSString;

@interface ISBiometricUpdateTouchIDSettingsOperation
{
    _Bool _regeneratePublicKey;
    _Bool _shouldSuppressAuthPrompts;
    CDUnknownBlockType _resultBlock;
    long long _status;
    NSNumber *_accountIdentifier;
    NSString *_attestationStringPurchase;
    NSString *_attestationStringExtendedActions;
    ISBiometricStore *_biometricStore;
    NSArray *_certChainPrimary;
    NSArray *_certChainExtended;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *certChainExtended; // @synthesize certChainExtended=_certChainExtended;
@property(copy, nonatomic) NSArray *certChainPrimary; // @synthesize certChainPrimary=_certChainPrimary;
@property(retain, nonatomic) ISBiometricStore *biometricStore; // @synthesize biometricStore=_biometricStore;
@property(copy, nonatomic) NSString *attestationStringExtendedActions; // @synthesize attestationStringExtendedActions=_attestationStringExtendedActions;
@property(copy, nonatomic) NSString *attestationStringPurchase; // @synthesize attestationStringPurchase=_attestationStringPurchase;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly) long long status; // @synthesize status=_status;
@property _Bool shouldSuppressAuthPrompts; // @synthesize shouldSuppressAuthPrompts=_shouldSuppressAuthPrompts;
@property(copy) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property _Bool regeneratePublicKey; // @synthesize regeneratePublicKey=_regeneratePublicKey;
- (id)_newUpdateTouchIDSettingsOperation;
- (void)run;
- (id)initWithAccountIdentifier:(id)arg1;

@end

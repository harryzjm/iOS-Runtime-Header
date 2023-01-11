//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString, TransparencyTrustedKeyStore, VRFPublicKey;

@interface KTApplicationPublicKeyStore : NSObject
{
    int _vrfType;
    VRFPublicKey *_vrfKey;
    TransparencyTrustedKeyStore *_appSmtKeyStore;
    TransparencyTrustedKeyStore *_appSthKeyStore;
    TransparencyTrustedKeyStore *_tltKeyStore;
    unsigned long long _patLogBeginningMs;
    unsigned long long _tltLogBeginningMs;
    NSDate *_receiptTime;
    NSString *_application;
    NSData *_patConfigProof;
    NSData *_tltConfigProof;
    NSDictionary *_trustedAppSigningKeys;
    NSArray *_trustedAppLeafs;
    NSDictionary *_trustedTltSigningKeys;
    NSArray *_trustedTltLeafs;
    NSArray *_trustedIntermediates;
}

- (void).cxx_destruct;
@property(retain) NSArray *trustedIntermediates; // @synthesize trustedIntermediates=_trustedIntermediates;
@property(retain) NSArray *trustedTltLeafs; // @synthesize trustedTltLeafs=_trustedTltLeafs;
@property(retain) NSDictionary *trustedTltSigningKeys; // @synthesize trustedTltSigningKeys=_trustedTltSigningKeys;
@property(retain) NSArray *trustedAppLeafs; // @synthesize trustedAppLeafs=_trustedAppLeafs;
@property(retain) NSDictionary *trustedAppSigningKeys; // @synthesize trustedAppSigningKeys=_trustedAppSigningKeys;
@property int vrfType; // @synthesize vrfType=_vrfType;
@property(retain) NSData *tltConfigProof; // @synthesize tltConfigProof=_tltConfigProof;
@property(retain) NSData *patConfigProof; // @synthesize patConfigProof=_patConfigProof;
@property(retain) NSString *application; // @synthesize application=_application;
@property(retain) NSDate *receiptTime; // @synthesize receiptTime=_receiptTime;
@property unsigned long long tltLogBeginningMs; // @synthesize tltLogBeginningMs=_tltLogBeginningMs;
@property unsigned long long patLogBeginningMs; // @synthesize patLogBeginningMs=_patLogBeginningMs;
@property(retain) TransparencyTrustedKeyStore *tltKeyStore; // @synthesize tltKeyStore=_tltKeyStore;
@property(retain) TransparencyTrustedKeyStore *appSthKeyStore; // @synthesize appSthKeyStore=_appSthKeyStore;
@property(retain) TransparencyTrustedKeyStore *appSmtKeyStore; // @synthesize appSmtKeyStore=_appSmtKeyStore;
@property(retain) VRFPublicKey *vrfKey; // @synthesize vrfKey=_vrfKey;
- (id)createTLTApplicationPublicKeyStore;
- (id)initWithApplication:(id)arg1 dataStore:(id)arg2 diskState:(id)arg3 error:(id *)arg4;
- (_Bool)processDiskState:(id)arg1 dataStore:(id)arg2 error:(id *)arg3;
- (id)initWithApplication:(id)arg1 dataStore:(id)arg2 response:(id)arg3 error:(id *)arg4;
@property(readonly) _Bool inResetWindow;
- (void)startKeyStoreStateSampler;
- (_Bool)processPublicKeysResponse:(id)arg1 dataStore:(id)arg2 error:(id *)arg3;
- (_Bool)processKeyData:(id)arg1 tltLeafs:(id)arg2 intermediates:(id)arg3 patConfigProof:(id)arg4 tltConfigProof:(id)arg5 dataStore:(id)arg6 saveTreeHeads:(_Bool)arg7 error:(id *)arg8;
- (_Bool)processTltConfigProof:(id)arg1 dataStore:(id)arg2 saveTreeHeads:(_Bool)arg3 error:(id *)arg4;
- (_Bool)procesPatConfigProof:(id)arg1 dataStore:(id)arg2 saveTreeHeads:(_Bool)arg3 error:(id *)arg4;
- (_Bool)detectEpochChangeAndResetData:(unsigned long long)arg1 patLogBeginningMs:(unsigned long long)arg2 dataStore:(id)arg3 error:(id *)arg4;
- (void)notifyTreeResetDetected:(_Bool)arg1;
- (id)createTrustedSthKeyStoreFromProofSPKI:(id)arg1 signingKeysMap:(id)arg2 error:(id *)arg3;
- (id)copyVRFKeyFromConfigProof:(id)arg1 error:(id *)arg2;
- (_Bool)verifyConfigProof:(id)arg1 dataStore:(id)arg2 saveTreeHeads:(_Bool)arg3 error:(id *)arg4;
- (_Bool)verifyCertificates:(id)arg1 intermediates:(id)arg2 application:(id)arg3 error:(id *)arg4;
- (id)copyKeyStoreState;
- (void)clearState:(id *)arg1;
@property(readonly) _Bool ready;

@end

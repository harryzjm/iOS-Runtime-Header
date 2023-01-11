//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KTApplicationPublicKeyStore, KTLogClient, NSString, TransparencyManagedDataStore;

@interface KTContextVerifier : NSObject
{
    KTApplicationPublicKeyStore *_applicationKeyStore;
    TransparencyManagedDataStore *_dataStore;
    NSString *_applicationID;
    KTLogClient *_logClient;
}

+ (_Bool)verifyServerLoggableDatas:(id)arg1 againstSyncedLoggableDatas:(id)arg2 error:(id *)arg3;
+ (_Bool)verifyReceivedWitnessesForLoggableDatas:(id)arg1 error:(id *)arg2;
+ (void)addDeviceIdVRFOutput:(id)arg1 toLoggableDatas:(id)arg2 forDeviceId:(id)arg3;
+ (void)addClientDataVRFOutput:(id)arg1 toLoggableDatas:(id)arg2 forClientData:(id)arg3;
+ (long long)verifyMutation:(id)arg1 record:(id)arg2;
- (void).cxx_destruct;
@property(retain) KTLogClient *logClient; // @synthesize logClient=_logClient;
@property(retain) NSString *applicationID; // @synthesize applicationID=_applicationID;
@property(retain) TransparencyManagedDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain) KTApplicationPublicKeyStore *applicationKeyStore; // @synthesize applicationKeyStore=_applicationKeyStore;
- (void)checkHeadEpoch:(id)arg1 isMapHead:(_Bool)arg2;
- (_Bool)verifyRevisionLogInclusionProofResponse:(id)arg1 error:(id *)arg2;
- (unsigned long long)verifyRevisionLogTopLevelProof:(id)arg1 patSTH:(id)arg2 error:(id *)arg3;
- (unsigned long long)verifyRevisionLogProofLogEntry:(id)arg1 patSTH:(id *)arg2 error:(id *)arg3;
- (_Bool)setInclusionVerifiedState:(unsigned long long)arg1 logEntry:(id)arg2 failure:(id)arg3 error:(id *)arg4;
- (_Bool)setInclusionVerifiedState:(unsigned long long)arg1 topLevelTreeLogEntry:(id)arg2 failure:(id)arg3 error:(id *)arg4;
- (_Bool)setInclusionVerifiedState:(unsigned long long)arg1 perApplicationTreeLogEntry:(id)arg2 failure:(id)arg3 error:(id *)arg4;
- (void)verifySTHs:(id)arg1;
- (unsigned long long)verifyConsistencyProofResponse:(id)arg1 startRevision:(long long)arg2 error:(id *)arg3;
- (unsigned long long)verifyInclusionProof:(id)arg1 mapLeaf:(id *)arg2 error:(id *)arg3;
- (_Bool)verifyResponseAccountId:(id)arg1 requestAccountId:(id)arg2 error:(id *)arg3;
- (unsigned long long)verifyUriWitness:(id)arg1 uri:(id)arg2 error:(id *)arg3;
- (unsigned long long)verifyDeviceWitnesses:(id)arg1 requestDevices:(id)arg2 loggableDatas:(id)arg3 uriVRFOutput:(id)arg4 error:(id *)arg5;
- (unsigned long long)verifyDeviceWitness:(id)arg1 deviceId:(id)arg2 uriVRFOutput:(id)arg3 error:(id *)arg4;
- (unsigned long long)verifyClientDataWitnesses:(id)arg1 clientDatas:(id)arg2 loggableDatas:(id)arg3 uriVRFOutput:(id)arg4 error:(id *)arg5;
- (unsigned long long)verifyClientDataWitness:(id)arg1 clientData:(id)arg2 uriVRFOutput:(id)arg3 error:(id *)arg4;
- (void)verifyKTSMTsMerged:(id)arg1 queryResponse:(id)arg2 uri:(id)arg3 accountId:(id)arg4;
- (void)verifyKTSMTs:(id)arg1;
- (void)deleteSMT:(id)arg1 error:(id)arg2;
- (void)failSMTsIfOverMMD:(id)arg1 proof:(id)arg2 underlyingError:(id)arg3 errorCode:(long long)arg4 serverHint:(id)arg5;
- (void)failSMTsIfOverMMD:(id)arg1 proof:(id)arg2 underlyingError:(id)arg3 errorCode:(long long)arg4 savePendingError:(_Bool)arg5 serverHint:(id)arg6;
- (id)createChainOfErrorsFromSMTFailures:(id)arg1;
- (id)createErrorFromSMTFailure:(id)arg1 underlyingError:(id)arg2;
- (_Bool)areSMTsOverMMD:(id)arg1;
- (void)reportVerifySMTFailure:(id)arg1 serverHint:(id)arg2 error:(id)arg3;
- (unsigned long long)verifySMTs:(id)arg1 request:(id)arg2 error:(id *)arg3;
- (id)initWithApplicationKeyStore:(id)arg1 dataStore:(id)arg2 applicationID:(id)arg3;

@end

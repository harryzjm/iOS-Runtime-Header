//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;
@protocol NFAWDLoggerDelegate;

@interface NFAWDLogger : NSObject
{
    NSData *_activeAID;
}

+ (id)sharedAWDLogger;
- (void).cxx_destruct;
@property(copy) NSData *activeAID; // @synthesize activeAID=_activeAID;
- (void)getAWDUniversityCode:(id)arg1 universityCodes:(unsigned int *)arg2;
- (void)postAWDMobileSoftwareUpdateException:(unsigned int)arg1;
- (void)postAWDFelicaStateChangeEvent:(id)arg1;
- (void)postAWDHCEEndEvent;
- (void)postAWDHCEStateChangeEvent:(unsigned int)arg1;
- (void)postAWDHCEStartEvent:(id)arg1;
- (void)postAWDHCIActivityTimeout:(id)arg1;
- (void)postAWDPurpleTrustOperationWithParameters:(id)arg1;
- (void)postAWDPeerPaymentRequestWithParameters:(id)arg1;
- (void)postAWDPeerPaymentEnrollmentWithParameters:(id)arg1;
- (void)postReaderModeIngestionSessionEnded:(id)arg1 startTime:(unsigned long long)arg2;
- (void)postReaderModeIngestionSessionStarted:(id)arg1;
- (void)postAWDReaderSessionEventWithParameters:(id)arg1;
- (void)postAWDRadioIsEnabledStatistic:(_Bool)arg1 changed:(_Bool)arg2;
- (void)postAWDMiddlewareException:(unsigned int)arg1 mwVersion:(unsigned int)arg2 errorType:(unsigned int)arg3 errorCode:(unsigned int)arg4 breadcrumb:(unsigned long long)arg5 checkMaxExceptionCounter:(_Bool)arg6;
- (void)postAWDPLLUnlockEvent;
- (void)postAWDReaderModeExceptionForType:(unsigned int)arg1 tagType:(unsigned int)arg2 rfFrameInterface:(_Bool)arg3 withErrorCode:(unsigned int)arg4;
- (void)postAWDVASTransactionException:(unsigned int)arg1 withSWStatus:(unsigned int)arg2;
- (void)postAWDVASGetData:(id)arg1;
- (void)postAWDVASSelectOSE:(id)arg1;
- (void)postAWDSEMemoryInfo:(id)arg1 isIcf:(_Bool)arg2;
- (void)postAWDVersionInfo:(id)arg1;
- (void)postAWDTSMConnectivityException:(unsigned int)arg1;
- (void)postAWDTSMEndOfSession;
- (void)postAWDTSMEndWithParameters:(id)arg1;
- (void)postAWDTSMStartWithParameters:(id)arg1;
- (void)postAWDSERestrictedModeExited:(_Bool)arg1;
- (void)postAWDSERestrictedModeEntered:(id)arg1 isIcf:(_Bool)arg2;
- (void)postAWDRestrictedModeFromContactlessMode:(_Bool)arg1 isIcf:(_Bool)arg2;
- (void)postAWDSERemovedEvent:(id)arg1 isIcf:(_Bool)arg2;
- (void)postAWDAPNReceived;
- (void)postAWDTransactionEndOfOperation;
- (void)postAWDTransactionLastRAPDU;
- (void)postAWDFelicaHCIEndOfTransactionEventWithParameters:(id)arg1;
- (void)postAWDHCIEndOfTransactionEventWithParameters:(id)arg1;
- (void)_postAWDHCIEndOfTransactionEventWithParametersLegacy:(id)arg1 currentTimestamp:(unsigned long long)arg2;
- (void)postAWDHCIStartOfTransactionEventWithParameters:(id)arg1;
- (void)_postAWDHCIStartOfTransactionEventWithParametersLegacy:(id)arg1 currentTimestamp:(unsigned long long)arg2;
- (void)postAWDCardIngestionReaderStateChangeWithType:(unsigned int)arg1 errorCode:(unsigned int)arg2;
- (void)postAWDCardIngestionSessionStateChange:(id)arg1;
- (void)postAWDExpressTransactionEvent:(id)arg1;
- (void)postAWDCRSActivationTimerExpiredWithVersion:(unsigned int)arg1 withStatus:(unsigned int)arg2;
- (void)postAWDSESelectEventWithAID:(id)arg1;
- (void)postAWDCRSDeAuthWithStatus:(unsigned int)arg1;
- (void)postAWDCRSAuthECommerceWithParameters:(id)arg1;
- (void)postAWDCRSAuthWithStatus:(unsigned int)arg1 withMethod:(unsigned int)arg2;
- (void)postAWDCRSAuthInitEventWithStatus:(unsigned int)arg1;
- (void)postAWDFieldEventWithFieldOn:(_Bool)arg1 withTechnology:(unsigned int)arg2;
- (unsigned long long)getTimestamp;
- (id)generateUUID;
- (_Bool)incrementMiddlewareExceptionCountWithReset:(_Bool)arg1;
- (void)updateStats:(id)arg1 reset:(_Bool)arg2;
- (void)_updateStats:(id)arg1 reset:(_Bool)arg2;
- (void)enableQueryMetricsListener;
- (id)init;
@property(nonatomic) __weak id <NFAWDLoggerDelegate> delegate;
- (unsigned int)getBatteryPercent;

@end

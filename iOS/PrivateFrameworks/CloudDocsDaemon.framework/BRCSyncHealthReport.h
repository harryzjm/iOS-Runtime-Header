//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRDSIDString, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface BRCSyncHealthReport : NSObject
{
    NSMutableDictionary *_syncUpErrorsByMangledID;
    NSMutableDictionary *_syncDownErrorsByMangledID;
    BRDSIDString *_dsid;
    NSString *_rampNumber;
    NSMutableSet *_syncUpFailures;
    NSMutableSet *_uploadFailures;
    NSMutableSet *_downloadFailures;
    unsigned long long _totalZoneCount;
    unsigned long long _blockedZonesCount;
    unsigned long long _clientTruthTotalItemsCount;
    unsigned long long _serverTruthTotalItemsCount;
    unsigned long long _zonesNeverFullSync;
    unsigned long long _clientTruthDirFaultCount;
    unsigned long long _serverTruthDirFaultCount;
    unsigned long long _serverTruthDirCount;
    unsigned long long _timeSinceLogin;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long timeSinceLogin; // @synthesize timeSinceLogin=_timeSinceLogin;
@property(readonly, nonatomic) unsigned long long serverTruthDirCount; // @synthesize serverTruthDirCount=_serverTruthDirCount;
@property(readonly, nonatomic) unsigned long long serverTruthDirFaultCount; // @synthesize serverTruthDirFaultCount=_serverTruthDirFaultCount;
@property(readonly, nonatomic) unsigned long long clientTruthDirFaultCount; // @synthesize clientTruthDirFaultCount=_clientTruthDirFaultCount;
@property(readonly, nonatomic) NSString *rampNumber; // @synthesize rampNumber=_rampNumber;
@property(readonly, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
@property(readonly, nonatomic) NSSet *downloadFailures; // @synthesize downloadFailures=_downloadFailures;
@property(readonly, nonatomic) NSSet *uploadFailures; // @synthesize uploadFailures=_uploadFailures;
@property(readonly, nonatomic) NSSet *syncUpFailures; // @synthesize syncUpFailures=_syncUpFailures;
@property(readonly, nonatomic) NSDictionary *syncDownErrorsByMangledID; // @synthesize syncDownErrorsByMangledID=_syncDownErrorsByMangledID;
@property(readonly, nonatomic) NSDictionary *syncUpErrorsByMangledID; // @synthesize syncUpErrorsByMangledID=_syncUpErrorsByMangledID;
@property(readonly, nonatomic) unsigned long long zonesNeverFullSync; // @synthesize zonesNeverFullSync=_zonesNeverFullSync;
@property(readonly, nonatomic) unsigned long long serverTruthTotalItemsCount; // @synthesize serverTruthTotalItemsCount=_serverTruthTotalItemsCount;
@property(readonly, nonatomic) unsigned long long clientTruthTotalItemsCount; // @synthesize clientTruthTotalItemsCount=_clientTruthTotalItemsCount;
@property(readonly, nonatomic) unsigned long long blockedZonesCount; // @synthesize blockedZonesCount=_blockedZonesCount;
@property(readonly, nonatomic) unsigned long long totalZoneCount; // @synthesize totalZoneCount=_totalZoneCount;
@property(readonly, nonatomic) NSArray *telemetryOtherEvents;
@property(readonly, nonatomic) NSArray *telemetryErrorEvents;
- (void)syncErrors:(CDUnknownBlockType)arg1;
- (void)generateReportWithSession:(id)arg1;
- (id)_injectionForAnalyticsServiceCode:(int)arg1;
- (void)_fillTransferFailure:(id)arg1 withRowID:(unsigned long long)arg2 atDate:(id)arg3 session:(id)arg4;
- (id)getRampNumberForSession:(id)arg1;
- (id)init;

@end


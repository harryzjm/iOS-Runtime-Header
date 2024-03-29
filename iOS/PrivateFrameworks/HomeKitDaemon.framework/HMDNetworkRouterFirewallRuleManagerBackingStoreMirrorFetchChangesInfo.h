//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKServerChangeToken, NSArray, NSDictionary, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorFetchChangesInfo
{
    _Bool _zonesHaveChanged;
    _Bool _zonesWereDeleted;
    NSSet *_requestedRecordIDs;
    NSDictionary *_zoneInfoMap;
    CKServerChangeToken *_databaseChangeToken;
    CKServerChangeToken *_originalDatabaseChangeToken;
    NSMutableSet *_modifiedRecordIDs;
    NSArray *_signatureVerificationPublicKeys;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *signatureVerificationPublicKeys; // @synthesize signatureVerificationPublicKeys=_signatureVerificationPublicKeys;
@property(readonly, nonatomic) _Bool zonesWereDeleted; // @synthesize zonesWereDeleted=_zonesWereDeleted;
@property(readonly, nonatomic) _Bool zonesHaveChanged; // @synthesize zonesHaveChanged=_zonesHaveChanged;
@property(readonly, nonatomic) NSMutableSet *modifiedRecordIDs; // @synthesize modifiedRecordIDs=_modifiedRecordIDs;
@property(retain, nonatomic) CKServerChangeToken *originalDatabaseChangeToken; // @synthesize originalDatabaseChangeToken=_originalDatabaseChangeToken;
@property(retain, nonatomic) CKServerChangeToken *databaseChangeToken; // @synthesize databaseChangeToken=_databaseChangeToken;
@property(readonly, nonatomic) NSDictionary *zoneInfoMap; // @synthesize zoneInfoMap=_zoneInfoMap;
@property(readonly, nonatomic) NSSet *requestedRecordIDs; // @synthesize requestedRecordIDs=_requestedRecordIDs;
- (void)__cleanupMirroredZones:(id)arg1 cloudZones:(id)arg2 result:(id)arg3 error:(id)arg4;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)markZonesDeleted;
- (void)markZonesChanged;
- (id)initWithActivity:(id)arg1 options:(id)arg2 databaseChangeToken:(id)arg3 promise:(id)arg4 xpcActivity:(id)arg5 database:(id)arg6 useAnonymousRequests:(_Bool)arg7 recordIDs:(id)arg8 lastSynchronizedRecordIDs:(id)arg9;

@end


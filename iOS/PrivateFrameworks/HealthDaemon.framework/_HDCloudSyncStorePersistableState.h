//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class CKServerChangeToken, NSDate, NSDictionary, NSString;

@interface _HDCloudSyncStorePersistableState : NSObject <NSCopying>
{
    _Bool _hasEncounteredGapInCurrentEpoch;
    NSString *_ownerIdentifier;
    NSString *_containerIdentifier;
    CKServerChangeToken *_serverChangeToken;
    unsigned long long _baselineEpoch;
    NSDate *_rebaseDeadline;
    NSDate *_lastSyncDate;
    NSDictionary *_emptyZoneDateByZoneID;
    NSDate *_lastCheckDate;
}

@property(readonly, nonatomic) _Bool hasEncounteredGapInCurrentEpoch; // @synthesize hasEncounteredGapInCurrentEpoch=_hasEncounteredGapInCurrentEpoch;
@property(readonly, nonatomic) NSDate *lastCheckDate; // @synthesize lastCheckDate=_lastCheckDate;
@property(readonly, nonatomic) NSDictionary *emptyZoneDateByZoneID; // @synthesize emptyZoneDateByZoneID=_emptyZoneDateByZoneID;
@property(readonly, nonatomic) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
@property(readonly, nonatomic) NSDate *rebaseDeadline; // @synthesize rebaseDeadline=_rebaseDeadline;
@property(readonly, nonatomic) unsigned long long baselineEpoch; // @synthesize baselineEpoch=_baselineEpoch;
@property(readonly, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(readonly, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(readonly, nonatomic) NSString *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
- (void).cxx_destruct;
- (id)stateWithBaselineEpoch:(unsigned long long)arg1;
- (id)stateWithGapEncountered:(_Bool)arg1;
- (id)stateByRecordingLastCheckDate:(id)arg1;
- (id)stateWithEmptyZones:(id)arg1;
- (id)stateByRecordingLastSyncDate:(id)arg1;
- (id)stateByResettingRebaselineDeadline;
- (id)stateWithServerChangeToken:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithServerChangeToken:(id)arg1 baselineEpoch:(unsigned long long)arg2 rebaseDeadline:(id)arg3 lastSyncDate:(id)arg4 emptyZones:(id)arg5 lastCheckDate:(id)arg6 ownerIdentifier:(id)arg7 containerIdentifier:(id)arg8;

@end

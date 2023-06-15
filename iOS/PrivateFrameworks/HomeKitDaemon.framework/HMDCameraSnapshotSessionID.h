//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraSnapshotSessionID
{
    _Bool _snapshotRequestForBulletin;
    NSString *_snapshotCharacteristicEventUUID;
    unsigned long long _snapshotReason;
    NSNumber *_streamingTier;
}

- (void).cxx_destruct;
@property(readonly) NSNumber *streamingTier; // @synthesize streamingTier=_streamingTier;
@property(readonly, getter=isSnapshotRequestForBulletin) _Bool snapshotRequestForBulletin; // @synthesize snapshotRequestForBulletin=_snapshotRequestForBulletin;
@property(readonly) unsigned long long snapshotReason; // @synthesize snapshotReason=_snapshotReason;
@property(readonly) NSString *snapshotCharacteristicEventUUID; // @synthesize snapshotCharacteristicEventUUID=_snapshotCharacteristicEventUUID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAccessory:(id)arg1 message:(id)arg2;
- (id)initWithSessionID:(id)arg1 hostProcessBundleIdentifier:(id)arg2 isSPIClient:(_Bool)arg3 deviceSectionName:(id)arg4 description:(id)arg5 snapshotReason:(unsigned long long)arg6 snapshotRequestForBulletin:(_Bool)arg7 snapshotCharacteristicEventUUID:(id)arg8 streamingTier:(id)arg9;

@end


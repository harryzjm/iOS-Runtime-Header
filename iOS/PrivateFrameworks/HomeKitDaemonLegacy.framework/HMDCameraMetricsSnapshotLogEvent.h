//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

__attribute__((visibility("hidden")))
@interface HMDCameraMetricsSnapshotLogEvent
{
    _Bool _snapshotForNotification;
    NSNumber *_referenceTimestamp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *referenceTimestamp; // @synthesize referenceTimestamp=_referenceTimestamp;
@property(readonly, nonatomic) _Bool snapshotForNotification; // @synthesize snapshotForNotification=_snapshotForNotification;
- (id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(_Bool)arg3 snapshotForNotification:(_Bool)arg4;

@end


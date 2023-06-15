//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBCloudZone.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface HMDLegacyCloudZone : HMBCloudZone
{
    NSSet *_participants;
    long long _keyStatus;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long keyStatus; // @synthesize keyStatus=_keyStatus;
@property(readonly, nonatomic) NSSet *participants; // @synthesize participants=_participants;
- (id)encodeRecordFromModel:(id)arg1 existingRecord:(id)arg2 encodingContext:(id)arg3 error:(id *)arg4;
- (id)decodeModelFromRecord:(id)arg1 externalRecordFields:(id)arg2 source:(unsigned long long)arg3 error:(id *)arg4;
- (id)waitForPendingRebuild;
- (void)startUpWithLocalZone:(id)arg1;
- (id)initWithCloudDatabase:(id)arg1 configuration:(id)arg2 state:(id)arg3;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBCloudZone.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDLegacyV4CloudZone : HMBCloudZone
{
    NSSet *_participants;
    long long _keyStatus;
    NSString *_rootRecordName;
}

- (void).cxx_destruct;
@property(readonly) NSString *rootRecordName; // @synthesize rootRecordName=_rootRecordName;
@property(readonly, nonatomic) long long keyStatus; // @synthesize keyStatus=_keyStatus;
@property(readonly, nonatomic) NSSet *participants; // @synthesize participants=_participants;
- (id)waitForPendingRebuild;
- (id)encodeRecordFromModel:(id)arg1 existingRecord:(id)arg2 encodingContext:(id)arg3 error:(id *)arg4;
- (void)pushGroupWithBlockRow:(unsigned long long)arg1 tuples:(id)arg2 options:(id)arg3 activity:(id)arg4 completionPromise:(id)arg5;
- (id)tupleForRootRecordWithOutputBlockRow:(unsigned long long)arg1 objectIDToRecordNameMap:(id)arg2;
- (id)rootRecordParentModelID;
- (id)rootRecordModelID;
- (id)recordWithExistingRecord:(id)arg1 modelData:(id)arg2 parentModelID:(id)arg3 modelContainer:(id)arg4 error:(id *)arg5;
- (id)recordIDForParentModelID:(id)arg1;
- (id)decodeModelFromRecord:(id)arg1 externalRecordFields:(id)arg2 source:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithCloudDatabase:(id)arg1 configuration:(id)arg2 state:(id)arg3;

@end


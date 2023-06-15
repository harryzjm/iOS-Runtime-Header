//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDLegacyV0Model
{
}

+ (id)createWithLegacyRecord:(id)arg1 modelContainer:(id)arg2 error:(id *)arg3;
+ (id)hmbProperties;
- (id)encodeWithExistingRecord:(id)arg1 cloudZone:(id)arg2 modelContainer:(id)arg3 error:(id *)arg4;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSData *cloudBlob; // @dynamic cloudBlob;
@property(retain, nonatomic) NSData *cloudBlobV2; // @dynamic cloudBlobV2;
@property(retain, nonatomic) NSNumber *cloudBlobsReadOnly; // @dynamic cloudBlobsReadOnly;

@end


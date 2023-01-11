//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCloudRecord;

@interface HMDCloudMetadataZone
{
    HMDCloudRecord *_metadataRecord;
}

+ (void)createMetadataZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)zoneSubscriptionName:(id)arg1;
+ (id)zoneRootRecordName;
- (void).cxx_destruct;
@property(retain, nonatomic) HMDCloudRecord *metadataRecord; // @synthesize metadataRecord=_metadataRecord;
- (void)setServerChangeToken:(id)arg1;

@end

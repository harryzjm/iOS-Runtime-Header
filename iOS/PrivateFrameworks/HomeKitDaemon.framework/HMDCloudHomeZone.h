//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HMDCloudHomeZone
{
    _Bool _sharedHome;
}

+ (void)createHomeZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)zoneSubscriptionName:(id)arg1;
+ (id)zoneSharedRootRecordName;
+ (id)zoneRootRecordName;
@property(readonly, nonatomic, getter=isSharedHome) _Bool sharedHome; // @synthesize sharedHome=_sharedHome;
- (void)setServerChangeToken:(id)arg1;
- (id)createCloudZoneChangeTemporaryCache:(_Bool)arg1;
- (id)description;

@end

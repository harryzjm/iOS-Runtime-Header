//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreCacheZone : HMFObject
{
    long long _zoneID;
    NSString *_zoneName;
    NSMutableArray *_actualGroups;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *actualGroups; // @synthesize actualGroups=_actualGroups;
@property(readonly) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(readonly) long long zoneID; // @synthesize zoneID=_zoneID;
@property(readonly) NSArray *groups;
- (id)dumpDebug;
- (id)initWithZoneID:(long long)arg1 name:(id)arg2;

@end


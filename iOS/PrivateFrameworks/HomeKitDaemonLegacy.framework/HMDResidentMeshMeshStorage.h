//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDResidentDevice, HMDResidentMesh, NSDictionary, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface HMDResidentMeshMeshStorage : HMFObject
{
    _Bool _enabled;
    HMDResidentMesh *_owner;
    HMDResidentDevice *_residentDevice;
    NSDictionary *_metrics;
    NSMutableSet *_accessoryUUIDs;
    unsigned long long _generationCount;
    NSMutableDictionary *_accessoryListWithLinkQuality;
    unsigned long long _nestedStatusRequests;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long nestedStatusRequests; // @synthesize nestedStatusRequests=_nestedStatusRequests;
@property(retain, nonatomic) NSMutableDictionary *accessoryListWithLinkQuality; // @synthesize accessoryListWithLinkQuality=_accessoryListWithLinkQuality;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) unsigned long long generationCount; // @synthesize generationCount=_generationCount;
@property(retain, nonatomic) NSMutableSet *accessoryUUIDs; // @synthesize accessoryUUIDs=_accessoryUUIDs;
@property(copy, nonatomic) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) HMDResidentDevice *residentDevice; // @synthesize residentDevice=_residentDevice;
@property(nonatomic) __weak HMDResidentMesh *owner; // @synthesize owner=_owner;
- (void)_requestStatus;
- (id)initWithResidentDevice:(id)arg1 owner:(id)arg2;

@end


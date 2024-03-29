//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMMediaDestination, HMMediaDestinationControllerData, NSArray;

__attribute__((visibility("hidden")))
@interface HMDMediaGroupsParticipantData : NSObject
{
    HMMediaDestination *_destination;
    HMMediaDestinationControllerData *_destinationControllerData;
    NSArray *_backedUpGroups;
}

- (void).cxx_destruct;
@property(copy) NSArray *backedUpGroups; // @synthesize backedUpGroups=_backedUpGroups;
@property(copy) HMMediaDestinationControllerData *destinationControllerData; // @synthesize destinationControllerData=_destinationControllerData;
@property(copy) HMMediaDestination *destination; // @synthesize destination=_destination;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithProtoBufferData:(id)arg1;
- (id)encodeToProtoBufferData;
- (id)initWithDestination:(id)arg1 destinationControllerData:(id)arg2 backedUpGroups:(id)arg3;

@end


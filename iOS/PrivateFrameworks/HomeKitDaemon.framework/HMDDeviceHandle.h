//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDAccountHandle, NSData, NSString, NSUUID, _HMDDeviceHandle;

@interface HMDDeviceHandle : HMFObject <NSCopying, NSSecureCoding>
{
    _HMDDeviceHandle *_internal;
}

+ (_Bool)supportsSecureCoding;
+ (id)deviceHandleForDestination:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) _HMDDeviceHandle *internal; // @synthesize internal=_internal;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)matchesPushToken:(id)arg1;
@property(readonly, copy) NSData *pushToken;
@property(readonly, copy) NSString *destination;
@property(readonly, copy) HMDAccountHandle *accountHandle;
@property(readonly, getter=isGlobal) _Bool global;
@property(readonly, getter=isLocal) _Bool local;
@property(readonly, copy) NSUUID *identifier;
- (id)attributeDescriptions;
- (id)shortDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithInternal:(id)arg1;
- (id)init;

@end

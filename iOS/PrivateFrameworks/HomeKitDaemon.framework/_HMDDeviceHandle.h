//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDAccountHandle, NSString, NSUUID;

@interface _HMDDeviceHandle : HMFObject <NSCopying, NSSecureCoding>
{
    NSUUID *_identifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)identifierNamespace;
+ (_Bool)isValidDestination:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) HMDAccountHandle *accountHandle;
@property(readonly, getter=isGlobal) _Bool global;
@property(readonly, getter=isLocal) _Bool local;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithDestination:(id)arg1;
@property(readonly, copy) NSString *destination;
- (id)init;

@end

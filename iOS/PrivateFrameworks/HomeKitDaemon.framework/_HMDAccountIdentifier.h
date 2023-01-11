//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface _HMDAccountIdentifier : HMFObject <NSCopying, NSSecureCoding>
{
    NSUUID *_identifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, getter=isAuthenticated) _Bool authenticated;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end


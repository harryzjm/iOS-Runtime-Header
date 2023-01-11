//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSDate, NSUUID, SPHandle;

@interface SPBeaconShare : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _accepted;
    NSUUID *_identifier;
    SPHandle *_handle;
    NSDate *_expiration;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(nonatomic) _Bool accepted; // @synthesize accepted=_accepted;
@property(copy, nonatomic) SPHandle *handle; // @synthesize handle=_handle;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 handle:(id)arg2 accepted:(_Bool)arg3 expiration:(id)arg4;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NearbyInteraction/NSCopying-Protocol.h>
#import <NearbyInteraction/NSSecureCoding-Protocol.h>

@class NSData;

@interface NIDiscoveryToken : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_rawToken;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSData *rawToken; // @synthesize rawToken=_rawToken;
- (id)descriptionInternal;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBytes:(id)arg1;

@end

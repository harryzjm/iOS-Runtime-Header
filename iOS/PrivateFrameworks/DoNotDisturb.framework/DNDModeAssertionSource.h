//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class NSString;

@interface DNDModeAssertionSource : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_clientIdentifier;
    NSString *_deviceIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithClientIdentifier:(id)arg1 deviceIdentifier:(id)arg2;

@end

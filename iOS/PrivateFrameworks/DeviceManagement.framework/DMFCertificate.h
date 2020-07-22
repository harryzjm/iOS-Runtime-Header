//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DeviceManagement/NSCopying-Protocol.h>
#import <DeviceManagement/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface DMFCertificate : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isIdentity;
    NSString *_commonName;
    NSData *_data;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool isIdentity; // @synthesize isIdentity=_isIdentity;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, copy, nonatomic) NSString *commonName; // @synthesize commonName=_commonName;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCommonName:(id)arg1 data:(id)arg2 isIdentity:(_Bool)arg3;

@end

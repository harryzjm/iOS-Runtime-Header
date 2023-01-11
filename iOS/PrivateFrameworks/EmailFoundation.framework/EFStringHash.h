//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFPubliclyDescribable-Protocol.h>
#import <EmailFoundation/NSCopying-Protocol.h>
#import <EmailFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface EFStringHash : NSObject <NSCopying, NSSecureCoding, EFPubliclyDescribable>
{
    long long _primitiveHash;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long primitiveHash; // @synthesize primitiveHash=_primitiveHash;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)redactedStringValue;
- (id)_hexStringFromHash:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *stringValue;
@property(readonly, nonatomic) long long int64Value;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHash:(long long)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithMD5Digest:(id)arg1;

// Remaining properties
@property(readonly) Class superclass;

@end

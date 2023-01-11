//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKPlayerEmailInternal
{
    NSString *_address;
    NSString *_addressSHA1;
    NSString *_addressPrefix;
    _Bool _verified;
}

+ (id)secureCodedPropertyKeys;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool verified; // @synthesize verified=_verified;
@property(retain, nonatomic) NSString *addressPrefix; // @synthesize addressPrefix=_addressPrefix;
@property(retain, nonatomic) NSString *addressSHA1; // @synthesize addressSHA1=_addressSHA1;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;

@end

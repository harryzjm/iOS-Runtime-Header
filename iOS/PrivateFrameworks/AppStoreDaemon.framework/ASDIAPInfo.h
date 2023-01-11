//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSMutableCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface ASDIAPInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSNumber *_adamId;
    NSNumber *_appAdamId;
    NSNumber *_expirationTimestamp;
    _Bool _hasUsedFreeOffer;
    _Bool _hasUsedIntroPricingOffer;
    NSNumber *_lastModifiedTimestamp;
    NSNumber *_purchaseTimestamp;
    NSString *_subscriptionFamilyId;
    unsigned char _type;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_newCopyWithClass:(Class)arg1 zone:(struct _NSZone *)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)isEqualToIAPInfo:(id)arg1;
@property(readonly, nonatomic) unsigned char type;
@property(readonly, nonatomic) NSString *subscriptionFamilyId;
@property(readonly, nonatomic) NSNumber *purchaseTimestamp;
@property(readonly, nonatomic) NSNumber *lastModifiedTimestamp;
@property(readonly, nonatomic) _Bool hasUsedIntroPricingOffer;
@property(readonly, nonatomic) _Bool hasUsedFreeOffer;
@property(readonly, nonatomic) NSNumber *expirationTimestamp;
@property(readonly, nonatomic) NSNumber *appAdamId;
@property(readonly, nonatomic) NSNumber *adamId;

@end


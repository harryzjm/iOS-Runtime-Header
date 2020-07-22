//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CTCarrierSpace/NSCopying-Protocol.h>
#import <CTCarrierSpace/NSSecureCoding-Protocol.h>

@class NSString;

@interface CTCarrierSpacePlanGroupOptionInfo : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char _planSubscriptionStatus;
    _Bool _planPurchasable;
    NSString *_planId;
    NSString *_planLabel;
    NSString *_planValue;
    NSString *_planDetailsURL;
    NSString *_planTermsURL;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool planPurchasable; // @synthesize planPurchasable=_planPurchasable;
@property(nonatomic) unsigned char planSubscriptionStatus; // @synthesize planSubscriptionStatus=_planSubscriptionStatus;
@property(retain, nonatomic) NSString *planTermsURL; // @synthesize planTermsURL=_planTermsURL;
@property(retain, nonatomic) NSString *planDetailsURL; // @synthesize planDetailsURL=_planDetailsURL;
@property(retain, nonatomic) NSString *planValue; // @synthesize planValue=_planValue;
@property(retain, nonatomic) NSString *planLabel; // @synthesize planLabel=_planLabel;
@property(retain, nonatomic) NSString *planId; // @synthesize planId=_planId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long planStatus;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end


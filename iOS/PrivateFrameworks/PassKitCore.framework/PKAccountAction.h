//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDecimalNumber, NSString;

@interface PKAccountAction : NSObject <NSSecureCoding>
{
    unsigned long long _actionType;
    NSString *_identifier;
    NSDecimalNumber *_amount;
    NSString *_currencyCode;
    unsigned long long _redemptionType;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long redemptionType; // @synthesize redemptionType=_redemptionType;
@property(retain, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

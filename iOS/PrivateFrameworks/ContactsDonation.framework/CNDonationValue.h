//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsDonation/NSSecureCoding-Protocol.h>

@class CNDonationOrigin;

@interface CNDonationValue : NSObject <NSSecureCoding>
{
    CNDonationOrigin *_origin;
}

+ (_Bool)supportsSecureCoding;
+ (id)donationValueWithImageData:(id)arg1 origin:(id)arg2;
+ (id)donationValueWithPostalAddress:(id)arg1 style:(long long)arg2 label:(id)arg3 origin:(id)arg4;
+ (id)donationValueWithPhoneNumber:(id)arg1 label:(id)arg2 origin:(id)arg3;
+ (id)donationValueWithEmailAddress:(id)arg1 label:(id)arg2 origin:(id)arg3;
+ (id)donationValueWithNameComponents:(id)arg1 origin:(id)arg2;
@property(readonly, copy, nonatomic) CNDonationOrigin *origin; // @synthesize origin=_origin;
- (void).cxx_destruct;
- (void)updatePropertyListRepresentation:(id)arg1;
- (id)propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (void)acceptDonationValueVisitor:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithNewExpirationDate:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithOrigin:(id)arg1;

@end

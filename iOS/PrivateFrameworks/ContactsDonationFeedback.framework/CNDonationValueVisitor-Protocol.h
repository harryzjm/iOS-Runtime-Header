//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsDonationFeedback/NSObject-Protocol.h>

@class CNDonationValue, CNPhoneNumber, CNPostalAddress, NSData, NSPersonNameComponents, NSString;

@protocol CNDonationValueVisitor <NSObject>
- (void)visitDonationValue:(CNDonationValue *)arg1 imageData:(NSData *)arg2;
- (void)visitDonationValue:(CNDonationValue *)arg1 postalAddress:(CNPostalAddress *)arg2 style:(long long)arg3 label:(NSString *)arg4;
- (void)visitDonationValue:(CNDonationValue *)arg1 phoneNumber:(CNPhoneNumber *)arg2 label:(NSString *)arg3;
- (void)visitDonationValue:(CNDonationValue *)arg1 emailAddress:(NSString *)arg2 label:(NSString *)arg3;
- (void)visitDonationValue:(CNDonationValue *)arg1 nameComponents:(NSPersonNameComponents *)arg2;
@end


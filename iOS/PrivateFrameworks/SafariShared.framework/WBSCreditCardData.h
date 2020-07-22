//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WBSCreditCardData : NSObject
{
    NSString *_cardName;
    NSString *_cardholderName;
    NSString *_cardNumber;
    NSDate *_expirationDate;
}

@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *cardNumber; // @synthesize cardNumber=_cardNumber;
@property(copy, nonatomic) NSString *cardholderName; // @synthesize cardholderName=_cardholderName;
@property(copy, nonatomic) NSString *cardName; // @synthesize cardName=_cardName;
- (void).cxx_destruct;
- (id)creditCardDataByMergingCardholderNameAndExpirationDateFromCard:(id)arg1;
- (id)keychainRepresentation;
- (id)initWithKeychainRepresentation:(id)arg1;
- (id)description;
- (id)initWithCardName:(id)arg1 number:(id)arg2 cardholderName:(id)arg3 expirationDate:(id)arg4;

@end


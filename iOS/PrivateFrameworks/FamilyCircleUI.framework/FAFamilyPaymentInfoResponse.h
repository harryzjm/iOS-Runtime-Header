//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/AAResponse.h>

@class FAFamilyCreditCard;

@interface FAFamilyPaymentInfoResponse : AAResponse
{
    FAFamilyCreditCard *_creditCard;
}

@property(retain, nonatomic) FAFamilyCreditCard *creditCard; // @synthesize creditCard=_creditCard;
- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSFinancePerformable-Protocol.h>

@class AMSFinanceAuthenticateResponse, AMSPaymentSheetRequest, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSFinancePaymentSheetResponse : NSObject <AMSFinancePerformable>
{
    AMSFinanceAuthenticateResponse *_authenticateResponse;
    NSDictionary *_metricsDictionary;
    AMSPaymentSheetRequest *_paymentSheetRequest;
}

+ (id)_greyAttributedStringForAttributedString:(id)arg1 range:(struct _NSRange)arg2;
+ (id)_attributedStringForStringArray:(id)arg1 useGrey:(_Bool)arg2 account:(id)arg3 shouldUppercase:(_Bool)arg4;
+ (id)_attributedStringForSalableInfoStringArray:(id)arg1 account:(id)arg2 shouldUppercase:(_Bool)arg3;
+ (id)_attributedStringForAttributedDictionary:(id)arg1 account:(id)arg2;
+ (id)_attributedStringForAttributedArray:(id)arg1 account:(id)arg2;
+ (long long)_salableIconForString:(id)arg1;
+ (long long)_payeeInferredFromEnumeratedTitle:(id)arg1;
+ (long long)_payeeForRequestorValue:(id)arg1;
+ (long long)_confirmationTitleForString:(id)arg1;
+ (id)_flexListDictionaryForValues:(id)arg1 account:(id)arg2 shouldUppercaseText:(_Bool)arg3;
+ (id)_attributedListDictionaryForValues:(id)arg1 account:(id)arg2;
+ (id)_createRequestFromDictionary:(id)arg1 confirmationOnly:(_Bool)arg2 authenticateResponse:(id)arg3 taskInfo:(id)arg4;
+ (id)_createMerchantSessionFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) AMSPaymentSheetRequest *paymentSheetRequest; // @synthesize paymentSheetRequest=_paymentSheetRequest;
@property(readonly, nonatomic) NSDictionary *metricsDictionary; // @synthesize metricsDictionary=_metricsDictionary;
@property(readonly, nonatomic) AMSFinanceAuthenticateResponse *authenticateResponse; // @synthesize authenticateResponse=_authenticateResponse;
- (id)performWithTaskInfo:(id)arg1;
- (id)initWithResponseDictionary:(id)arg1 confirmationOnly:(_Bool)arg2 taskInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

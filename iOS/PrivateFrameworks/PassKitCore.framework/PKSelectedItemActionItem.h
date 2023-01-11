//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSDecimalNumber, NSDictionary, NSString;

@interface PKSelectedItemActionItem : NSObject <NSSecureCoding>
{
    _Bool _serviceProviderDataRequiresLocalBalance;
    NSString *_identifier;
    NSString *_title;
    NSDecimalNumber *_amount;
    NSString *_currency;
    NSDate *_newExpirationDate;
    NSDictionary *_serviceProviderData;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool serviceProviderDataRequiresLocalBalance; // @synthesize serviceProviderDataRequiresLocalBalance=_serviceProviderDataRequiresLocalBalance;
@property(readonly, copy, nonatomic) NSDictionary *serviceProviderData; // @synthesize serviceProviderData=_serviceProviderData;
@property(readonly, copy, nonatomic) NSDate *newExpirationDate; // @synthesize newExpirationDate=_newExpirationDate;
@property(readonly, copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(readonly, copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serviceProviderDataWithCurrentLocalBalance:(id)arg1;
- (void)_processLocalizableStrings:(CDUnknownBlockType)arg1;
- (id)initWithDictionary:(id)arg1;

@end

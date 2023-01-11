//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSDecimalNumber, NSString;

@interface PKInstallmentPlanSummary : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *_startDate;
    NSDate *_originalEndDate;
    NSDate *_currentEndDate;
    NSDecimalNumber *_currentBalance;
    NSString *_currencyCode;
    NSDecimalNumber *_minimumDue;
    NSDate *_minimumDueDate;
    NSDecimalNumber *_interestCharged;
    NSDecimalNumber *_paymentsToDateAmount;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDecimalNumber *paymentsToDateAmount; // @synthesize paymentsToDateAmount=_paymentsToDateAmount;
@property(retain, nonatomic) NSDecimalNumber *interestCharged; // @synthesize interestCharged=_interestCharged;
@property(retain, nonatomic) NSDate *minimumDueDate; // @synthesize minimumDueDate=_minimumDueDate;
@property(retain, nonatomic) NSDecimalNumber *minimumDue; // @synthesize minimumDue=_minimumDue;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) NSDecimalNumber *currentBalance; // @synthesize currentBalance=_currentBalance;
@property(retain, nonatomic) NSDate *currentEndDate; // @synthesize currentEndDate=_currentEndDate;
@property(retain, nonatomic) NSDate *originalEndDate; // @synthesize originalEndDate=_originalEndDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToInstallmentPlanSummary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PKPassNumberField
{
    NSString *_currencyCode;
    long long _numberStyle;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long numberStyle; // @synthesize numberStyle=_numberStyle;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
- (void).cxx_destruct;
- (id)value;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


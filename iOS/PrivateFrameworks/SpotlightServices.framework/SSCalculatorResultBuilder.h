//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SSCalculatorResultBuilder
{
    _Bool _isCalculation;
    _Bool _isCurrencyConversion;
    NSString *_input;
    NSString *_output;
}

+ (id)yahooAttributionImageWithSize:(struct CGSize)arg1;
+ (_Bool)supportsResult:(id)arg1;
+ (id)bundleId;
- (void).cxx_destruct;
@property(nonatomic) _Bool isCurrencyConversion; // @synthesize isCurrencyConversion=_isCurrencyConversion;
@property(nonatomic) _Bool isCalculation; // @synthesize isCalculation=_isCalculation;
@property(retain, nonatomic) NSString *output; // @synthesize output=_output;
@property(retain, nonatomic) NSString *input; // @synthesize input=_input;
- (id)buildCommand;
- (id)buildCompactCardSection;
- (id)buildInlineCardSections;
- (id)buildResult;
- (id)initWithResult:(id)arg1;

@end

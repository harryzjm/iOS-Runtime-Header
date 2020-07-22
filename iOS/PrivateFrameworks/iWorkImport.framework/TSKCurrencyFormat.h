//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSKCurrencyFormat <NSCopying>
{
    _Bool _showThousandsSeparator;
    _Bool _accountingStyle;
    int _negativeStyle;
    unsigned long long _decimalPlaces;
    unsigned long long _currencyCodeIndex;
}

@property(nonatomic) unsigned long long currencyCodeIndex; // @synthesize currencyCodeIndex=_currencyCodeIndex;
@property(readonly, nonatomic) _Bool accountingStyle; // @synthesize accountingStyle=_accountingStyle;
@property(readonly, nonatomic) _Bool showThousandsSeparator; // @synthesize showThousandsSeparator=_showThousandsSeparator;
@property(readonly, nonatomic) int negativeStyle; // @synthesize negativeStyle=_negativeStyle;
@property(readonly, nonatomic) unsigned long long decimalPlaces; // @synthesize decimalPlaces=_decimalPlaces;
- (id)asCurrencyFormat;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) NSString *currencyCode;
- (id)initWithDecimalPlaces:(unsigned long long)arg1 negativeStyle:(int)arg2 showSeparator:(_Bool)arg3 accountingStyle:(_Bool)arg4 currencyCode:(id)arg5;
- (id)initWithLocale:(id)arg1;
- (id)initWithFormatType:(int)arg1;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TIMathSymbolPunctuationController : NSObject
{
    unsigned long long _state;
    long long _location;
    unsigned short _replacementCharacter;
    _Bool _replaceAfterNumerals;
    _Bool _enabled;
    _Bool _converted;
    NSString *_decimalSeparator;
}

@property(readonly, nonatomic) _Bool converted; // @synthesize converted=_converted;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool replaceAfterNumerals; // @synthesize replaceAfterNumerals=_replaceAfterNumerals;
@property(copy, nonatomic) NSString *decimalSeparator; // @synthesize decimalSeparator=_decimalSeparator;
- (void).cxx_destruct;
- (id)mathSymbolPunctuationedStringForInputString:(id)arg1;
- (void)reset;
- (id)init;

@end

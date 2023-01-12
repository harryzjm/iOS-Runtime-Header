//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _NBNumberFormat : NSObject
{
    _Bool _nationalPrefixOptionalWhenFormatting;
    NSString *_pattern;
    NSString *_format;
    NSArray *_leadingDigitsPatterns;
    NSString *_nationalPrefixFormattingRule;
    NSString *_domesticCarrierCodeFormattingRule;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *domesticCarrierCodeFormattingRule; // @synthesize domesticCarrierCodeFormattingRule=_domesticCarrierCodeFormattingRule;
@property(nonatomic) _Bool nationalPrefixOptionalWhenFormatting; // @synthesize nationalPrefixOptionalWhenFormatting=_nationalPrefixOptionalWhenFormatting;
@property(retain, nonatomic) NSString *nationalPrefixFormattingRule; // @synthesize nationalPrefixFormattingRule=_nationalPrefixFormattingRule;
@property(retain, nonatomic) NSArray *leadingDigitsPatterns; // @synthesize leadingDigitsPatterns=_leadingDigitsPatterns;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) NSString *pattern; // @synthesize pattern=_pattern;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithEntry:(id)arg1;
- (id)initWithPattern:(id)arg1 withFormat:(id)arg2 withLeadingDigitsPatterns:(id)arg3 withNationalPrefixFormattingRule:(id)arg4 whenFormatting:(_Bool)arg5 withDomesticCarrierCodeFormattingRule:(id)arg6;

@end

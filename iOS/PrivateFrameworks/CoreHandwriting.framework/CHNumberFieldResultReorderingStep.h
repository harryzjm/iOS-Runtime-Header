//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSCharacterSet, NSDictionary;

@interface CHNumberFieldResultReorderingStep
{
    NSCharacterSet *_allowedCharacters;
    NSDictionary *_characterReplacements;
}

+ (id)tokenRowAsString:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *characterReplacements; // @synthesize characterReplacements=_characterReplacements;
@property(retain, nonatomic) NSCharacterSet *allowedCharacters; // @synthesize allowedCharacters=_allowedCharacters;
- (id)process:(id)arg1 options:(id)arg2;
- (long long)compareStringForPhoneNumberCompatibility:(id)arg1 with:(id)arg2;
- (long long)countUnallowedCharactersInString:(id)arg1;
- (id)initForDigitFields;
- (id)initForPhoneNumberFields;

@end


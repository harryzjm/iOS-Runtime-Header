//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SCRCMathIdentifierExpression
{
    long long _fontStyle;
}

@property(readonly, nonatomic) long long fontStyle; // @synthesize fontStyle=_fontStyle;
- (_Bool)canFormWordStartingWithExpression:(id)arg1;
- (_Bool)isNaturalSuperscript;
- (_Bool)_isPrime;
- (_Bool)isNumber;
- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2 isPartOfWord:(_Bool)arg3;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppleSpell;

@interface AXMSpellChecker : NSObject
{
    AppleSpell *_spellChecker;
}

@property(retain, nonatomic) AppleSpell *spellChecker; // @synthesize spellChecker=_spellChecker;
- (void).cxx_destruct;
- (_Bool)textContainsMisspelling:(id)arg1 withLanguages:(id)arg2;
- (void)correctSpellingInText:(id)arg1 withLanguages:(id)arg2;

@end

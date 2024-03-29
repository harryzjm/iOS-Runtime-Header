//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (KSExtras)
+ (struct USet *)_nonHiraganaKatakanaOrBopomofoSet;
+ (struct USet *)_nonIdeographicCharacterSet;
+ (struct USet *)_characterSetWithPattern:(id)arg1;
- (_Bool)_containsHiraganaKatakanaOrBopomofo;
- (_Bool)_containsEmoji;
- (_Bool)_containsIdeographicCharacters;
- (_Bool)_containsCJKSymbolsAndPunctuation;
- (_Bool)_contentsExclusivelyInCharacterSet:(struct USet *)arg1;
- (long long)wordCount;
@end


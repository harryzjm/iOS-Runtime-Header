//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSTextPreProcessorRule : NSObject
{
    NSString *_matchPattern;
    NSString *_replacement;
    _Bool _caseSensitive;
    _Bool _eatPunctuation;
}

- (id)matchedString:(id)arg1 forTokenInRange:(CDStruct_912cb5d2 *)arg2;
- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end


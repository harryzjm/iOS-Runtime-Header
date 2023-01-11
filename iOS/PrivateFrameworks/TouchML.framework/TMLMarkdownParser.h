//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSScanner;

@interface TMLMarkdownParser : NSObject
{
    NSArray *_rules;
    NSScanner *_scanner;
    NSMutableDictionary *_attributes;
    NSMutableDictionary *_tag;
    NSArray *_regex;
    NSArray *_extraRules;
    NSArray *_extraRegex;
}

+ (id)stringOfTagType:(id)arg1 andCount:(unsigned long long)arg2;
+ (id)parse:(id)arg1 tags:(id *)arg2 withRules:(id)arg3;
+ (id)postProcessString:(id)arg1;
+ (id)preProcessString:(id)arg1;
+ (id)unescapeString:(id)arg1;
+ (id)regexFromRules:(id)arg1;
- (void).cxx_destruct;
- (_Bool)isListTagOpen:(id)arg1;
- (id)tagFromType:(int)arg1;
- (id)replacestring:(id)arg1 usingRule:(id)arg2 atIndex:(unsigned long long)arg3 additonalRules:(_Bool)arg4;
- (id)parse:(id)arg1 tags:(id *)arg2;
- (id)init;

@end

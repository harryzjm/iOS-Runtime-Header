//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSPersonNameComponents, NSString;

@interface CNNameComponentsStringTokenizer : NSObject
{
    NSString *_string;
    NSPersonNameComponents *_components;
    NSArray *_tokens;
}

+ (id)uncachedNameComponentElements;
+ (id)nameComponentElements;
+ (id)nobiliaryParticleElements;
+ (_Bool)isNobiliaryParticle:(id)arg1;
+ (id)nameSuffixElements;
+ (_Bool)isNameSuffix:(id)arg1;
+ (id)namePrefixElements;
+ (_Bool)isNamePrefix:(id)arg1;
+ (id)whitespaceTokens:(id)arg1;
+ (id)tokensByAdjustingForNobiliaryParticles:(id)arg1;
+ (id)tokensFromString:(id)arg1 nameOrder:(long long *)arg2;
+ (id)componentsFromString:(id)arg1;
@property(retain) NSArray *tokens; // @synthesize tokens=_tokens;
@property(retain) NSPersonNameComponents *components; // @synthesize components=_components;
@property(copy) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (void)extractGivenMiddleFamilyNamesFromWhatsLeftUsingOrder:(long long)arg1;
- (void)adjustTokensForNobiliaryParticles;
- (void)extractNamePrefixFromBeginning;
- (void)extractNameSuffixFromEnd;
- (void)extractNicknameFromQuotedContent;
- (void)removeParentheticalContent;
- (id)parseComponents;
- (id)initWithString:(id)arg1;

@end


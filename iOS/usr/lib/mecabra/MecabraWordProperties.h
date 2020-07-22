//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MecabraWordProperties : NSObject
{
    NSString *_analysisString;
    NSArray *_characterInformation;
    NSArray *_codeLookupInformation;
    _Bool _emoji;
    int _language;
}

+ (id)sortedRadicalList;
+ (id)searchResultsForString:(id)arg1 dictionary:(struct __IDXIndex *)arg2;
+ (struct __IDXIndex *)codeLookupInformationDictionary;
+ (struct __IDXIndex *)characterInformationDictionary;
+ (struct __IDXIndex *)informationDictionaryAtPath:(struct __CFURL *)arg1;
@property(nonatomic) int language; // @synthesize language=_language;
@property(nonatomic, getter=isEmoji) _Bool emoji; // @synthesize emoji=_emoji;
@property(retain, nonatomic) NSArray *codeLookupInformation; // @synthesize codeLookupInformation=_codeLookupInformation;
@property(retain, nonatomic) NSArray *characterInformation; // @synthesize characterInformation=_characterInformation;
@property(copy, nonatomic) NSString *analysisString; // @synthesize analysisString=_analysisString;
- (id)valueForKey:(int)arg1;
- (id)isIncludedInCurrentLanguage;
- (id)cangjieCodes;
- (id)bihuaCodes;
- (id)wubixingCodes;
- (void)dealloc;
- (id)initWithString:(id)arg1 language:(int)arg2;
- (id)separatedInputCodesForString:(id)arg1;
- (id)tonesForString:(id)arg1;
- (id)initialsForStrings:(id)arg1;
- (id)zhuyinInformationForString:(id)arg1;
- (id)pinyinInformationForString:(id)arg1;
- (id)strokeInformationForString:(id)arg1;
- (id)radicalInformationForString:(id)arg1;

@end


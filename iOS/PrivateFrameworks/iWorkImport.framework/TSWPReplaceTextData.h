//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPReplaceTextData : NSObject
{
    NSString *_language;
    NSString *_dictationAndAutocorrection;
}

+ (id)replaceTextData;
+ (id)replaceTextDataWithDictationAndAutocorrection:(id)arg1;
+ (id)replaceTextDataWithLanguage:(id)arg1;
+ (id)replaceTextDataWithLanguage:(id)arg1 dictationAndAutocorrection:(id)arg2;
@property(readonly, copy, nonatomic) NSString *dictationAndAutocorrection; // @synthesize dictationAndAutocorrection=_dictationAndAutocorrection;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
- (id)replaceTextDataByChangingDictationAndAutocorrection:(id)arg1;
- (id)replaceTextDataByChangingLanguage:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDictationAndAutocorrection:(id)arg1;
- (id)initWithLanguage:(id)arg1;
- (id)initWithLanguage:(id)arg1 dictationAndAutocorrection:(id)arg2;

@end

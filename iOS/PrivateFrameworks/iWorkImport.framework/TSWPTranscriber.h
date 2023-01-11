//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLocale, NSString;

__attribute__((visibility("hidden")))
@interface TSWPTranscriber : NSObject
{
    NSString *_displayName;
    NSString *_identifier;
    NSString *_transformIdentifier;
    NSLocale *_romanizationLocale;
}

+ (id)transcriberWithIdentifier:(id)arg1 displayName:(id)arg2 romanizationLocaleID:(id)arg3 transformIdentifier:(id)arg4;
@property(readonly) NSLocale *romanizationLocale; // @synthesize romanizationLocale=_romanizationLocale;
- (void).cxx_destruct;
- (void)transcribeString:(id)arg1 withRange:(struct _NSRange)arg2 locale:(id)arg3 inputLanguage:(id)arg4 block:(CDUnknownBlockType)arg5;
- (id)transcribeText:(id)arg1 withLocale:(id)arg2;
- (id)transcribeText:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 romanizationLocaleID:(id)arg3 transformIdentifier:(id)arg4;

@end


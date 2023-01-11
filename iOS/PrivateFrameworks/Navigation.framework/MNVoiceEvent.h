//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MNVoiceEvent : NSObject
{
    _Bool _isPrivate;
    unsigned long long _options;
    NSString *_textToSpeak;
    unsigned long long _shortPromptType;
    CDUnknownBlockType _completion;
}

+ (_Bool)isValidShortPromptType:(unsigned long long)arg1;
+ (id)eventWithText:(id)arg1 fallbackPrompt:(unsigned long long)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) unsigned long long shortPromptType; // @synthesize shortPromptType=_shortPromptType;
@property(readonly, copy, nonatomic) NSString *textToSpeak; // @synthesize textToSpeak=_textToSpeak;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
- (_Bool)isEqualToEvent:(id)arg1;
- (id)description;
- (id)initWithText:(id)arg1 fallbackPrompt:(unsigned long long)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;

@end

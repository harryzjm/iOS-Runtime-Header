//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface AXMReplacementTag
{
    NSString *_overrideSpeakableText;
    struct _NSRange _overrideRange;
}

+ (id)replacementTagWithSpeakableText:(id)arg1 range:(struct _NSRange)arg2;
- (void).cxx_destruct;
- (struct _NSRange)range;
- (id)originalText;
- (id)speakableText;

@end

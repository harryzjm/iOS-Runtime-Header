//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MFPlainTextDocument, NSArray;

@interface MFOutgoingRichtextMessageContent
{
    _Bool _textPartsAreHTML;
    MFPlainTextDocument *_plaintextAlternative;
    NSArray *_mixedContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *mixedContent; // @synthesize mixedContent=_mixedContent;
@property(retain, nonatomic) MFPlainTextDocument *plaintextAlternative; // @synthesize plaintextAlternative=_plaintextAlternative;
@property(nonatomic) _Bool textPartsAreHTML; // @synthesize textPartsAreHTML=_textPartsAreHTML;
- (id)richtextContent;
- (id)copy;

@end

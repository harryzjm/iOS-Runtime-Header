//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;
@protocol MFMessageBodyElement_Private;

@interface MFMessageBodyOriginalTextSubparser
{
    NSMutableArray *_lastTextElements;
    id <MFMessageBodyElement_Private> _lastNonWhitespaceTextElement;
    CDUnknownBlockType _foundTextBlock;
    CDUnknownBlockType _foundWhitespaceBlock;
    _Bool _foundText;
    _Bool _foundForwardSeparator;
}

- (void)messageBodyParserDidFinishParsing:(id)arg1;
- (void)messageBodyParser:(id)arg1 foundMessageBodyElement:(id)arg2;
- (void)_consumeAnyLastTextElementAsAttribution:(_Bool)arg1;
- (void)_consumeTextElement:(id)arg1 isAttribution:(_Bool)arg2;
- (void)setFoundWhitespaceBlock:(CDUnknownBlockType)arg1;
- (void)setFoundTextBlock:(CDUnknownBlockType)arg1;
- (void)copyBlocks;
- (void)dealloc;

@end


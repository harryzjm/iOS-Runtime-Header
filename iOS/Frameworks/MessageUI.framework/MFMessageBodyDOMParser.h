//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DOMDocument;

@interface MFMessageBodyDOMParser
{
    DOMDocument *_document;
}

+ (_Bool)documentContainsAnyQuotation:(id)arg1;
- (id)rangeFromElement:(id)arg1 toElement:(id)arg2;
- (void)extendRange:(id)arg1 toElement:(id)arg2;
- (id)rangeForElement:(id)arg1;
- (_Bool)parse;
- (void)_consumeAccumulatedNodes:(id)arg1;
- (Class)messageBodyElementClass;
- (void)dealloc;
- (id)initWithDOMDocument:(id)arg1;

@end


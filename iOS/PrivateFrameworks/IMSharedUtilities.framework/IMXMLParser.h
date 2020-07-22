//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <IMSharedUtilities/NSXMLParserDelegate-Protocol.h>

@class IMXMLParserContext, IMXMLParserFrame, NSMutableArray, NSString, NSXMLParser;

@interface IMXMLParser : NSObject <NSXMLParserDelegate>
{
    NSXMLParser *_parser;
    IMXMLParserContext *_context;
    IMXMLParserFrame *_topFrame;
    NSMutableArray *_otherFrames;
    struct _TidyDoc *_tidyDoc;
    struct __CFDictionary *_framespace;
}

+ (id)sharedInstance;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 foundIgnorableWhitespace:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (_Bool)parseContext:(id)arg1;
- (id)_newDataByTidyingData:(id)arg1;
- (void)_teardownTidy;
- (void)_setupTidy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

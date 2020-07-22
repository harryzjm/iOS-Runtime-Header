//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCopying-Protocol.h>
#import <SafariShared/NSXMLParserDelegate-Protocol.h>

@class NSData, NSMutableArray, NSString, WBSFeedElement;
@protocol OS_dispatch_queue, WBSFeedParserDelegate;

@interface WBSFeedParser : NSObject <NSXMLParserDelegate, NSCopying>
{
    NSObject<OS_dispatch_queue> *_parsingQueue;
    NSData *_data;
    WBSFeedElement *_root;
    NSMutableArray *_elementStack;
    id <WBSFeedParserDelegate> _delegate;
}

@property(nonatomic) __weak id <WBSFeedParserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;
- (void)_parseAsAtomFeed;
- (void)_parseAsRSSFeed;
- (void)_parsingFinishedWithMetada:(id)arg1 entries:(id)arg2;
- (void)_parsingFailedWithError:(id)arg1;
- (void)_beginParsingData:(id)arg1;
- (void)startParsing;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

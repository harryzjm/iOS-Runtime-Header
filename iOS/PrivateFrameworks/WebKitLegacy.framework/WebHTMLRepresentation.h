//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebDocumentDOM-Protocol.h>
#import <WebKitLegacy/WebDocumentRepresentation-Protocol.h>

@class NSString, WebHTMLRepresentationPrivate;

@interface WebHTMLRepresentation : NSObject <WebDocumentRepresentation, WebDocumentDOM>
{
    WebHTMLRepresentationPrivate *_private;
}

+ (id)unsupportedTextMIMETypes;
+ (id)supportedImageMIMETypes;
+ (id)supportedNonImageMIMETypes;
+ (id)supportedMediaMIMETypes;
+ (id)supportedMIMETypes;
- (id)matchLabels:(id)arg1 againstElement:(id)arg2;
- (id)searchForLabels:(id)arg1 beforeElement:(id)arg2 resultDistance:(unsigned long long *)arg3 resultIsInCellAbove:(_Bool *)arg4;
- (id)searchForLabels:(id)arg1 beforeElement:(id)arg2;
- (id)controlsInForm:(id)arg1;
- (id)currentForm;
- (id)formForElement:(id)arg1;
- (_Bool)elementIsPassword:(id)arg1;
- (_Bool)elementDoesAutoComplete:(id)arg1;
- (id)elementWithName:(id)arg1 inForm:(id)arg2;
- (id)DOMDocument;
- (id)title;
- (id)documentSource;
- (_Bool)canSaveAsWebArchive;
- (_Bool)canProvideDocumentSource;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (_Bool)_isDisplayingWebArchive;
- (void)setDataSource:(id)arg1;
- (void)_redirectDataToManualLoader:(id)arg1 forPluginView:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


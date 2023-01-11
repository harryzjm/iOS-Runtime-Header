//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentSizerFactory-Protocol.h>

@class NSString;
@protocol SXDataTableTextSourceFactory, SXDocumentControllerProvider, SXTextComponentLayoutHosting;

@interface SXDataTableComponentSizerFactory : NSObject <SXComponentSizerFactory>
{
    id <SXDocumentControllerProvider> _documentControllerProvider;
    id <SXTextComponentLayoutHosting> _textComponentLayoutHosting;
    id <SXDataTableTextSourceFactory> _textSourceFactory;
}

@property(readonly, nonatomic) id <SXDataTableTextSourceFactory> textSourceFactory; // @synthesize textSourceFactory=_textSourceFactory;
@property(readonly, nonatomic) id <SXTextComponentLayoutHosting> textComponentLayoutHosting; // @synthesize textComponentLayoutHosting=_textComponentLayoutHosting;
@property(readonly, nonatomic) id <SXDocumentControllerProvider> documentControllerProvider; // @synthesize documentControllerProvider=_documentControllerProvider;
- (void).cxx_destruct;
- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutAttributes:(id)arg3;
@property(readonly, nonatomic) int role;
@property(readonly, nonatomic) NSString *type;
- (id)initWithDocumentControllerProvider:(id)arg1 textComponentLayoutHosting:(id)arg2 textSourceFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


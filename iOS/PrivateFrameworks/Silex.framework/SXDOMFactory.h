//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXDOMFactory-Protocol.h>

@class NSString;
@protocol SXDocumentProviding;

@interface SXDOMFactory : NSObject <SXDOMFactory>
{
    id <SXDocumentProviding> _documentProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SXDocumentProviding> documentProvider; // @synthesize documentProvider=_documentProvider;
- (id)createDOM;
- (id)initWithDocumentProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

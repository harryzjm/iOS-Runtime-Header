//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentTraitsProvider-Protocol.h>

@class NSString;
@protocol SXDocumentControllerProvider;

@interface SXComponentTraitsProvider : NSObject <SXComponentTraitsProvider>
{
    id <SXDocumentControllerProvider> _documentControllerProvider;
}

@property(readonly, nonatomic) id <SXDocumentControllerProvider> documentControllerProvider; // @synthesize documentControllerProvider=_documentControllerProvider;
- (void).cxx_destruct;
- (unsigned long long)traitsForComponent:(id)arg1;
- (id)initWithDocumentControllerProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


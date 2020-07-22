//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TPPageGenerator-Protocol.h>

@class NSString, TPDocumentRoot;

__attribute__((visibility("hidden")))
@interface TPOrphanPageGenerator : NSObject <TPPageGenerator>
{
    TPDocumentRoot *_documentRoot;
}

- (void).cxx_destruct;
- (void)createOrUpdatePageHintInSectionHint:(id)arg1 withState:(id)arg2;
- (_Bool)wantsPageInSectionHint:(id)arg1 withState:(id)arg2;
- (id)init;
- (id)initWithDocumentRoot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

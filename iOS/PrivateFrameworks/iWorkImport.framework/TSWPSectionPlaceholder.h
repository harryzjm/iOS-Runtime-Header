//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSKModel-Protocol.h>
#import <iWorkImport/TSWPSection-Protocol.h>

@class NSString, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPSectionPlaceholder <TSKDocumentObject, TSWPSection, TSKModel>
{
    TSWPStorage *_parentStorage;
}

+ (_Bool)needsObjectUUID;
@property(nonatomic) TSWPStorage *parentStorage; // @synthesize parentStorage=_parentStorage;
- (id)pageMasterOwningModel:(id)arg1;
- (void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


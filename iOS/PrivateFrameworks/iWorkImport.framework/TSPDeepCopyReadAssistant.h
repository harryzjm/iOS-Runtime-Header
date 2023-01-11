//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPDecoderReadCoordinatorDelegate-Protocol.h>

@class NSDictionary, NSString, TSPComponent, TSPDeepCopyObjectMap, TSPObject, TSPObjectContext;

__attribute__((visibility("hidden")))
@interface TSPDeepCopyReadAssistant : NSObject <TSPDecoderReadCoordinatorDelegate>
{
    TSPObjectContext *_context;
    TSPDeepCopyObjectMap *_objectMap;
    TSPObject *_cachedMetadataObject;
    NSDictionary *_cachedDataMap;
    TSPComponent *_component;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isCrossAppPaste;
@property(readonly, nonatomic) _Bool isCrossDocumentPaste;
@property(readonly, nonatomic) long long sourceType;
@property(readonly, nonatomic) _Bool hasDocumentVersionUUID;
@property(readonly, nonatomic) unsigned long long fileFormatVersion;
- (_Bool)shouldDecodeMissingDataAsRemote;
- (id)dataInfoForIdentifier:(long long)arg1;
- (id)cachedDataForIdentifier:(long long)arg1;
- (id)objectUUIDForExternalReferenceToIdentifier:(long long)arg1;
- (long long)objectIdentifierForUUID:(id)arg1;
- (_Bool)shouldResolveExternalReferencesUsingObjectUUID;
- (_Bool)canResolveExternalReferences;
- (id)rootObjectComponent;
- (_Bool)processMetadataObject:(id)arg1 error:(id *)arg2;
- (id)metadataComponent;
- (id)cachedMetadataObject;
- (id)decodeDeepCopySerializedData:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithContext:(id)arg1 objectMap:(id)arg2 cachedMetadataObject:(id)arg3 cachedDataMap:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


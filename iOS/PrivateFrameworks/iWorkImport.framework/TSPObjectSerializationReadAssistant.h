//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPDecoderReadCoordinatorDelegate-Protocol.h>

@class NSDictionary, NSString, NSURL, TSPComponent, TSPObjectContext;

__attribute__((visibility("hidden")))
@interface TSPObjectSerializationReadAssistant : NSObject <TSPDecoderReadCoordinatorDelegate>
{
    TSPObjectContext *_context;
    NSURL *_resourcesFolderURL;
    NSDictionary *_identiferToResourceNameDictionary;
    NSDictionary *_identifierToObjectUUIDDictionary;
    NSDictionary *_dataInfos;
    TSPComponent *_rootObjectComponent;
    _Bool _deserializeAsPasteboard;
    _Bool _resetObjectUUIDs;
    _Bool _shouldDecodeMissingDataAsRemote;
    _Bool _isCrossDocumentPaste;
    _Bool _isCrossAppPaste;
}

@property(nonatomic) _Bool isCrossAppPaste; // @synthesize isCrossAppPaste=_isCrossAppPaste;
@property(nonatomic) _Bool isCrossDocumentPaste; // @synthesize isCrossDocumentPaste=_isCrossDocumentPaste;
- (void).cxx_destruct;
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
- (id)decodeObjectWithData:(id)arg1 packageURL:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)initWithContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


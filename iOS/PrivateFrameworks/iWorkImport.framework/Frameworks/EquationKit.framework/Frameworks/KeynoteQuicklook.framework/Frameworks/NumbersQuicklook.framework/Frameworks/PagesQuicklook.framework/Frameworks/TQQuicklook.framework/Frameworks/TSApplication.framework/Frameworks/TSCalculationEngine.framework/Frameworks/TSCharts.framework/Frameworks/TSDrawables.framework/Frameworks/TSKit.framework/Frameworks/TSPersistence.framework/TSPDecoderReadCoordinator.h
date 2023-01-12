//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSObject, NSString, TSPComponent, TSPDocumentLoadValidationPolicy, TSPFinalizeHandlerQueue, TSPObjectContext;
@protocol OS_dispatch_queue, TSPDecoder, TSPDecoderReadCoordinatorDelegate;

@interface TSPDecoderReadCoordinator
{
    id <TSPDecoder> _decoder;
    TSPObjectContext *_context;
    TSPFinalizeHandlerQueue *_finalizeHandlerQueue;
    id <TSPDecoderReadCoordinatorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dataQueue;
    TSPComponent *_rootObjectComponent;
    NSMapTable *_objects;
}

- (void).cxx_destruct;
- (_Bool)readLazyReference:(id)arg1 object:(id *)arg2 error:(id *)arg3;
- (id)objectForIdentifier:(long long)arg1;
- (_Bool)isCrossAppPaste;
- (_Bool)isCrossDocumentPaste;
- (unsigned int)sourceType;
- (_Bool)hasDocumentVersionUUID;
- (void)reader:(id)arg1 didReadLazyReference:(id)arg2;
- (void)reader:(id)arg1 didUnarchiveObject:(id)arg2;
- (void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(_Bool)arg3 allowUnknownObject:(_Bool)arg4 objectClass:(Class)arg5 objectProtocol:(id)arg6 fromParentObject:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(_Bool)arg4 allowUnknownObject:(_Bool)arg5 objectClass:(Class)arg6 objectProtocol:(id)arg7 fromParentObject:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2;
- (long long)reader:(id)arg1 wantsObjectIdentifierForUUID:(id)arg2;
- (void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2;
- (id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(_Bool)arg3;
- (id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(_Bool)arg2;
- (id)context;
@property(readonly, nonatomic) _Bool isReadingFromDocument;
- (id)baseObjectUUID;
- (unsigned char)packageIdentifier;
- (unsigned long long)readVersion;
- (unsigned long long)fileFormatVersion;
- (void)readComponent:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readRootObjectWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didUpdateLazyReferenceDelegate:(id)arg1;
- (_Bool)endReading;
- (_Bool)isExternalLazyReference:(id)arg1;
- (id)initWithDecoder:(id)arg1 context:(id)arg2 finalizeHandlerQueue:(id)arg3 delegate:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) TSPDocumentLoadValidationPolicy *documentLoadValidationPolicy;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


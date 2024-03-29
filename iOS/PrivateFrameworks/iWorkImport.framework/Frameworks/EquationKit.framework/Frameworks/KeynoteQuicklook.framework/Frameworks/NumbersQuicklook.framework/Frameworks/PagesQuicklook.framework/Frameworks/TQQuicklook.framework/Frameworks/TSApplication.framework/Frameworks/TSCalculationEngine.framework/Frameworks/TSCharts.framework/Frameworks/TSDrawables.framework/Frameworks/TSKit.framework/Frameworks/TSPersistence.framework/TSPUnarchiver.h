//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID, TSPObjectContext, TSPUnknownContent, _TtC13TSPersistence23TSPMutableIdentifierSet;
@protocol TSPLazyReferenceDelegate, TSPObjectDelegate, TSPUnarchiverDelegate;

@interface TSPUnarchiver : NSObject
{
    _Atomic Class _objectClass;
    unique_ptr_f0def102 _message;
    long long _objectIdentifier;
    unique_ptr_3df01401 _strongReferences;
    unsigned long long _messageVersion;
    TSPUnknownContent *_unknownContent;
    id <TSPObjectDelegate> _objectDelegate;
    id <TSPLazyReferenceDelegate> _lazyReferenceDelegate;
    id <TSPUnarchiverDelegate> _delegate;
    struct vector<TSP::UnarchiverReference, std::allocator<TSP::UnarchiverReference>> _references;
    struct vector<TSP::UnarchiverRepeatedReference, std::allocator<TSP::UnarchiverRepeatedReference>> _repeatedReferences;
    struct vector<void (^)(), std::allocator<void (^)()>> _finalizeHandlers;
    void *_currentFieldPath;
    _Bool _hasAlternateMessages;
    unsigned int _messageType;
    Class _unarchiveClass;
    _TtC13TSPersistence23TSPMutableIdentifierSet *_dataReferences;
}

+ (id)stringForSelector:(SEL)arg1 objectClass:(Class)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) _TtC13TSPersistence23TSPMutableIdentifierSet *dataReferences; // @synthesize dataReferences=_dataReferences;
@property(readonly, nonatomic) __weak id <TSPUnarchiverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak id <TSPObjectDelegate> objectDelegate; // @synthesize objectDelegate=_objectDelegate;
@property(readonly, nonatomic) _Bool hasAlternateMessages; // @synthesize hasAlternateMessages=_hasAlternateMessages;
@property(readonly, nonatomic) TSPUnknownContent *unknownContent; // @synthesize unknownContent=_unknownContent;
@property(readonly, nonatomic) long long objectIdentifier; // @synthesize objectIdentifier=_objectIdentifier;
@property(readonly, nonatomic) Class unarchiveClass; // @synthesize unarchiveClass=_unarchiveClass;
@property(readonly, nonatomic) unsigned long long messageVersion; // @synthesize messageVersion=_messageVersion;
@property(readonly, nonatomic) unsigned int messageType; // @synthesize messageType=_messageType;
- (void)readRepeatedUnknownLazyReferenceMessage:(const void *)arg1 ownershipMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readUnknownLazyReferenceMessage:(const void *)arg1 ownershipMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)validateReferenceToObjectIdentifier:(long long)arg1 objectClass:(Class)arg2 isWeak:(_Bool *)arg3 validateStrongReferences:(_Bool)arg4 selector:(SEL)arg5 weakSelector:(SEL)arg6;
@property(readonly, nonatomic) _Bool canValidateReferences;
- (void *)finalizeHandlers;
- (void *)repeatedReferences;
- (void *)references;
- (void *)strongReferences;
@property(readonly, nonatomic) NSUUID *objectUUID;
- (id)initWithMessageType:(unsigned int)arg1 unarchiveClass:(Class)arg2 message:(unique_ptr_f0def102)arg3 identifier:(long long)arg4 strongReferences:(unique_ptr_3df01401)arg5 messageVersion:(unsigned long long)arg6 unknownContent:(id)arg7 hasAlternateMessages:(_Bool)arg8 objectDelegate:(id)arg9 lazyReferenceDelegate:(id)arg10 delegate:(id)arg11;
- (id)readRepeatedWeakObjectUUIDPathReferenceMessage:(const void *)arg1 referenceMessage:(void *)arg2 delegate:(id)arg3;
- (id)readRepeatedWeakObjectUUIDPathReferenceMessage:(const void *)arg1 class:(Class)arg2 protocol:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)readRepeatedWeakObjectUUIDPathReferenceMessage:(const void *)arg1;
- (id)readRepeatedWeakObjectUUIDReferenceMessage:(const void *)arg1 referenceMessage:(void *)arg2 delegate:(id)arg3;
- (id)readRepeatedWeakObjectUUIDReferenceMessage:(const void *)arg1 class:(Class)arg2 protocol:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)readRepeatedWeakObjectUUIDReferenceMessage:(const void *)arg1;
- (void)readWeakReferenceToObjectUUID:(id)arg1 delegate:(id)arg2 class:(Class)arg3 protocol:(id)arg4 selector:(SEL)arg5 completion:(CDUnknownBlockType)arg6;
- (id)readWeakObjectUUIDPathReferenceMessage:(const void *)arg1 class:(Class)arg2 protocol:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)readWeakObjectUUIDPathReferenceMessage:(const void *)arg1;
- (id)readWeakObjectUUIDReferenceMessage:(const void *)arg1 class:(Class)arg2 protocol:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)readWeakObjectUUIDReferenceMessage:(const void *)arg1;
@property(readonly, nonatomic) unsigned int sourceType;
@property(readonly, nonatomic) _Bool hasDocumentVersionUUID;
- (void)addFinalizeHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long readVersion;
@property(readonly, nonatomic) _Bool documentHasCurrentFileFormatVersion;
@property(readonly, nonatomic) unsigned long long fileFormatVersion;
- (id)readDataReferenceMessage:(const void *)arg1;
- (void)readRepeatedLazyReferenceMessage:(const void *)arg1 ownershipMode:(long long)arg2 validateStrongReferences:(_Bool)arg3 allowUnknownObject:(_Bool)arg4 class:(Class)arg5 protocol:(id)arg6 validateClass:(_Bool)arg7 selector:(SEL)arg8 delegate:(id)arg9 completion:(CDUnknownBlockType)arg10;
- (void)readRepeatedWeakLazyReferenceMessage:(const void *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readRepeatedWeakLazyReferenceMessage:(const void *)arg1 class:(Class)arg2 protocol:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)readRepeatedLazyReferenceMessage:(const void *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readRepeatedLazyReferenceMessage:(const void *)arg1 class:(Class)arg2 protocol:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)readLazyReferenceMessage:(const void *)arg1 ownershipMode:(long long)arg2 validateStrongReferences:(_Bool)arg3 allowUnknownObject:(_Bool)arg4 class:(Class)arg5 protocol:(id)arg6 validateClass:(_Bool)arg7 selector:(SEL)arg8 delegate:(id)arg9 completion:(CDUnknownBlockType)arg10;
- (void)readWeakLazyReferenceMessage:(const void *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readWeakLazyReferenceMessage:(const void *)arg1 class:(Class)arg2 protocol:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)readLazyReferenceMessage:(const void *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readLazyReferenceMessage:(const void *)arg1 class:(Class)arg2 protocol:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)readRepeatedReferenceMessage:(const void *)arg1 isWeak:(_Bool)arg2 validateStrongReferences:(_Bool)arg3 allowUnknownObject:(_Bool)arg4 class:(Class)arg5 protocol:(id)arg6 validateClass:(_Bool)arg7 selector:(SEL)arg8 completion:(CDUnknownBlockType)arg9;
- (void)readRepeatedUnownedReferenceMessage:(const void *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readRepeatedUnownedReferenceMessage:(const void *)arg1 class:(Class)arg2 protocol:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)readRepeatedWeakReferenceMessage:(const void *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readRepeatedWeakReferenceMessage:(const void *)arg1 class:(Class)arg2 protocol:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)readRepeatedReferenceMessage:(const void *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readRepeatedReferenceMessage:(const void *)arg1 class:(Class)arg2 protocol:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)readReferenceMessage:(const void *)arg1 isWeak:(_Bool)arg2 validateStrongReferences:(_Bool)arg3 allowUnknownObject:(_Bool)arg4 class:(Class)arg5 protocol:(id)arg6 validateClass:(_Bool)arg7 selector:(SEL)arg8 weakSelector:(SEL)arg9 completion:(CDUnknownBlockType)arg10;
- (void)readUnownedReferenceMessage:(const void *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readUnownedReferenceMessage:(const void *)arg1 class:(Class)arg2 protocol:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)readWeakReferenceMessage:(const void *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readWeakReferenceMessage:(const void *)arg1 class:(Class)arg2 protocol:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)readReferenceMessage:(const void *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readReferenceMessage:(const void *)arg1 class:(Class)arg2 protocol:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pushScopeForField:(int)arg1 message:(const struct Message *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (const struct Message *)p_messageWithDescriptor:(const void *)arg1;
- (const struct Message *)messageWithDescriptor:(const void *)arg1;
- (const struct Message *)message;
@property(readonly, nonatomic) Class objectClass;
@property(readonly, nonatomic) __weak TSPObjectContext *context;
- (void)dealloc;
- (void)readWeakReferenceMessage:(const void *)arg1 class:(Class)arg2 protocol:(id)arg3 repeatedMessage:(const void *)arg4 class:(Class)arg5 protocol:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)readReferenceMessage:(const void *)arg1 class:(Class)arg2 protocol:(id)arg3 repeatedMessage:(const void *)arg4 class:(Class)arg5 protocol:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)readWeakReferenceMessage1:(const void *)arg1 class:(Class)arg2 protocol:(id)arg3 message2:(const void *)arg4 class:(Class)arg5 protocol:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)readReferenceMessage1:(const void *)arg1 class:(Class)arg2 protocol:(id)arg3 message2:(const void *)arg4 class:(Class)arg5 protocol:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void *)filterIdentifiers:(const void *)arg1;
@property(readonly, nonatomic) unsigned long long preUFFVersion;
@property(readonly, nonatomic) _Bool hasPreUFFVersion;
- (id)readSparseWeakObjectUUIDPathReferenceArrayMessage:(const void *)arg1;
- (id)readSparseWeakObjectUUIDReferenceArrayMessage:(const void *)arg1;
- (void)readSparseReferenceArrayMessage:(const void *)arg1 isWeak:(_Bool)arg2 class:(Class)arg3 protocol:(id)arg4 validateClass:(_Bool)arg5 selector:(SEL)arg6 completion:(CDUnknownBlockType)arg7;
- (void)readSparseWeakReferenceArrayMessage:(const void *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readSparseWeakReferenceArrayMessage:(const void *)arg1 class:(Class)arg2 protocol:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)readSparseReferenceArrayMessage:(const void *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readSparseReferenceArrayMessage:(const void *)arg1 class:(Class)arg2 protocol:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) _Bool isCrossAppPaste;
@property(readonly, nonatomic) _Bool isCrossDocumentPaste;
@property(readonly, nonatomic) _Bool isFromCopy;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMapTable, NSMutableArray, NSMutableSet, NSOperationQueue, NSProgress, NSSet, NSString, NSURL, NSUUID, SFUCryptoKey, TSPDocumentLoadValidationPolicy, TSPDocumentSaveValidationPolicy, TSPObjectContext, TSUTemporaryDirectory;
@protocol NSFilePresenter, OS_dispatch_queue, TSADocumentPassphraseProvider, TSAImportDelegate, TSKImporter;

@interface TSAImportController : NSObject
{
    NSURL *_temporaryURL;
    TSUTemporaryDirectory *_temporaryDFFDirectory;
    NSMutableSet *_importWarnings;
    NSURL *_presentedItemURL;
    NSOperationQueue *_presentedItemOperationQueue;
    NSMutableArray *_deferredWriters;
    NSProgress *_resourceAccessProgress;
    struct {
        unsigned int isPasswordProtected:1;
        unsigned int isCleanedUp:1;
    } _flags;
    _Bool _temporaryURLShouldBeAppropriateForReplacingSourcePath;
    id <TSKImporter> _importer;
    id <TSAImportDelegate> _delegate;
    NSString *_sourcePath;
    TSUTemporaryDirectory *_temporaryDirectory;
    TSPObjectContext *_documentContext;
    id <TSADocumentPassphraseProvider> _passphraseProvider;
    NSURL *_fileURL;
    NSObject<OS_dispatch_queue> *_importQueue;
    NSString *_documentType;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *documentType; // @synthesize documentType=_documentType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *importQueue; // @synthesize importQueue=_importQueue;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(nonatomic) __weak id <TSADocumentPassphraseProvider> passphraseProvider; // @synthesize passphraseProvider=_passphraseProvider;
@property(readonly, nonatomic) TSPObjectContext *documentContext; // @synthesize documentContext=_documentContext;
@property(readonly, nonatomic) TSUTemporaryDirectory *temporaryDirectory; // @synthesize temporaryDirectory=_temporaryDirectory;
@property(nonatomic) _Bool temporaryURLShouldBeAppropriateForReplacingSourcePath; // @synthesize temporaryURLShouldBeAppropriateForReplacingSourcePath=_temporaryURLShouldBeAppropriateForReplacingSourcePath;
@property(readonly, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
@property(nonatomic) id <TSAImportDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <TSKImporter> importer; // @synthesize importer=_importer;
@property(readonly, copy) NSURL *presentedItemURL; // @synthesize presentedItemURL=_presentedItemURL;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue=_presentedItemOperationQueue;
- (void)resumeSaveAndAutosaveWithReason:(id)arg1;
- (void)suspendSaveAndAutosaveWithReason:(id)arg1;
- (void)resumeAutosaveWithReason:(id)arg1;
- (void)suspendAutosaveWithReason:(id)arg1;
@property(readonly, nonatomic) _Bool areNewExternalReferencesToDataAllowed;
- (void)addPersistenceWarnings:(id)arg1;
- (void)presentPersistenceError:(id)arg1;
- (id)additionalResourceRequestsForObjectContext:(id)arg1;
@property(readonly, nonatomic) NSDictionary *additionalDocumentSupportPropertiesForWrite;
@property(readonly, nonatomic) NSDictionary *additionalDocumentPropertiesForWrite;
- (id)packageDataForWrite;
@property(readonly, nonatomic) _Bool ignoreDocumentSupport;
- (void)addIncompatibleMediaContainer:(id)arg1 incompatibleData:(id)arg2 compatibilityLevel:(long long)arg3;
- (void)removeWarning:(id)arg1;
- (void)addWarning:(id)arg1;
- (id)warnings;
@property(readonly, nonatomic) _Bool hasWarnings;
- (id)documentProvider;
- (id)defaultDraftName;
- (id)name;
- (id)logContext;
- (void)_setPresentedItemURL:(id)arg1;
- (void)removeFilePresenter;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;
- (id)importErrorWithCode:(long long)arg1 description:(id)arg2 failureReason:(id)arg3 underlyingError:(id)arg4;
@property(readonly, nonatomic) _Bool isBrowsingVersions;
@property(readonly, nonatomic) _Bool isPasswordProtected;
- (void)cancelImport;
- (void)finishImportWithProgress:(id)arg1 success:(_Bool)arg2 error:(id)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)willSaveImportedDocument;
- (void)_performImportWithProgress:(id)arg1 completedSteps:(int)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)_saveContextToTemporaryURL:(id)arg1 passphrase:(id)arg2 originalURL:(id)arg3 documentUUID:(id)arg4 error:(id *)arg5;
- (_Bool)needsFileCoordination;
- (id)templateDocumentWithName:(id)arg1 variantIndex:(unsigned long long)arg2;
- (id)makeObjectContextWithTemplateDocument:(id)arg1 error:(id *)arg2;
- (void)_continueImportWithProgress:(id)arg1 success:(_Bool)arg2 error:(id)arg3 completedSteps:(int)arg4 completionQueue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_beginImportWithProgress:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)showProgressIfNeeded:(id)arg1 forURL:(id)arg2;
- (void)retrievePassphraseForEncryptedDocumentWithImporter:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool shouldUpdateAdditionalResourceRequestsAfterImport;
- (Class)importerClass;
- (void)importWithProgress:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)prepareForImportDisplayingProgress:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)importWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSURL *temporaryURL;
@property(readonly, nonatomic) long long documentTypeCategory;
- (void)dealloc;
- (id)initWithPath:(id)arg1 documentType:(id)arg2 delegate:(id)arg3;
- (id)initWithPath:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) NSUUID *baseUUIDForObjectUUID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) TSPDocumentLoadValidationPolicy *documentLoadValidationPolicy;
@property(readonly, nonatomic) TSPDocumentSaveValidationPolicy *documentSaveValidationPolicy;
@property(readonly) SFUCryptoKey *encryptionKey;
@property(readonly, nonatomic) id <NSFilePresenter> filePresenter;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSMapTable *incompatibleMediaContainersWithDataUnsupportedOnAllDevices;
@property(readonly, nonatomic) NSMapTable *incompatibleMediaContainersWithDataUnsupportedOnThisDevice;
@property(readonly, nonatomic) _Bool isDocumentSupportTemporary;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end


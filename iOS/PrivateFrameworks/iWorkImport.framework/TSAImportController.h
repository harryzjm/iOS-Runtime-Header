//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSFilePresenter-Protocol.h>
#import <iWorkImport/TSDImportExportDelegate-Protocol.h>
#import <iWorkImport/TSPObjectContextDelegate-Protocol.h>

@class NSDictionary, NSError, NSMutableArray, NSMutableSet, NSOperationQueue, NSProgress, NSSet, NSString, NSURL, NSUUID, TSPObjectContext, TSUProgressContext, TSUTemporaryDirectory;
@protocol NSFilePresenter, OS_dispatch_group, TSAImportDelegate, TSKImporter;

__attribute__((visibility("hidden")))
@interface TSAImportController : NSObject <TSPObjectContextDelegate, NSFilePresenter, TSDImportExportDelegate>
{
    TSUTemporaryDirectory *_temporaryDirectory;
    TSUTemporaryDirectory *_temporaryDFFDirectory;
    NSString *_documentType;
    NSObject<OS_dispatch_group> *_passphraseCompletionGroup;
    NSMutableSet *_importWarnings;
    NSURL *_presentedItemURL;
    NSOperationQueue *_presentedItemOperationQueue;
    NSMutableArray *_deferredWriters;
    NSProgress *_resourceAccessProgress;
    struct {
        unsigned int success:1;
        unsigned int isPasswordProtected:1;
        unsigned int isCleanedUp:1;
        unsigned int isImportCancelled:1;
        unsigned int preserveDocumentAfterImport:1;
        unsigned int shouldNotifyProgress:1;
    } _flags;
    id <TSKImporter> _importer;
    id <TSAImportDelegate> _delegate;
    NSString *_sourcePath;
    NSError *_error;
    TSPObjectContext *_documentContext;
    TSUProgressContext *_progressContext;
    NSURL *_fileURL;
}

@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) TSUProgressContext *progressContext; // @synthesize progressContext=_progressContext;
@property(readonly, nonatomic) TSPObjectContext *documentContext; // @synthesize documentContext=_documentContext;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
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
- (id)defaultDraftName;
- (id)name;
- (id)sharingStateForContext:(id)arg1;
- (void)_setPresentedItemURL:(id)arg1;
- (void)removeFilePresenter;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;
- (id)_prepareTemplate:(id)arg1;
- (id)importErrorWithCode:(long long)arg1 description:(id)arg2 failureReason:(id)arg3 underlyingError:(id)arg4;
@property(nonatomic) _Bool preserveDocumentAfterImport;
@property(readonly, nonatomic) _Bool isBrowsingVersions;
@property(readonly, nonatomic) _Bool isPasswordProtected;
@property(readonly, nonatomic) _Bool isImportCancelled;
- (void)cancelImport;
- (void)finishImportWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)didSaveImportedDocumentWithPassphrase:(id)arg1;
- (void)willSaveImportedDocument;
- (void)_performImportWithCompletedSteps:(int)arg1;
- (_Bool)_saveContextToTemporaryURL:(id)arg1 passphrase:(id)arg2 originalURL:(id)arg3 documentUUID:(id)arg4 error:(id *)arg5;
- (_Bool)needsFileCoordination;
- (id)templateInfoWithName:(id)arg1 variantIndex:(unsigned long long)arg2;
- (id)templateInfoWithName:(id)arg1;
- (id)makeObjectContextWithTemplateInfo:(id)arg1 error:(id *)arg2;
- (void)_continueImportWithSuccess:(_Bool)arg1 error:(id)arg2 completedSteps:(int)arg3;
- (void)_beginImport;
- (void)showProgressIfNeededForURL:(id)arg1;
- (void)retrievePassphraseForEncryptedDocumentWithImporter:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool shouldUpdateAdditionalResourceRequestsAfterImport;
- (Class)importerClass;
- (void)beginImportAsync;
- (_Bool)beginImport;
- (void)prepareForImportDisplayingProgress:(_Bool)arg1;
- (_Bool)import;
@property(readonly, nonatomic) NSURL *temporaryURL;
@property(readonly, nonatomic) long long documentTypeCategory;
- (void)dealloc;
- (id)initWithPath:(id)arg1 documentType:(id)arg2 delegate:(id)arg3;
- (id)initWithPath:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) NSUUID *baseUUIDForObjectUUID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <NSFilePresenter> filePresenter;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *incompatibleMediaContainersWithDataUnsupportedOnAllDevices;
@property(readonly, nonatomic) NSDictionary *incompatibleMediaContainersWithDataUnsupportedOnThisDevice;
@property(readonly, nonatomic) _Bool isDocumentSupportTemporary;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end


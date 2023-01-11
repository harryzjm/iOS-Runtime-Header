//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebCore/AbstractPasteboard-Protocol.h>

@class NSArray, NSString;

@interface WebItemProviderPasteboard : NSObject <AbstractPasteboard>
{
    struct RetainPtr<NSArray> _itemProviders;
    struct RetainPtr<NSArray> _supportedTypeIdentifiers;
    struct RetainPtr<WebItemProviderRegistrationInfoList> _stagedRegistrationInfoList;
    struct Vector<WTF::RetainPtr<WebItemProviderLoadResult>, 0, WTF::CrashOnOverflow, 16> _loadResults;
    long long _numberOfItems;
    long long _changeCount;
    long long _pendingOperationCount;
}

+ (id)sharedInstance;
@property(nonatomic) long long pendingOperationCount; // @synthesize pendingOperationCount=_pendingOperationCount;
@property(nonatomic) long long changeCount; // @synthesize changeCount=_changeCount;
@property(nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)takeRegistrationList;
- (void)stageRegistrationList:(id)arg1;
- (void)enumerateItemProvidersWithBlock:(CDUnknownBlockType)arg1;
- (void)decrementPendingOperationCount;
- (void)incrementPendingOperationCount;
@property(readonly, nonatomic) _Bool hasPendingOperation;
- (id)itemProviderAtIndex:(unsigned long long)arg1;
- (void)doAfterLoadingProvidedContentIntoFileURLs:(CDUnknownBlockType)arg1 synchronousTimeout:(double)arg2;
- (void)doAfterLoadingProvidedContentIntoFileURLs:(CDUnknownBlockType)arg1;
- (id)typeIdentifiersToLoadForRegisteredTypeIdentfiers:(id)arg1;
@property(readonly, nonatomic) long long numberOfFiles;
@property(readonly, nonatomic) NSArray *allDroppedFileURLs;
- (id)preferredFileUploadURLAtIndex:(unsigned long long)arg1 fileType:(id *)arg2;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)dataForPasteboardType:(id)arg1;
- (id)_preLoadedDataConformingToType:(id)arg1 forItemProviderAtIndex:(unsigned long long)arg2;
@property(copy, nonatomic) NSArray *itemProviders;
- (id)pasteboardTypes;
- (id)pasteboardTypesByFidelityForItemAtIndex:(unsigned long long)arg1;
- (void)updateSupportedTypeIdentifiers:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


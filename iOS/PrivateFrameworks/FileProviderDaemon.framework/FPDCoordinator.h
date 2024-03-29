//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPDExtensionManager, NSFileCoordinator, NSMutableSet, NSOperationQueue;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDCoordinator : NSObject
{
    NSMutableSet *_currentlyAccessedURLs;
    NSFileCoordinator *_fileCoordinator;
    NSOperationQueue *_coordinationQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    FPDExtensionManager *_extensionManager;
}

+ (id)requestForClaimID:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak FPDExtensionManager *extensionManager; // @synthesize extensionManager=_extensionManager;
- (void)coordinateForMovingFromURL:(id)arg1 toURL:(id)arg2 request:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)coordinateForMovingFromURL:(id)arg1 toURL:(id)arg2 toTargetFolderURL:(id)arg3 targetMaterializeOption:(unsigned long long)arg4 sourceMaterializeOption:(unsigned long long)arg5 request:(id)arg6 handler:(CDUnknownBlockType)arg7;
- (id)_readingIntentWithURL:(id)arg1 materializeOption:(unsigned long long)arg2;
- (void)coordinateForCopyingFromURL:(id)arg1 toURL:(id)arg2 request:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)coordinateAtURL:(id)arg1 recursively:(_Bool)arg2 request:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)resolveItemOrURL:(id)arg1 recursively:(_Bool)arg2 coordinateIfExport:(_Bool)arg3 request:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)resolveItemOrURL:(id)arg1 recursively:(_Bool)arg2 request:(id)arg3 andCoordinateWithHandler:(CDUnknownBlockType)arg4;
- (void)resolveItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveItem:(id)arg1 recursively:(_Bool)arg2 request:(id)arg3 andCoordinateWithHandler:(CDUnknownBlockType)arg4;
- (void)stopAccessingAllURLs;
- (void)stopAccessingURL:(id)arg1;
- (void)startAccessingURLForAtomDuration:(id)arg1;
- (void)dealloc;
- (void)cancel;
- (id)initWithExtensionManager:(id)arg1 callbackQueue:(id)arg2;

@end


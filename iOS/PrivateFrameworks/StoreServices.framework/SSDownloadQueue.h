//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/SSDownloadManagerObserverPrivate-Protocol.h>

@class NSArray, NSSet, NSString, SSDownloadManager;

@interface SSDownloadQueue : NSObject <SSDownloadManagerObserverPrivate>
{
    _Bool _autoFinishDownloads;
    SSDownloadManager *_downloadManager;
    struct __CFSet *_observers;
}

+ (id)softwareApplicationDownloadKinds;
+ (id)mediaDownloadKinds;
@property(nonatomic) _Bool shouldAutomaticallyFinishDownloads; // @synthesize shouldAutomaticallyFinishDownloads=_autoFinishDownloads;
- (void)_handleDownloadsRemoved:(id)arg1;
- (void)_handleDownloadsDidChange:(id)arg1;
- (void)_sendQueuePreOrdersChanged;
- (void)_sendQueueNetworkUsageChanged;
- (void)_sendQueueChangedWithRemovals:(id)arg1;
- (void)_sendDownloadStatusChangedAtIndex:(long long)arg1;
- (void)_messageObserversWithFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)downloadManagerNetworkUsageDidChange:(id)arg1;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2;
- (_Bool)startPreOrderDownload:(id)arg1;
- (void)removePlaceholderDownload:(id)arg1;
@property(readonly, nonatomic) NSArray *preorders;
@property(readonly, nonatomic) NSArray *placeholderDownloads;
- (id)downloadForItemIdentifier:(unsigned long long)arg1;
- (void)addPlaceholderDownloads:(id)arg1;
- (void)removeObserver:(id)arg1;
- (_Bool)reloadFromServer;
@property(readonly, getter=isUsingNetwork) _Bool usingNetwork;
- (void)getDownloadsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *downloads;
@property(readonly) SSDownloadManager *downloadManager;
@property(readonly) NSSet *downloadKinds;
- (_Bool)canCancelDownload:(id)arg1;
- (_Bool)cancelDownload:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)addDownload:(id)arg1;
- (void)dealloc;
- (id)initWithDownloadManagerOptions:(id)arg1;
- (id)initWithDownloadKinds:(id)arg1;
- (id)init;
- (id)_initWithDownloadManagerOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

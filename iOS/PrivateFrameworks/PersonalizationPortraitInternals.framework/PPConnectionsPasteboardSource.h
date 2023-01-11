//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PersonalizationPortraitInternals/PPConnectionsLocationSource-Protocol.h>

@class NSCache, NSLocale, NSObject, NSOperationQueue, NSString;
@protocol OS_dispatch_semaphore;

@interface PPConnectionsPasteboardSource <PPConnectionsLocationSource>
{
    unsigned long long _pasteboardNotificationState;
    NSCache *_cache;
    id _pasteboardObserver;
    NSObject<OS_dispatch_semaphore> *_init_sem;
    NSOperationQueue *_pbQueue;
    NSLocale *_testLocale;
}

+ (id)identifier;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(id)arg6;
- (id)supportedSemanticTags;
- (id)validUTTypes;
- (id)addressPasteboardTextItemFromNotification:(_Bool)arg1;
- (id)fetchedPasteboardItem;
- (void)refreshMostRecentPasteboardItemFromNotification:(_Bool)arg1 explanationSet:(id)arg2;
- (void)_setMostRecentPasteboardItem:(id)arg1;
- (id)_mostRecentPasteboardItem;
- (void)setCacheObject:(id)arg1 forKey:(id)arg2;
- (id)cacheValueForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setTestLocale:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


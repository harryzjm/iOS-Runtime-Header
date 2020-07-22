//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTDebugObserverWatchKitAppList-Protocol.h>

@class NSDictionary, NSMutableArray, NSString;
@protocol BLTWatchKitAppListDelegate;

@interface BLTWatchKitAppList : NSObject <BLTDebugObserverWatchKitAppList>
{
    NSDictionary *_appsByAppBundleID;
    struct _opaque_pthread_mutex_t _lock;
    NSMutableArray *_loadingCompletionHandlers;
    _Bool _loading;
    _Bool _loaded;
    id <BLTWatchKitAppListDelegate> _delegate;
}

@property(nonatomic) __weak id <BLTWatchKitAppListDelegate> delegate; // @synthesize delegate=_delegate;
@property(getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
- (void).cxx_destruct;
- (void)_fetchWatchKitInfo;
- (void)fetchWatchKitInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchWatchKitInfoWithForce:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)watchKitAppDefinitionWithBundleID:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


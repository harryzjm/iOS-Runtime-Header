//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSLock, NSMutableArray, NSTimer;

@interface VSCacheUpdateListener : NSObject
{
    NSLock *_lock;
    NSMutableArray *_updateRequestQueue;
    NSDictionary *_dataProviders;
    NSTimer *_flushTimer;
    _Bool _isListening;
}

+ (id)sharedListenerIfExists;
+ (id)sharedListener;
- (void)_flush;
- (void)_enqueueRequest:(id)arg1;
- (void)_spokenLanguageChanged:(id)arg1;
- (void)performUpdateForModelIdentifier:(id)arg1 classIdentifier:(id)arg2;
- (void)stopListening;
- (void)startListening;
- (void)dealloc;
- (id)_initShared;
- (id)init;

@end

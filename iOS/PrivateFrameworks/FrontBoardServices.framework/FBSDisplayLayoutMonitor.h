//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/FBSDisplayLayoutMonitorClientDelegate-Protocol.h>

@class FBSDisplayLayout, FBSDisplayLayoutMonitorClient, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface FBSDisplayLayoutMonitor : NSObject <FBSDisplayLayoutMonitorClientDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    long long _displayType;
    _Bool _queue_invalidated;
    NSHashTable *_queue_observers;
    FBSDisplayLayout *_queue_currentLayout;
    CDUnknownBlockType _queue_handler;
    FBSDisplayLayoutMonitorClient *_queue_client;
    _Bool _sharedInstance;
    unsigned long long _qualityOfService;
}

+ (id)sharedMonitorForDisplayType:(long long)arg1;
@property(readonly, nonatomic) unsigned long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, nonatomic) long long displayType; // @synthesize displayType=_displayType;
- (void).cxx_destruct;
- (void)client:(id)arg1 handleNewDisplayLayout:(id)arg2 withContext:(id)arg3;
- (unsigned long long)clientQualityOfService:(id)arg1;
- (long long)clientDisplayType:(id)arg1;
- (void)_calloutQueue_postLayout:(id)arg1 withContext:(id)arg2 toObserver:(id)arg3;
- (void)_queue_updateLayout:(id)arg1 withContext:(id)arg2;
- (void)_queue_updateClient;
- (id)_observers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) FBSDisplayLayout *currentLayout;
@property(copy, nonatomic) CDUnknownBlockType handler;
- (void)invalidate;
- (void)dealloc;
- (id)initWithDisplayType:(long long)arg1 qualityOfService:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithDisplayType:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithDisplayType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


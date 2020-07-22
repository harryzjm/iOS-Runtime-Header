//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODataSessionTaskRules-Protocol.h>

@class NSHashTable, NSString;
@protocol GEODataSessionTask, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEODataSessionTaskRulesHelper : NSObject <GEODataSessionTaskRules>
{
    id <GEODataSessionTask> _xpcTask;
    id <GEODataSessionTask> _urlTask;
    id <GEODataSessionTask> _completedSubtask;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_isolation;
}

- (void).cxx_destruct;
- (void)_notifyObserversOfCompletedSubtask;
- (void)removeCompletedSubtaskObserver:(id)arg1;
- (void)addCompletedSubtaskObserver:(id)arg1;
- (id)completedSubtaskForDataTask:(id)arg1;
- (void)dataTask:(id)arg1 didCompleteSubtask:(id)arg2;
- (_Bool)dataTask:(id)arg1 shouldStartSubtask:(id)arg2 ofType:(unsigned long long)arg3;
- (_Bool)dataTask:(id)arg1 shouldCreateSubtaskOfType:(unsigned long long)arg2 forRequest:(id)arg3;
- (void)setSubtask:(id)arg1 ofType:(unsigned long long)arg2;
- (id)initForType:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

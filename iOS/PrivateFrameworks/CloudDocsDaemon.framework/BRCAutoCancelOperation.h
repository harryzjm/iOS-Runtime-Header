//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_BRCOperation.h"

@class NSObject, NSString;
@protocol OS_dispatch_group, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCAutoCancelOperation : _BRCOperation
{
    NSObject<OS_dispatch_group> *_observersGroup;
    NSObject<OS_dispatch_source> *_cancelTimer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)main;
- (_Bool)hasObservers;
- (id)createActivity;
- (_Bool)shouldRetryForError:(id)arg1;
- (void)_initializeCancelTimer;
- (void)endObservingChanges;
- (void)beginObservingChanges;
- (id)initWithName:(id)arg1 syncContext:(id)arg2 group:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


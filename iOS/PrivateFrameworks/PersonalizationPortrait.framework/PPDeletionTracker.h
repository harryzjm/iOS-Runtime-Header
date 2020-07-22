//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/PPPortraitDeletionTrackingProtocol-Protocol.h>

@class NSDate, NSMutableDictionary, PPAllocSupport;

@interface PPDeletionTracker : NSObject <PPPortraitDeletionTrackingProtocol>
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;
    PPAllocSupport *_allocSupport;
    NSMutableDictionary *_recentNamedEntityDeletions;
    NSDate *_validAfterDate;
}

- (void).cxx_destruct;
- (void)voiceAssistantEnableStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)coreRoutineEnableStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)clear;
- (void)entitiesDeletedSinceDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerAddedNamedEntities:(id)arg1;
- (void)registerDeletedNamedEntities:(id)arg1;
- (void)_locked_ageOutDeletionsWithCurrentDate:(id)arg1;
- (void)_locked_prepAlloc;
- (void)dealloc;
- (id)init;

@end

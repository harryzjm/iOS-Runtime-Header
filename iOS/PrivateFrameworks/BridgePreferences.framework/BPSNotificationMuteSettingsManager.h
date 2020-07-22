//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NPSManager, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface BPSNotificationMuteSettingsManager : NSObject
{
    NSMutableDictionary *_mutedSectionIdentifiersForDay;
    NPSManager *_npsManager;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedNotificationMuteSettingsManager;
- (void).cxx_destruct;
- (void)removeSectionIdentifiers:(id)arg1;
- (void)addSectionIdentifiers:(id)arg1;
- (_Bool)isMutedForTodaySectionIdentifier:(id)arg1;
- (id)mutedForTodaySectionIdentifiers;
- (void)_queue_sync;
- (void)_loadMutedSectionIdentifiers;
- (void)_updateObservers;
- (void)dealloc;
- (id)init;

@end


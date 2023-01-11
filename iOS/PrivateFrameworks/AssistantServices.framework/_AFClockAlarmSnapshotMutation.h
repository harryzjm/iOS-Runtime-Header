//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFClockAlarmSnapshotMutating-Protocol.h>

@class AFClockAlarmSnapshot, NSDate, NSDictionary, NSOrderedSet, NSString;

@interface _AFClockAlarmSnapshotMutation : NSObject <AFClockAlarmSnapshotMutating>
{
    AFClockAlarmSnapshot *_baseModel;
    unsigned long long _generation;
    NSDate *_date;
    NSDictionary *_alarmsByID;
    NSOrderedSet *_notifiedFiringAlarmIDs;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasGeneration:1;
        unsigned int hasDate:1;
        unsigned int hasAlarmsByID:1;
        unsigned int hasNotifiedFiringAlarmIDs:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setNotifiedFiringAlarmIDs:(id)arg1;
- (void)setAlarmsByID:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setGeneration:(unsigned long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKEventStore, NSArray, NSData, NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface EKICSPreviewModel : NSObject
{
    NSData *_data;
    EKEventStore *_tempStore;
    EKEventStore *_destStore;
    NSMutableArray *_importedEvents;
    NSMutableArray *_unimportedEvents;
    unsigned long long _options;
    unsigned long long _actionsState;
    NSMutableSet *_eventsAllowingUpdate;
    NSMutableSet *_eventsAllowingDelete;
}

- (void).cxx_destruct;
- (_Bool)shouldAllowUpdateEvent:(id)arg1;
- (_Bool)shouldAllowDeleteEvent:(id)arg1;
- (void)importAllIntoCalendar:(id)arg1;
- (id)importEvent:(id)arg1 intoCalendar:(id)arg2;
@property(readonly, nonatomic) NSArray *allEvents;
@property(readonly, nonatomic) NSArray *unimportedEvents;
@property(readonly, nonatomic) NSArray *importedEvents;
@property(readonly, nonatomic) unsigned long long actionsState;
@property(readonly, nonatomic) unsigned long long unimportedEventCount;
@property(readonly, nonatomic) unsigned long long importedEventCount;
@property(readonly, nonatomic) unsigned long long totalEventCount;
@property(readonly, nonatomic) EKEventStore *eventStore;
- (id)initWithICSData:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3;

@end


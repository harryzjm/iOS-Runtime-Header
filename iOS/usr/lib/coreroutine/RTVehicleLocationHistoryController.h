//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <coreroutine/RTPurgable-Protocol.h>

@class NSManagedObjectContext, NSString;
@protocol OS_dispatch_queue;

@interface RTVehicleLocationHistoryController : NSObject <RTPurgable>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSManagedObjectContext *_managedObjectContext;
}

@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)purgeManager:(id)arg1 performPurgeOfType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_deleteVehicleEventsBeforeDate:(id)arg1;
- (id)_getAllVehicleEventsFromHistory;
- (_Bool)_persistVehicleEventToHistory:(id)arg1;
- (_Bool)_evaluateUsualLocationWithVehicleEvent:(id)arg1;
- (id)initWithQueue:(id)arg1 managedObjectContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


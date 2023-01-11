//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Fitness/FIIntervalController-Protocol.h>

@class FIIntervalQuantityTrigger, FIMutableTimeSliceGroup, NSDate;

@interface FIQuantityIntervalController : NSObject <FIIntervalController>
{
    FIIntervalQuantityTrigger *_quantityTrigger;
    FIMutableTimeSliceGroup *_sliceGroup;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool allSlicesFinalized; // @dynamic allSlicesFinalized;
- (_Bool)isIntervalEndDate;
@property(readonly, nonatomic) _Bool intervalComplete; // @dynamic intervalComplete;
- (_Bool)_updateTriggerWithSample:(id)arg1;
- (void)addSample:(id)arg1;
- (id)initWithIntervalQuantityType:(id)arg1 threshold:(id)arg2 startDate:(id)arg3 trackedQuantityTypes:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) NSDate *intervalEndDate; // @dynamic intervalEndDate;

@end

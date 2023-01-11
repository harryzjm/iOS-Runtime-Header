//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MKTransitItemReferenceDateUpdaterDelegate;

@interface MKTransitItemReferenceDateUpdater : NSObject
{
    struct os_unfair_lock_s _lock;
    _Bool _active;
    id <MKTransitItemReferenceDateUpdaterDelegate> _delegate;
}

+ (unsigned long long)_updaterCount;
+ (void)_removeUpdater:(id)arg1;
+ (void)_addUpdater:(id)arg1;
+ (void)_referenceDateUpdateTimerFired;
+ (void)_cancelReferenceDateUpdate;
+ (void)_scheduleReferenceDateUpdate;
+ (void)_updateReferenceDate;
+ (_Bool)_needsUpdateReferenceDate;
+ (double)referenceDateAsTimeInterval;
+ (id)referenceDate;
+ (id)_currentTimeWithRoundedSeconds;
+ (void)initialize;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <MKTransitItemReferenceDateUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1;

@end

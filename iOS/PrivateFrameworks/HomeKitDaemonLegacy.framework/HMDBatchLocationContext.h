//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFTimer, NSDate, NSMutableArray;
@protocol HMDBatchLocationDelegate;

__attribute__((visibility("hidden")))
@interface HMDBatchLocationContext : NSObject
{
    id <HMDBatchLocationDelegate> _delegate;
    NSMutableArray *_tuples;
    HMFTimer *_timer;
    NSDate *_startDate;
}

- (void).cxx_destruct;
@property(readonly, copy) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly) HMFTimer *timer; // @synthesize timer=_timer;
@property(readonly) NSMutableArray *tuples; // @synthesize tuples=_tuples;
@property __weak id <HMDBatchLocationDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithDelegate:(id)arg1;

@end


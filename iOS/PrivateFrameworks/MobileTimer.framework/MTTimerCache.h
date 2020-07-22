//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTTimer, NSMutableArray;
@protocol NAScheduler;

@interface MTTimerCache : NSObject
{
    _Bool _needsUpdate;
    CDUnknownBlockType _updateBlock;
    NSMutableArray *_orderedTimers;
    MTTimer *_nextTimer;
    id <NAScheduler> _serializer;
}

@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(retain, nonatomic) MTTimer *nextTimer; // @synthesize nextTimer=_nextTimer;
@property(retain, nonatomic) NSMutableArray *orderedTimers; // @synthesize orderedTimers=_orderedTimers;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
- (void).cxx_destruct;
- (void)getCachedTimersWithCompletion:(CDUnknownBlockType)arg1;
- (void)markNeedsUpdate;
- (id)initWithUpdateBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
- (id)initWithUpdateBlock:(CDUnknownBlockType)arg1;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSRunLoop, NSString;

@interface ARRunLoop : NSObject
{
    NSString *_name;
    NSRunLoop *_runloop;
    NSMutableArray *_earlyRunloopBlocks;
    struct os_unfair_lock_s _lock;
    _Bool _started;
    _Bool _cancelled;
}

@property _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;
- (void)cancel;
- (void)runOnRunLoop:(CDUnknownBlockType)arg1;
- (void)_startThread;
- (void)start;
- (id)initWithName:(id)arg1;
- (id)init;

@end

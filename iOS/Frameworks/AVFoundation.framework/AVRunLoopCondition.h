//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCondition.h>

@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition
{
    NSMutableArray *_runLoopStateList;
}

- (void)_signalRunLoopWithState:(id)arg1;
- (void)broadcast;
- (void)signal;
- (_Bool)_waitInMode:(id)arg1 untilDate:(id)arg2;
- (_Bool)waitUntilDate:(id)arg1 inMode:(id)arg2;
- (void)waitInMode:(id)arg1;
- (_Bool)waitUntilDate:(id)arg1;
- (void)wait;
- (void)dealloc;
- (id)init;

@end


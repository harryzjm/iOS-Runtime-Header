//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCondition;

@interface AVEventWaiter : NSObject
{
    NSCondition *_condition;
    _Bool _eventCompleted;
}

- (void)waitUntilEventIsCompleted;
- (void)markEventAsCompleted;
- (void)dealloc;
- (id)init;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_tcp_listener;

@interface NSNetServicesInternal : NSObject
{
    NSMutableArray *_monitors;
    NSObject<OS_tcp_listener> *_listener;
    struct __CFRunLoop *_scheduledRunLoop;
    struct __CFString *_scheduledMode;
}

- (void)dealloc;

@end


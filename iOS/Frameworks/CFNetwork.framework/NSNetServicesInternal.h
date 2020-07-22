//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;
@protocol OS_tcp_listener;

__attribute__((visibility("hidden")))
@interface NSNetServicesInternal : NSObject
{
    NSMutableArray *_monitors;
    NSObject<OS_tcp_listener> *_listener;
    struct __CFRunLoop *_scheduledRunLoop;
    struct __CFString *_scheduledMode;
}

@property(retain) NSMutableArray *monitors; // @synthesize monitors=_monitors;
- (void)setListener:(id)arg1;
- (id)listener;
- (void)setScheduledRunLoop:(struct __CFRunLoop *)arg1 andMode:(struct __CFString *)arg2;
- (void)copyScheduledRunLoop:(struct __CFRunLoop **)arg1 andMode:(const struct __CFString **)arg2;
- (void)finalize;
- (void)dealloc;

@end

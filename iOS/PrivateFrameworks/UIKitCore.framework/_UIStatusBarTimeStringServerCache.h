//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IOSurface, NSString, UIStatusBarForegroundStyleAttributes;

__attribute__((visibility("hidden")))
@interface _UIStatusBarTimeStringServerCache : NSObject
{
    UIStatusBarForegroundStyleAttributes *_styleAttributes;
    unsigned int _queue_currentIOSurfaceMachPort;
    IOSurface *_queue_currentIOSurface;
    IOSurface *_queue_previousIOSurface;
    NSString *_queue_timeString;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IOSurface *currentIOSurface;
@property(readonly, nonatomic) unsigned int currentIOSurfaceMachPort;
@property(copy, nonatomic) NSString *timeString;
- (void)dealloc;
- (id)init;

@end

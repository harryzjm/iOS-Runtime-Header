//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVDepartureAnnouncingObjectMonitor : NSObject
{
    AVWeakReference *_weakReferenceToMonitoringObject;
}

+ (void)attachDepartureAnnouncingObjectMonitorToObject:(id)arg1 monitoringObject:(id)arg2;
- (void)dealloc;
- (id)initWithMonitoringObject:(id)arg1;

@end


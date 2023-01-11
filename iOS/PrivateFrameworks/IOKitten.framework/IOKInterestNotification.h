//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IOKInterestNotificationRef;
@protocol OS_dispatch_queue;

@interface IOKInterestNotification : NSObject
{
    unsigned int _object;
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_queue;
    IOKInterestNotificationRef *_notificationRef;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IOKInterestNotificationRef *notificationRef; // @synthesize notificationRef=_notificationRef;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned int object; // @synthesize object=_object;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void)dealloc;
- (id)init;

@end

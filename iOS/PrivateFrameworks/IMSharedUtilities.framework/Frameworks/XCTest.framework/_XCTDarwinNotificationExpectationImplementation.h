//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, XCTDarwinNotificationExpectation;
@protocol OS_dispatch_queue;

@interface _XCTDarwinNotificationExpectationImplementation : NSObject
{
    XCTDarwinNotificationExpectation *_expectation;
    NSString *_notificationName;
    int _notifyToken;
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _hasCleanedUp;
}

@property(readonly, copy) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (void)cleanup;
- (void)_handleNotification;
@property(copy) CDUnknownBlockType handler;
- (id)initWithNotificationName:(id)arg1 expectation:(id)arg2;
- (void)dealloc;

@end

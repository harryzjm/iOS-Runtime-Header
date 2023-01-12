//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface XCTDarwinNotificationExpectation
{
    _Bool _hasCleanedUp;
    int _notifyToken;
    CDUnknownBlockType _handler;
    NSString *_notificationName;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property _Bool hasCleanedUp; // @synthesize hasCleanedUp=_hasCleanedUp;
@property int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, copy) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (void)cleanup;
- (void)_handleNotification;
@property(copy) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (id)initWithNotificationName:(id)arg1;
- (void)dealloc;

@end

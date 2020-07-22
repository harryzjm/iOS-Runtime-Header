//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface NPKPMUButtonListener : NSObject
{
    CDUnknownBlockType _buttonHandler;
    struct __IOHIDEventSystemClient *_hidSystemClient;
    NSObject<OS_dispatch_queue> *_hidSystemQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *hidSystemQueue; // @synthesize hidSystemQueue=_hidSystemQueue;
@property(nonatomic) struct __IOHIDEventSystemClient *hidSystemClient; // @synthesize hidSystemClient=_hidSystemClient;
@property(copy, nonatomic) CDUnknownBlockType buttonHandler; // @synthesize buttonHandler=_buttonHandler;
- (void).cxx_destruct;
- (void)_handleButtonEvent:(struct __IOHIDEvent *)arg1;
- (void)_initializeHIDClient;
- (void)dealloc;
- (id)initWithHandler:(CDUnknownBlockType)arg1;

@end

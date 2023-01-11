//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CFCommandQueuer : NSObject
{
    NSObject<OS_dispatch_queue> *_commandQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *commandQueue; // @synthesize commandQueue=_commandQueue;
- (void).cxx_destruct;
- (id)initWithCommandIdentifier:(id)arg1;
- (void)initQueuesWithIdentifier:(id)arg1;
- (void)dispatchCommand:(id)arg1 isOneWay:(_Bool)arg2 withServiceHelper:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)dispatchCommand:(id)arg1 withServiceHelper:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)dispatchOneWayCommand:(id)arg1 withServiceHelper:(id)arg2;
- (void)dispatchBlock:(CDUnknownBlockType)arg1;

@end


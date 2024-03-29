//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface UMQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)userList;
+ (id)server;
+ (id)client;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_executeWithSelf:(id)arg1 block:(CDUnknownBlockType)arg2 synchronously:(_Bool)arg3;
- (void)executeWithSelf:(id)arg1 synchronously:(CDUnknownBlockType)arg2;
- (void)executeWithSelf:(id)arg1 asynchronously:(CDUnknownBlockType)arg2;

@end


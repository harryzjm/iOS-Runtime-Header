//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISKVOProxy;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ISKVOProxyRecord : NSObject
{
    ISKVOProxy *_proxy;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) ISKVOProxy *proxy; // @synthesize proxy=_proxy;
- (id)initWithProxy:(id)arg1 queue:(id)arg2;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TUDispatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)dispatcherWithQueue:(id)arg1;
+ (id)dispatcherWithIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (CDUnknownBlockType)qosUserInteractiveDispatchBlockForBlock:(CDUnknownBlockType)arg1;
- (id)initWithQueue:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)boostQualityOfService;
- (void)dispatchAsynchronousBlock:(CDUnknownBlockType)arg1;
- (void)dispatchSynchronousBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end


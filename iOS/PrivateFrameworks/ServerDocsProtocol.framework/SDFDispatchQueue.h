//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface SDFDispatchQueue : NSObject
{
    NSString *_label;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)queueWithLabel:(id)arg1;
@property(readonly, retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)description;
- (void)dispatchWhen:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchAsynchronousBlock:(CDUnknownBlockType)arg1;
- (void)_forceBlockToRetainQueue;
- (void)dispatchSynchronousBlock:(CDUnknownBlockType)arg1;
- (id)initWithLabel:(id)arg1;

@end


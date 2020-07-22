//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MSVCallback : NSObject
{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
    SEL _selector;
    id _target;
}

+ (id)callbackWithSelector:(SEL)arg1 target:(id)arg2 queue:(id)arg3;
+ (id)callbackWithBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)invoke:(id)arg1;

@end

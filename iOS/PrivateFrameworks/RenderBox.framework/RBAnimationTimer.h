//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface RBAnimationTimer : NSObject
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _mutex;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _cond;
    struct objc_ptr<NSThread *> _thread;
    struct objc_ptr<CADisplayLink *> _link;
    unsigned int _empty_ttl;
    int _frame_rate;
    int _pending_frame_rate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dispatchHandlers:(id)arg1;
- (void)thread:(id)arg1;
- (void)dealloc;
- (id)init;

@end


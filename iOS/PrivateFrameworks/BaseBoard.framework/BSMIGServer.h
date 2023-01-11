//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface BSMIGServer : NSObject
{
    NSString *_portName;
    unsigned int _port;
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *_thread;
    struct mig_subsystem *_subsystem;
    struct __CFRunLoopObserver *_entryObserver;
    struct __CFRunLoopObserver *_exitObserver;
}

- (void).cxx_destruct;
- (void)_installAutoreleasePoolsIfNecessaryForMode:(struct __CFString *)arg1;
- (unsigned int)_createPortNamed:(id)arg1;
- (void *)_start;
- (void)setThreadName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *threadName;
@property(nonatomic) int threadPriority;
- (unsigned int)port;
- (id)init;
- (id)initWithPortName:(id)arg1 subsystem:(struct mig_subsystem *)arg2 separateThread:(_Bool)arg3;

@end


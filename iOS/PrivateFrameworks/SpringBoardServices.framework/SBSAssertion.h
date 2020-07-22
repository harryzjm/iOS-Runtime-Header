//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SBSAssertion : NSObject
{
    NSString *_assertionName;
    NSString *_reason;
    unsigned int _port;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;
}

@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, copy, nonatomic) NSString *assertionName; // @synthesize assertionName=_assertionName;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (id)initWithAssertionName:(id)arg1 reason:(id)arg2 port:(unsigned int)arg3;

@end


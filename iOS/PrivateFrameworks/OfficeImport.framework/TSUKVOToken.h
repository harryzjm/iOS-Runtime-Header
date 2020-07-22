//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSUKVOToken : NSObject
{
    NSObject *_observer;
    NSObject *_target;
    NSString *_keyPath;
    void *_context;
}

@property(readonly, nonatomic) void *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) NSObject *target; // @synthesize target=_target;
@property(readonly, nonatomic) NSObject *observer; // @synthesize observer=_observer;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithObserver:(id)arg1 target:(id)arg2 keyPath:(id)arg3 context:(void *)arg4;
- (id)init;

@end


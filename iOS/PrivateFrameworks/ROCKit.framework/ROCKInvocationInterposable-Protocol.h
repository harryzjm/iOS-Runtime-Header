//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ROCKit/NSObject-Protocol.h>

@protocol ROCKInvocationInterface;

@protocol ROCKInvocationInterposable <NSObject>
- (void)invokeWithInvocation:(id <ROCKInvocationInterface>)arg1 completionHandler:(void (^)(NSError *))arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <AOSKit/NSCoding-Protocol.h>

@class NSConditionLock;
@protocol OS_dispatch_queue;

@interface AOSTransaction : NSObject <NSCoding>
{
    unsigned char didSucceed;
    unsigned char didFinish;
    void *result;
    struct __CFError *error;
    CDUnknownFunctionPointerType callbackFunction;
    CDUnknownBlockType callbackBlock;
    NSObject<OS_dispatch_queue> *callbackQueue;
    void *context;
    NSConditionLock *waitLock;
    CDUnknownFunctionPointerType contextRetain;
    CDUnknownFunctionPointerType contextRelease;
}

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)error;
- (id)result;
- (_Bool)isSuccessful;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end


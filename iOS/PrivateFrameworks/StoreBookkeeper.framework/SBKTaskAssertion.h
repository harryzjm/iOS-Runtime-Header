//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SBKProcessAssertion;

__attribute__((visibility("hidden")))
@interface SBKTaskAssertion : NSObject
{
    CDUnknownBlockType _expireHandler;
    NSString *_debugInfo;
    SBKProcessAssertion *_processAssertion;
}

+ (id)newBackgroundTaskWithExpirationHandler:(CDUnknownBlockType)arg1 debugInfo:(id)arg2;
- (void).cxx_destruct;
- (id)description;
- (void)invalidate;
- (void)performExpirationHandler;
- (void)dealloc;
- (id)initWithExpirationHandler:(CDUnknownBlockType)arg1 debugInfo:(id)arg2;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface AAAccessSessionManager : NSObject
{
    MISSING_TYPE *accessSessionManager;
}

- (void).cxx_destruct;
- (id)init;
- (void)pushSessionData:(id)arg1 traits:(id)arg2 submitEventQueues:(_Bool)arg3;
- (void)pushSessionData:(id)arg1 submitEventQueues:(_Bool)arg2;
- (void)pushSessionData:(id)arg1 traits:(id)arg2;
- (void)pushSessionData:(id)arg1;
@property(nonatomic, readonly) _Bool isActive;

@end

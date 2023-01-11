//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RBSAssertion;

@interface SBBackgroundFetchTask : NSObject
{
    struct os_unfair_lock_s _lock;
    NSString *_bundleID;
    int _sequenceNumber;
    RBSAssertion *_lock_assertion;
    CDUnknownBlockType _lock_completionHandler;
    _Bool _lock_finished;
}

+ (int)_nextSequenceNumber;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (void)execute;

@end

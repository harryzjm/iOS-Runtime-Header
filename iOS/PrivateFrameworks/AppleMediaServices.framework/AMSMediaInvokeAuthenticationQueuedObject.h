//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSPromise, AMSURLTaskInfo, NSURLResponse;

__attribute__((visibility("hidden")))
@interface AMSMediaInvokeAuthenticationQueuedObject : NSObject
{
    _Bool _ignoringResult;
    NSURLResponse *_response;
    AMSURLTaskInfo *_taskInfo;
    AMSPromise *_pendingPromise;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool ignoringResult; // @synthesize ignoringResult=_ignoringResult;
@property(retain, nonatomic) AMSPromise *pendingPromise; // @synthesize pendingPromise=_pendingPromise;
@property(retain, nonatomic) AMSURLTaskInfo *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;

@end


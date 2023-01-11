//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MailSupport/MSAssetDownloadSchedulerContinuation-Protocol.h>

@class MSAssetDownloadScheduler, NSString;
@protocol OS_xpc_object;

@interface _MSAssetDownloadSchedulerContinuation : NSObject <MSAssetDownloadSchedulerContinuation>
{
    MSAssetDownloadScheduler *_scheduler;
    NSObject<OS_xpc_object> *_activity;
}

@property(retain, nonatomic) NSObject<OS_xpc_object> *activity; // @synthesize activity=_activity;
@property(nonatomic) __weak MSAssetDownloadScheduler *scheduler; // @synthesize scheduler=_scheduler;
- (void).cxx_destruct;
- (void)stopScheduling;
- (void)rescheduleAfterFailure;
- (void)rescheduleAfterSuccess;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


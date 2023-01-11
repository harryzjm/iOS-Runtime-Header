//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrialServer/TRITaskQueueControlling-Protocol.h>

@class TRIRunningXPCActivityDescriptor, TRITaskQueuingOptions;
@protocol TRITask;

@protocol TRITaskQueuing <TRITaskQueueControlling>
- (unsigned long long)count;
- (_Bool)cancelTask:(id <TRITask>)arg1;
- (_Bool)addTask:(id <TRITask>)arg1 options:(TRITaskQueuingOptions *)arg2;
- (_Bool)resumeWithXPCActivityDescriptor:(TRIRunningXPCActivityDescriptor *)arg1 executeWhenSuspended:(void (^)(void))arg2;
@end

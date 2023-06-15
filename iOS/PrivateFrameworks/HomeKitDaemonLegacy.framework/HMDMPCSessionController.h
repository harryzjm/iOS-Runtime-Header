//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSOperationQueue;
@protocol HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDMPCSessionController : HMFObject
{
    NSOperationQueue *_speakerGroupCommandOperationQueue;
    id <HMMLogEventSubmitting> _logEventSubmitter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, nonatomic) NSOperationQueue *speakerGroupCommandOperationQueue; // @synthesize speakerGroupCommandOperationQueue=_speakerGroupCommandOperationQueue;
- (void)executeSessionWithSessionData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithLogEventSubmitter:(id)arg1;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDSession;
@protocol OS_dispatch_queue;

@interface AFSiriTaskMetricsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_duetQueue;
    CDSession *_coreDuetSession;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)deleteRegisteredIdentifiers;
- (_Bool)_parseCoreDuetAttributeValue:(id)arg1 aceId:(id *)arg2 duration:(double *)arg3;
- (void)retrieveMetricsFromPreviousPunchout:(CDUnknownBlockType)arg1;
- (void)registerPunchoutIdentifier:(id)arg1 metricsContext:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)init;

@end

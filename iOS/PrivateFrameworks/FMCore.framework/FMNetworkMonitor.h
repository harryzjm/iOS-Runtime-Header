//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NWPathEvaluator;

@interface FMNetworkMonitor : NSObject
{
    NWPathEvaluator *_evaluator;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NWPathEvaluator *evaluator; // @synthesize evaluator=_evaluator;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)registerNetworkMonitorLaunchEvent:(_Bool)arg1;
- (_Bool)isNetworkUp;
- (_Bool)isMonitoring;
- (void)stopMonitoring;
- (void)startMonitoring;

@end

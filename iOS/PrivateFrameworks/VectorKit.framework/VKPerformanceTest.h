//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VKMapView;

__attribute__((visibility("hidden")))
@interface VKPerformanceTest : NSObject
{
    VKMapView *_mapView;
    _Bool _running;
    int _loopCounter;
    int _resultCount;
    struct VKPerformanceTestResult_struct *_results;
    NSString *_outputHeader;
}

+ (void)runWithMapView:(id)arg1 outputHeader:(id)arg2;
- (void)printResults;
- (void)runTest:(int)arg1 step:(int)arg2;
- (void)tick:(int)arg1;
- (void)abort;
- (void)loop;
- (void)dealloc;
- (id)initWithMapView:(id)arg1 outputHeader:(id)arg2;

@end


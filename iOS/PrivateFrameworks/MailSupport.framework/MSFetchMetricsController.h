//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MSFetchMetricsControllerDataSource;

@interface MSFetchMetricsController : NSObject
{
    double _startTime;
    id <MSFetchMetricsControllerDataSource> _dataSource;
}

@property(readonly, nonatomic) __weak id <MSFetchMetricsControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)stopAndSubmitWithOptions:(unsigned long long)arg1 fetchSize:(unsigned long long)arg2;
- (void)start;
- (id)initWithDataSource:(id)arg1;

@end


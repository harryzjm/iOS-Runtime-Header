//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class ADMediaAnalyticsEventInfo, ADMediaAnalyticsProgressEventInfo;
@protocol SVVideoMetadata;

@protocol SXVASTAnalyticsEventInfoFactory <NSObject>
- (ADMediaAnalyticsProgressEventInfo *)createAnalyticsProgressEventInfoForQuartile:(unsigned long long)arg1 withMetadata:(id <SVVideoMetadata>)arg2;
- (ADMediaAnalyticsEventInfo *)createAnalyticsEventInfoWithMetadata:(id <SVVideoMetadata>)arg1;
- (ADMediaAnalyticsEventInfo *)createAnalyticsEventInfo;
@end

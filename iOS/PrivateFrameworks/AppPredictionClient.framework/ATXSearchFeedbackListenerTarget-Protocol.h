//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppPredictionClient/NSObject-Protocol.h>

@class ATXActionResponse, ATXResponse, NSArray, NSString;

@protocol ATXSearchFeedbackListenerTarget <NSObject>
- (void)logAppFeedback:(ATXResponse *)arg1 consumerSubType:(unsigned char)arg2 engagementType:(unsigned long long)arg3 bundleIdentifier:(NSString *)arg4 bundleIdsShown:(NSArray *)arg5;
- (void)sendActionResponse:(ATXActionResponse *)arg1;
@end

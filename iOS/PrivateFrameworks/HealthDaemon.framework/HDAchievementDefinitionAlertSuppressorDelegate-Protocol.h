//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;
@protocol HDAchievementDefinitionAlertSuppressor;

@protocol HDAchievementDefinitionAlertSuppressorDelegate
- (NSDate *)currentDate;
- (_Bool)wantsToAlert;
- (void)alertSuppressionStatusDidChange:(id <HDAchievementDefinitionAlertSuppressor>)arg1;
@end

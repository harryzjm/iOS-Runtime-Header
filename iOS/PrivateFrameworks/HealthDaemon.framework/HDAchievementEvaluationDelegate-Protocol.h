//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class NSExpression, NSNumber, _HKAchievement, _HKAchievementDefinition;

@protocol HDAchievementEvaluationDelegate <NSObject>
- (_HKAchievement *)createEvaluatedAchievementWithDefinition:(_HKAchievementDefinition *)arg1;
- (NSNumber *)evaluateAchievementExpression:(NSExpression *)arg1;
@end

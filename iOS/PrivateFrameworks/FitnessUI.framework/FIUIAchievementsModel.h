//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKExtendedHealthStore;
@protocol FIUIAchievementsModelDelegate;

@interface FIUIAchievementsModel : NSObject
{
    HKExtendedHealthStore *_extendedHealthStore;
    id <FIUIAchievementsModelDelegate> _delegate;
}

+ (long long)compareAchievement:(id)arg1 toAchievement:(id)arg2;
@property(nonatomic) __weak id <FIUIAchievementsModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fetchAchievementsOnDay:(id)arg1 inCalendar:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end


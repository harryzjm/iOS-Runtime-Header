//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;

@interface _UIActivityUserDefaults : NSObject
{
    NSString *_activityDefaultsKey;
    NSUserDefaults *_underlyingUserDefaults;
}

+ (void)_migrateUserActivityOrderforKey:(id)arg1 userDefaults:(id)arg2 defaultOrder:(id)arg3;
+ (void)migrateUserActivityOrderIfNecessary;
+ (id)updatedActivityIdentifiersUserOrderWithPreviousOrder:(id)arg1 someSortedActivityIdentifiers:(id)arg2;
+ (id)builtinActivityOrder;
- (void).cxx_destruct;
@property(retain, nonatomic) NSUserDefaults *underlyingUserDefaults; // @synthesize underlyingUserDefaults=_underlyingUserDefaults;
@property(copy, nonatomic) NSString *activityDefaultsKey; // @synthesize activityDefaultsKey=_activityDefaultsKey;
- (id)applicationExtensionForActivity:(id)arg1;
- (id)identifierForActivity:(id)arg1;
- (void)postActivityUserDefaultsDidChangeNotification;
- (id)mutableActivityIdentifiersArrayForActivitiesArray:(id)arg1;
- (void)_userEditedActivityDefaults;
- (_Bool)hasUserEditedActivityOrder;
- (void)setActivityIdentifiersInUserOrder:(id)arg1;
- (id)activityIdentifiersInUserOrder;
- (void)removeActivityTypeFromDefaults:(id)arg1;
- (void)updateUserActivityOrderWithOrderedPartialActivities:(id)arg1;
- (id)activitiesOrderedByUserActivityOrderForActivities:(id)arg1;
- (id)migrateSortOrderIfNeededForBuiltInActivityType:(id)arg1 activityIdentifierOrdering:(id)arg2;
- (id)activitiesBySortingActivities:(id)arg1 byIdentifierWithDefaultActivityIdentifierOrdering:(id)arg2;
- (void)setActivity:(id)arg1 asHidden:(_Bool)arg2;
- (_Bool)activityIsHidden:(id)arg1;
- (_Bool)canHideActivity:(id)arg1;
- (id)initWithUnderlyingUserDefaults:(id)arg1 activityDefaultsKey:(id)arg2;

@end

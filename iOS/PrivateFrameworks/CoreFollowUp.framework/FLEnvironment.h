//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FLEnvironment : NSObject
{
}

+ (id)currentEnvironment;
- (id)stressBundleIdentifiers;
- (id)supportedBundleIdentifiers;
- (_Bool)stressMode;
- (void)setFollowUpExtensionSupportEnabled:(_Bool)arg1;
@property(readonly, nonatomic) _Bool followUpZeroActionsForTheWorld;
@property(readonly, nonatomic) _Bool followUpExtensionSupportEnabled;
- (_Bool)shouldHideAllFollowUps;
- (_Bool)isUnlocked;
- (_Bool)isInternal;

@end

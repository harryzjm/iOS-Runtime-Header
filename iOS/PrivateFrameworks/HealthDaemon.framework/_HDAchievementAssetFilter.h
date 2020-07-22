//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/_HKAchievementDefinitionLoaderFilter-Protocol.h>

@class NSSet;

@interface _HDAchievementAssetFilter : NSObject <_HKAchievementDefinitionLoaderFilter>
{
    NSSet *_allEarnedDefinitionIdentifiers;
}

- (void).cxx_destruct;
- (_Bool)_wasAchievementDefinitionEverEarned:(id)arg1;
- (_Bool)_isAchievementDefinitionExpired:(id)arg1;
- (_Bool)areStickersEarnedForAchievementDefinition:(id)arg1;
- (_Bool)areStickersNeededAtAll;
- (_Bool)areStickersNeededForAchievementDefinition:(id)arg1;
- (_Bool)areAssetsNeededForAchievementDefinition:(id)arg1;
- (id)initWithAllEarnedDefinitionIdentifiers:(id)arg1;

@end

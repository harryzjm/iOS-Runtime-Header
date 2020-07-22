//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface GKContentPropertyList : NSObject
{
    NSDictionary *_root;
    NSString *_bundleID;
    NSDictionary *_achievementsByIdentifier;
    NSDictionary *_leaderboardsByIdentifier;
    NSDictionary *_leaderboardSetsByIdentifier;
}

+ (id)localPropertyListForGameDescriptor:(id)arg1;
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain) NSDictionary *root; // @synthesize root=_root;
- (id)achievementDescriptions;
- (id)leaderboardSetDescriptionForIdentifier:(id)arg1;
- (id)leaderboardDescriptionForIdentifier:(id)arg1;
- (id)achievementDescriptionForIdentifier:(id)arg1;
- (id)leaderboardSetDescriptions;
- (id)leaderboardDescriptions;
- (id)_rootDictionary;
- (id)imageNameForDashboardLogo;
- (id)localizedStringForKey:(id)arg1;
- (id)localizedStringForKey:(id)arg1 forLocalization:(id)arg2;
- (id)_mainBundle;
- (void)dealloc;

@end


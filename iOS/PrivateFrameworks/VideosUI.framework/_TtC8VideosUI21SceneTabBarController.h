//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI21SceneTabBarController : NSObject
{
    MISSING_TYPE *_tabBarInfo;
    MISSING_TYPE *previousSelectedIndex;
    MISSING_TYPE *hasSetTabbarIndex;
}

- (void).cxx_destruct;
- (void)willTerminate:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)updateWithTabBarItems:(id)arg1 setSelectedIdentifierFromDefaults:(_Bool)arg2 appContext:(id)arg3;
- (void)setSelectedIndexForTabBarItemIdentifier:(id)arg1;
- (id)init;
@property(nonatomic) _Bool tabBarHidden;
- (_Bool)isTabBarHidden;
@property(nonatomic) unsigned long long selectedIndex;
@property(nonatomic, readonly) NSArray *tabBarItems;

@end


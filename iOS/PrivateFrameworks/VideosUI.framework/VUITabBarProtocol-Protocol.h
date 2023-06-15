//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSArray, NSString, VUIAppContext;

@protocol VUITabBarProtocol <NSObject>
@property(nonatomic, getter=isTabBarHidden) _Bool tabBarHidden;
@property(readonly, nonatomic) NSArray *tabBarItems;
@property(nonatomic) unsigned long long selectedIndex;

@optional
- (void)updateWithTabBarItems:(NSArray *)arg1 setSelectedIdentifierFromDefaults:(_Bool)arg2 appContext:(VUIAppContext *)arg3;
- (unsigned long long)indexForTabBarItemIdentifier:(NSString *)arg1;
- (void)setSelectedIndexForTabBarItemIdentifier:(NSString *)arg1;
@end


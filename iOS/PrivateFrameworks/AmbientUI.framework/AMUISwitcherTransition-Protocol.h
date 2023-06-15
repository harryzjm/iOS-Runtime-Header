//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AmbientUI/NSObject-Protocol.h>

@class NSString;
@protocol AMUISwitcherItem;

@protocol AMUISwitcherTransition <NSObject>
@property(readonly, nonatomic) long long direction;
@property(readonly, nonatomic) id <AMUISwitcherItem> toItem;
@property(readonly, nonatomic) id <AMUISwitcherItem> fromItem;
- (void)removeUserInfoObjectForKey:(NSString *)arg1;
- (id)userInfoObjectForKey:(NSString *)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(NSString *)arg2;
@end


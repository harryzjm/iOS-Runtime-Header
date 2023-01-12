//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NSArray, NSString, UIColor;

@protocol NCAuxiliaryOptionsProviding <NSObject>

@optional
@property(readonly, copy, nonatomic) UIColor *auxiliaryOptionsTintColor;
@property(readonly, copy, nonatomic) UIColor *auxiliaryOptionsTextColor;
@property(readonly, copy, nonatomic) NSArray *auxiliaryOptionActions;
@property(readonly, copy, nonatomic) NSString *auxiliaryOptionsSummaryText;
@property(nonatomic) _Bool auxiliaryOptionsVisible;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppPredictionUIWidget/NSObject-Protocol.h>

@class SBIconView;
@protocol UIDropSession;

@protocol SBIconViewDropDelegate <NSObject>

@optional
- (void)iconView:(SBIconView *)arg1 dropSessionDidExit:(id <UIDropSession>)arg2;
- (void)iconView:(SBIconView *)arg1 dropSessionDidEnter:(id <UIDropSession>)arg2;
@end


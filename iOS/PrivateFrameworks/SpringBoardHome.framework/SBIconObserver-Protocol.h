//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class SBIcon;

@protocol SBIconObserver <NSObject>

@optional
- (void)iconLaunchEnabledDidChange:(SBIcon *)arg1;
- (void)iconAccessoriesDidUpdate:(SBIcon *)arg1;
- (void)iconImageDidUpdate:(SBIcon *)arg1;
@end

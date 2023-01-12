//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString;
@protocol UIStatusBarStateObserver;

@protocol UIStatusBarStateProvider <NSObject>
- (void)getStatusBarData:(CDStruct_d53647a2 *)arg1;
- (void)removeStatusBarStateObserver:(id <UIStatusBarStateObserver>)arg1;
- (void)addStatusBarStateObserver:(id <UIStatusBarStateObserver>)arg1;

@optional
- (NSString *)doubleHeightStatusStringForStyle:(long long)arg1;
@end


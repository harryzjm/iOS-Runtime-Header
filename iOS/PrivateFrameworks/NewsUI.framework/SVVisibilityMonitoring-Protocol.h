//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsUI/NSObject-Protocol.h>

@protocol SVVisibilityMonitoring <NSObject>
@property(readonly, nonatomic) __weak id object;
@property(readonly, nonatomic) double visiblePercentage;
@property(readonly, nonatomic) _Bool appeared;
@property(readonly, nonatomic) unsigned long long state;
- (void)onDidDisappear:(void (^)(id <SVVisibilityMonitoring>))arg1;
- (void)onWillDisappear:(void (^)(id <SVVisibilityMonitoring>))arg1;
- (void)onVisiblePercentageChange:(void (^)(id <SVVisibilityMonitoring>, double))arg1;
- (void)onDidAppear:(void (^)(id <SVVisibilityMonitoring>))arg1;
- (void)onWillAppear:(void (^)(id <SVVisibilityMonitoring>))arg1;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DashBoard/NSObject-Protocol.h>

@class NSArray, NSDictionary;
@protocol BNConsideringDelegate, BNPresentable;

@protocol BNConsidering <NSObject>
- (long long)shouldOverlapPresentable:(id <BNPresentable>)arg1 withPresentable:(id <BNPresentable>)arg2;
- (long long)shouldPresentPresentable:(id <BNPresentable>)arg1 withPresentedPresentables:(NSArray *)arg2 responsiblePresentable:(out id *)arg3;

@optional
@property(nonatomic) __weak id <BNConsideringDelegate> delegate;
- (long long)shouldPostPresentable:(id <BNPresentable>)arg1 userInfo:(NSDictionary *)arg2 reason:(out id *)arg3;
@end


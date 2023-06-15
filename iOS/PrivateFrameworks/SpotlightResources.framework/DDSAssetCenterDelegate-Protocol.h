//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpotlightResources/NSObject-Protocol.h>

@class DDSTrialAsset, DDSTrialQuery, NSString;

@protocol DDSAssetCenterDelegate <NSObject>
- (void)didUpdateAssetsWithType:(NSString *)arg1;

@optional
- (void)trialDidStopForQuery:(DDSTrialQuery *)arg1;
- (void)trialDidReceiveAsset:(DDSTrialAsset *)arg1 forQuery:(DDSTrialQuery *)arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MLSupervisedOnlineUpdateOptions;
@protocol MLFeatureProvider;

@protocol MLSupervisedOnlineUpdatable
- (void)updateModelFromFeatures:(id <MLFeatureProvider>)arg1 toTarget:(id <MLFeatureProvider>)arg2 options:(MLSupervisedOnlineUpdateOptions *)arg3 error:(id *)arg4;
@end


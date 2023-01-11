//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/NSObject-Protocol.h>

@class KNBuildRenderer;

@protocol KNAmbientBuildRenderer <NSObject>
@property(readonly, nonatomic) _Bool shouldActionBuildsStopAnimations;
@property(readonly, nonatomic) _Bool hasAmbientBuildStarted;
@property(nonatomic) __weak KNBuildRenderer *buildInRenderer;
- (void)interruptAndReset;
- (void)registerForAmbientBuildStartCallback:(SEL)arg1 target:(id)arg2;
@end


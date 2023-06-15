//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBPIPMorphAnimatorController;
@protocol SBViewMorphAnimatorDataSource;

@protocol SBPIPMorphAnimatorControllerDelegate <NSObject>
- (id <SBViewMorphAnimatorDataSource>)dataSourceForMorphAnimatorController:(SBPIPMorphAnimatorController *)arg1;
- (void)morphAnimatorControllerDidTerminate:(SBPIPMorphAnimatorController *)arg1;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitServices/NSObject-Protocol.h>

@class FBSDisplayConfiguration, UISApplicationSupportDisplayEdgeInfo, UISDisplayContext;
@protocol FBSServiceFacilityClientHandle;

@protocol UISApplicationSupportServerDelegate <NSObject>
- (UISApplicationSupportDisplayEdgeInfo *)edgeInfoForClient:(id <FBSServiceFacilityClientHandle>)arg1 displayConfiguration:(FBSDisplayConfiguration *)arg2;
- (UISDisplayContext *)initialDisplayContextForClient:(id <FBSServiceFacilityClientHandle>)arg1;
- (void)requestPasscodeUnlockUIForClient:(id <FBSServiceFacilityClientHandle>)arg1 withCompletion:(void (^)(_Bool))arg2;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSSceneSpecification.h>

@class NSArray, NSDictionary, NSString;

@interface FBSSceneSpecification (UIKitSceneSpecification)
@property(readonly, nonatomic) _Bool affectsAppLifecycleIfInternal;
@property(readonly, nonatomic) _Bool isInternal;
@property(readonly, nonatomic) Class uiSceneMinimumClass;
@property(readonly, nonatomic) Class sceneSubstrateClass;
@property(readonly, nonatomic) Class lifecycleMonitorClass;
@property(readonly, nonatomic) _Bool isUIKitManaged;
- (id)disconnectionHandlers;
- (id)connectionHandlers;
@property(readonly, nonatomic) NSString *uiSceneSessionRole;
@property(readonly, nonatomic) NSDictionary *baseSceneComponentClassDictionary;
@property(readonly, nonatomic) NSArray *finalActionHandlers;
@property(readonly, nonatomic) NSArray *initialActionHandlers;
@property(readonly, nonatomic) NSArray *finalSettingsDiffActions;
@property(readonly, nonatomic) NSArray *initialSettingsDiffActions;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UICarPlayApplicationSceneSettings, UIScene;

__attribute__((visibility("hidden")))
@interface _UICarPlaySceneComponent : NSObject
{
    UIScene *_scene;
    UICarPlayApplicationSceneSettings *_carPlaySceneSettings;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICarPlayApplicationSceneSettings *carPlaySceneSettings; // @synthesize carPlaySceneSettings=_carPlaySceneSettings;
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
@property(readonly, nonatomic) _Bool disableFiveRowKeyboards;
- (id)initWithScene:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


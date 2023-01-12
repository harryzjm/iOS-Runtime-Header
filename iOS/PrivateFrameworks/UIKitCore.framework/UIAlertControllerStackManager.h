//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIScene;

__attribute__((visibility("hidden")))
@interface UIAlertControllerStackManager : NSObject
{
    NSMutableArray *_alertControllerStack;
    NSMutableArray *_hiddenAlertControllers;
    UIScene *_scene;
}

- (void).cxx_destruct;
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
- (long long)_alertControllerStackCount;
- (_Bool)_alertControllerShouldBeTrackedInStack:(id)arg1;
- (void)_didHideAlertController:(id)arg1;
- (void)_willHideAlertController:(id)arg1;
- (void)_willShowAlertController:(id)arg1;
- (id)_topAlertControllerInStack;
- (void)_removeAlertControllerFromStack:(id)arg1;
- (void)_addAlertControllerToStack:(id)arg1;
- (void)_showHiddenStackedAlertControllers;
- (void)_hideStackedAlertControllers;
- (void)_alertControllerDidDisappear:(id)arg1;
- (void)_alertControllerWillDisappear:(id)arg1;
- (void)_alertControllerDidAppear:(id)arg1;
- (void)_alertControllerWillAppear:(id)arg1;
- (id)initWithScene:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


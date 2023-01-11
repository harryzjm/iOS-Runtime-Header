//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIUndoTutorialView;

__attribute__((visibility("hidden")))
@interface UIUndoTutorialViewController
{
    CDUnknownBlockType _completionHandler;
    UIUndoTutorialView *_tutorialView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIUndoTutorialView *tutorialView; // @synthesize tutorialView=_tutorialView;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)doneButtonPressed;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_canShowWhileLocked;

@end

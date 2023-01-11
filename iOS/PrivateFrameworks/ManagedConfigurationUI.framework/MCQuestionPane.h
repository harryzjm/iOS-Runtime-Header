//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSEditingPane.h>

@class MCQuestionView, UITransitionView;

__attribute__((visibility("hidden")))
@interface MCQuestionPane : PSEditingPane
{
    MCQuestionView *_questionView;
    UITransitionView *_transitionView;
    double _navigationBarHeight;
    double _statusBarHeight;
}

@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(nonatomic) double navigationBarHeight; // @synthesize navigationBarHeight=_navigationBarHeight;
- (void).cxx_destruct;
- (void)transitionViewDidComplete:(id)arg1;
- (void)viewDidBecomeVisible;
- (void)enableInputField;
- (void)disableInputField;
- (void)setProperties:(id)arg1 withStyle:(int)arg2;
- (void)_updateInPlaceWithProperties:(id)arg1;
- (void)_slide:(int)arg1 toQuestionWithProperties:(id)arg2;
- (void)setProperties:(id)arg1;
- (_Bool)requiresKeyboard;
- (id)responseValue;
- (id)initWithFrame:(struct CGRect)arg1;

@end


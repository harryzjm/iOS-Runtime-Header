//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, UIInputSwitcherGestureState;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherView
{
    NSMutableArray *m_inputModes;
    NSArray *m_inputSwitcherItems;
    _Bool m_isForDictation;
    UIInputSwitcherGestureState *m_gestureState;
    _Bool _messagesWriteboardFromSwitcher;
    _Bool _fileReportFromSwitcher;
    _Bool _showsSwitches;
    CDUnknownBlockType m_finishSplitTransitionBlock;
}

+ (_Bool)canShowKeyboardSettings;
+ (id)activeInstance;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool showsSwitches; // @synthesize showsSwitches=_showsSwitches;
@property(nonatomic) _Bool fileReportFromSwitcher; // @synthesize fileReportFromSwitcher=_fileReportFromSwitcher;
@property(nonatomic) _Bool messagesWriteboardFromSwitcher; // @synthesize messagesWriteboardFromSwitcher=_messagesWriteboardFromSwitcher;
@property(copy, nonatomic) CDUnknownBlockType finishSplitTransitionBlock; // @synthesize finishSplitTransitionBlock=m_finishSplitTransitionBlock;
@property(readonly, nonatomic) NSArray *inputModes; // @synthesize inputModes=m_inputModes;
- (id)buttonPressed:(id)arg1 withEvent:(id)arg2 location:(struct CGPoint)arg3 isLocationInsideViewHitArea:(_Bool)arg4 isForDictation:(_Bool)arg5 tapAction:(CDUnknownBlockType)arg6;
- (id)buttonPressed:(id)arg1 withEvent:(id)arg2 location:(struct CGPoint)arg3 isForDictation:(_Bool)arg4 tapAction:(CDUnknownBlockType)arg5;
- (_Bool)didHitDockItemWithinTypingWindow;
- (_Bool)_isHandBiasSwitchVisible;
- (void)switchAction;
- (void)customizeCell:(id)arg1 forItemAtIndex:(unsigned long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)usesDeviceLanguageForItemAtIndex:(unsigned long long)arg1;
- (id)subtitleFontForItemAtIndex:(unsigned long long)arg1;
- (id)subtitleForItemAtIndex:(unsigned long long)arg1;
- (id)fontForItemAtIndex:(unsigned long long)arg1;
- (id)localizedTitleForItemAtIndex:(unsigned long long)arg1;
- (id)titleForItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)defaultSelectedIndex;
- (id)defaultInputMode;
- (id)_itemWithIdentifier:(id)arg1;
- (struct CGSize)preferredSize;
- (unsigned long long)numberOfItems;
- (void)willFadeForSelectionAtIndex:(unsigned long long)arg1;
- (void)willFade;
- (void)didShow;
- (_Bool)shouldShow;
- (void)showAsPopupForKey:(id)arg1 inLayout:(id)arg2;
- (void)selectPreviousInputMode;
- (id)previousInputMode;
- (void)selectNextInputMode;
- (id)nextInputMode;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (_Bool)shouldSelectItemAtIndex:(unsigned long long)arg1;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;
- (void)_segmentControlValueDidChange:(id)arg1;
- (void)selectInputMode:(id)arg1;
- (void)setInputMode:(id)arg1;
- (void)returnToKeyboardIfNeeded;
- (void)fadeWithDelay:(double)arg1;
- (void)removeFromSuperview;
- (void)selectRowForInputMode:(id)arg1;
- (long long)_indexOfFastSwitchToggleModeForIdentifier:(id)arg1;
- (long long)_indexOfInputSwitcherItemWithIdentifier:(id)arg1;
- (_Bool)shouldShowSelectionExtraViewForIndexPath:(id)arg1;
- (id)selectedInputMode;
- (void)toggleKeyboardFloatingPreference;
- (void)_reloadInputSwitcherItems;
- (_Bool)_canAddLaunchItem;
- (void)reloadInputModes;
- (void)didFinishSplitTransition;
- (id)initWithFrame:(struct CGRect)arg1;

@end


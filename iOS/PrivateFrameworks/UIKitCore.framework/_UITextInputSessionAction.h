//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _UITextInputSessionBeganAction, _UITextInputSessionCopyAction, _UITextInputSessionCutAction, _UITextInputSessionDeletionAction, _UITextInputSessionDictationBeganAction, _UITextInputSessionDictationEndedAction, _UITextInputSessionEndAction, _UITextInputSessionInsertionAction, _UITextInputSessionKeyboardDockItemButtonPressAction, _UITextInputSessionPasteAction, _UITextInputSessionRedoAction, _UITextInputSessionReplaceTextAction, _UITextInputSessionReplaceWithCandidateAction, _UITextInputSessionSelectionAction, _UITextInputSessionUndoAction;

__attribute__((visibility("hidden")))
@interface _UITextInputSessionAction : NSObject
{
    long long _source;
    long long _textInputActionsSource;
    long long _textInputActionsType;
    long long _inputActionCountFromMergedActions;
    NSString *_language;
    NSString *_region;
    NSString *_keyboardVariant;
    NSString *_keyboardLayout;
    NSString *_keyboardType;
    NSString *_appBundleId;
    long long _flagOptions;
    struct _NSRange _relativeRangeBefore;
}

- (void).cxx_destruct;
@property(nonatomic) long long flagOptions; // @synthesize flagOptions=_flagOptions;
@property(copy, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(copy, nonatomic) NSString *keyboardType; // @synthesize keyboardType=_keyboardType;
@property(copy, nonatomic) NSString *keyboardLayout; // @synthesize keyboardLayout=_keyboardLayout;
@property(copy, nonatomic) NSString *keyboardVariant; // @synthesize keyboardVariant=_keyboardVariant;
@property(copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) long long inputActionCountFromMergedActions; // @synthesize inputActionCountFromMergedActions=_inputActionCountFromMergedActions;
@property(nonatomic) long long textInputActionsType; // @synthesize textInputActionsType=_textInputActionsType;
@property(nonatomic) long long textInputActionsSource; // @synthesize textInputActionsSource=_textInputActionsSource;
@property(nonatomic) struct _NSRange relativeRangeBefore; // @synthesize relativeRangeBefore=_relativeRangeBefore;
@property(nonatomic) long long source; // @synthesize source=_source;
- (_Bool)isMergeableWith:(id)arg1;
- (id)inputModeUniqueString;
@property(readonly, nonatomic) long long inputActionCount;
- (id)description;
@property(readonly, nonatomic) _Bool changedContent;
- (long long)mergeActionIfPossible:(id)arg1;
@property(readonly, nonatomic) _UITextInputSessionReplaceTextAction *asReplaceText;
@property(readonly, nonatomic) _UITextInputSessionReplaceWithCandidateAction *asReplaceWithCandidate;
@property(readonly, nonatomic) _UITextInputSessionDictationEndedAction *asDictationEnded;
@property(readonly, nonatomic) _UITextInputSessionDictationBeganAction *asDictationBegan;
@property(readonly, nonatomic) _UITextInputSessionKeyboardDockItemButtonPressAction *asKeyboardDockItemButtonPress;
@property(readonly, nonatomic) _UITextInputSessionRedoAction *asRedo;
@property(readonly, nonatomic) _UITextInputSessionUndoAction *asUndo;
@property(readonly, nonatomic) _UITextInputSessionPasteAction *asPaste;
@property(readonly, nonatomic) _UITextInputSessionCutAction *asCut;
@property(readonly, nonatomic) _UITextInputSessionCopyAction *asCopy;
@property(readonly, nonatomic) _UITextInputSessionSelectionAction *asSelection;
@property(readonly, nonatomic) _UITextInputSessionDeletionAction *asDeletion;
@property(readonly, nonatomic) _UITextInputSessionInsertionAction *asInsertion;
@property(readonly, nonatomic) _UITextInputSessionEndAction *asEnd;
@property(readonly, nonatomic) _UITextInputSessionBeganAction *asBegan;

@end


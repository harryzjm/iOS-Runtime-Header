//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SiriSetup31VoiceSelectionWelcomeController : OBTableWelcomeController
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *orbView;
    MISSING_TYPE *currentVoiceSelection;
    MISSING_TYPE *voiceOptionsView;
    MISSING_TYPE *voiceSelectionPresenter;
    MISSING_TYPE *continueButton;
    MISSING_TYPE *primaryButton;
}

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 adoptTableViewScrollView:(_Bool)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 adoptTableViewScrollView:(_Bool)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3;
- (void)chooseForMeTapped;
- (void)continueTapped;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MUPlaceCallToActionAppearance, MUPlaceRibbonItemViewModel;

__attribute__((visibility("hidden")))
@interface MUPlaceCallToActionRibbonViewModel
{
    MUPlaceRibbonItemViewModel *_callToActionViewModel;
    MUPlaceCallToActionAppearance *_submissionStatus;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus; // @synthesize submissionStatus=_submissionStatus;
- (_Bool)isTappable;
- (CDUnknownBlockType)valueStringProvider;
- (CDUnknownBlockType)titleStringProvider;
- (void)_updateInternalState;
- (id)initWithSubmissionStatus:(id)arg1;

@end


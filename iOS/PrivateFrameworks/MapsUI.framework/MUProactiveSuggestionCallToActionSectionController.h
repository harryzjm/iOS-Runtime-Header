//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKUGCCallToActionViewAppearance, MUButtonCellRowView, MUCallToActionItemCellModel, MUPlaceSectionView;

__attribute__((visibility("hidden")))
@interface MUProactiveSuggestionCallToActionSectionController
{
    long long _expectedCallToActionType;
    MUPlaceSectionView *_sectionView;
    MUButtonCellRowView *_buttonCellRowView;
    MUCallToActionItemCellModel *_proactiveViewModel;
    MKUGCCallToActionViewAppearance *_submissionStatus;
    MKUGCCallToActionViewAppearance *_proactiveCallToActionAppearance;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MKUGCCallToActionViewAppearance *proactiveCallToActionAppearance; // @synthesize proactiveCallToActionAppearance=_proactiveCallToActionAppearance;
- (id)submissionStatus;
- (int)analyticsModuleType;
- (id)sectionView;
- (_Bool)hasContent;
- (void)_updateAvailabilityWithPreviousState:(_Bool)arg1;
- (void)setSubmissionStatus:(id)arg1;
- (id)initWithMapItem:(id)arg1 expectedCallToActionType:(long long)arg2;

@end

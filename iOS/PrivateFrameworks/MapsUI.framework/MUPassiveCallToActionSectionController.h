//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKUGCCallToActionViewAppearance, MUPlaceSectionView;

__attribute__((visibility("hidden")))
@interface MUPassiveCallToActionSectionController
{
    MUPlaceSectionView *_sectionView;
    MKUGCCallToActionViewAppearance *_submissionStatus;
}

- (void).cxx_destruct;
- (id)submissionStatus;
- (void)_instrumentUserAction:(int)arg1;
- (_Bool)hasContent;
- (id)sectionView;
- (void)_updateForSubmissionStatusChangeWithPreviousStatus:(id)arg1;
- (void)setSubmissionStatus:(id)arg1;

@end

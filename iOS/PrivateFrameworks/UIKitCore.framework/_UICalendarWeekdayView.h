//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, _UICalendarDataModel, _UIDatePickerLinkedLabel;

__attribute__((visibility("hidden")))
@interface _UICalendarWeekdayView : UIView
{
    struct {
        _Bool rebuildLabels;
    } _flags;
    NSArray *_labels;
    _UICalendarDataModel *_dataModel;
    _UIDatePickerLinkedLabel *_sizingLabel;
    double _preferredLabelWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double preferredLabelWidth; // @synthesize preferredLabelWidth=_preferredLabelWidth;
@property(readonly, nonatomic) _UIDatePickerLinkedLabel *sizingLabel; // @synthesize sizingLabel=_sizingLabel;
@property(readonly, nonatomic) _UICalendarDataModel *dataModel; // @synthesize dataModel=_dataModel;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didUpdateFontDesign;
- (void)didUpdateLocale;
- (void)didUpdateCalendar;
- (void)_setNeedsRebuildLabels;
- (void)_rebuildLabels;
- (void)_updateFont;
- (id)initWithDataModel:(id)arg1;

@end


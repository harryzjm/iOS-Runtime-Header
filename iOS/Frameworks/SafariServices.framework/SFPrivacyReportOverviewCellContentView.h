//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SafariServices/SFPrivacyReportGridItem-Protocol.h>

@class NSString, UILabel;
@protocol SFPrivacyReportGridItemDelegate;

__attribute__((visibility("hidden")))
@interface SFPrivacyReportOverviewCellContentView : UIView <SFPrivacyReportGridItem>
{
    UIView *_topHairline;
    UIView *_bottomHairline;
    UIView *_trailingHairline;
    _Bool _usesInsetStyle;
    id <SFPrivacyReportGridItemDelegate> _delegate;
    unsigned long long _gridPosition;
    UILabel *_reportTitleLabel;
    UILabel *_reportSubtitleLabel;
    double _maxWidth;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool usesInsetStyle; // @synthesize usesInsetStyle=_usesInsetStyle;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(readonly, nonatomic) UILabel *reportSubtitleLabel; // @synthesize reportSubtitleLabel=_reportSubtitleLabel;
@property(readonly, nonatomic) UILabel *reportTitleLabel; // @synthesize reportTitleLabel=_reportTitleLabel;
@property(nonatomic) unsigned long long gridPosition; // @synthesize gridPosition=_gridPosition;
@property(nonatomic) __weak id <SFPrivacyReportGridItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateHairlinesIfNeeded;
- (void)_updateLayoutMargins;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

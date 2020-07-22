//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class DOCDownloadProgressView, DOCDownloadSpinningArcView, DOCDownloadStopView, UIImageView, UILabel, UIVisualEffectView;

@interface DOCDownloadButton : UIControl
{
    unsigned long long _downloadState;
    UIImageView *_normalImageView;
    DOCDownloadSpinningArcView *_pendingView;
    DOCDownloadProgressView *_progressView;
    DOCDownloadStopView *_stopSymbolView;
    UIVisualEffectView *_downloadedView;
    UILabel *_downloadedLabel;
}

@property(nonatomic) __weak UILabel *downloadedLabel; // @synthesize downloadedLabel=_downloadedLabel;
@property(nonatomic) __weak UIVisualEffectView *downloadedView; // @synthesize downloadedView=_downloadedView;
@property(nonatomic) __weak DOCDownloadStopView *stopSymbolView; // @synthesize stopSymbolView=_stopSymbolView;
@property(nonatomic) __weak DOCDownloadProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak DOCDownloadSpinningArcView *pendingView; // @synthesize pendingView=_pendingView;
@property(nonatomic) __weak UIImageView *normalImageView; // @synthesize normalImageView=_normalImageView;
@property(nonatomic) unsigned long long downloadState; // @synthesize downloadState=_downloadState;
- (void).cxx_destruct;
- (unsigned long long)state;
- (void)updateForState;
- (void)tintColorDidChange;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
@property(nonatomic) double progress;
- (void)awakeFromNib;

@end


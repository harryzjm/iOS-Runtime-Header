//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIMovieScrubber;
@protocol AVEditViewDataSource, AVEditViewDelegate;

__attribute__((visibility("hidden")))
@interface AVEditView : UIView
{
    _Bool _prefersThumbVisible;
    _Bool _scrubbing;
    _Bool _trimming;
    id <AVEditViewDataSource> _dataSource;
    id <AVEditViewDelegate> _delegate;
    UIMovieScrubber *_movieScrubber;
}

- (void).cxx_destruct;
@property(retain) UIMovieScrubber *movieScrubber; // @synthesize movieScrubber=_movieScrubber;
@property(nonatomic, getter=isTrimming) _Bool trimming; // @synthesize trimming=_trimming;
@property(nonatomic, getter=isScrubbing) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(nonatomic) _Bool prefersThumbVisible; // @synthesize prefersThumbVisible=_prefersThumbVisible;
@property(nonatomic) __weak id <AVEditViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <AVEditViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)movieScrubberDidFinishRequestingThumbnails:(id)arg1;
- (void)movieScrubberWillBeginRequestingThumbnails:(id)arg1;
- (void)movieScrubber:(id)arg1 editingEndValueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 editingStartValueDidChange:(double)arg2;
- (void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)movieScrubber:(id)arg1 valueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2;
- (double)movieScrubberThumbnailAspectRatio:(id)arg1;
- (id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
- (double)movieScrubberDuration:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setThumbnailImage:(struct CGImage *)arg1 forTimestamp:(id)arg2;
- (void)userObservationGestureRecognizerFired:(id)arg1;
- (void)reloadData;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
@property(readonly, nonatomic) double trimEndTime;
@property(readonly, nonatomic) double trimStartTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


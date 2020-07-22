//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class SXFullScreenCanvasController, SXFullScreenCaption, SXImageView, UIGestureRecognizer, UIView;
@protocol SXFullScreenCanvasShowable;

@protocol SXFullScreenCanvasShowable <NSObject>
- (_Bool)requestInteractivityFocusForFullScreenCanvasController:(SXFullScreenCanvasController *)arg1;
- (void)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 showable:(id <SXFullScreenCanvasShowable>)arg2 shouldTransferToOriginalViewWithIndex:(unsigned long long)arg3;
- (struct CGRect)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 fullScreenFrameForShowable:(id <SXFullScreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3 withinRect:(struct CGRect)arg4;
- (struct CGRect)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 originalFrameForShowable:(id <SXFullScreenCanvasShowable>)arg2 onCanvasView:(UIView *)arg3 viewIndex:(unsigned long long)arg4;
- (SXImageView *)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 originalViewForShowable:(id <SXFullScreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (unsigned long long)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 viewIndexForPoint:(struct CGPoint)arg2 inShowable:(id <SXFullScreenCanvasShowable>)arg3;
- (UIView *)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 canvasViewForShowable:(id <SXFullScreenCanvasShowable>)arg2;
- (void)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 shouldAddGestureView:(UIView *)arg2 forShowable:(id <SXFullScreenCanvasShowable>)arg3;
- (unsigned long long)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 numberOfViewsForShowable:(id <SXFullScreenCanvasShowable>)arg2;

@optional
- (_Bool)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 showable:(id <SXFullScreenCanvasShowable>)arg2 gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg3;
- (void)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 showable:(id <SXFullScreenCanvasShowable>)arg2 didHideViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 showable:(id <SXFullScreenCanvasShowable>)arg2 willShowViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 showable:(id <SXFullScreenCanvasShowable>)arg2 didShowViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 didHideShowable:(id <SXFullScreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 willHideShowable:(id <SXFullScreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 didShowShowable:(id <SXFullScreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (_Bool)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 willShowShowable:(id <SXFullScreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (SXFullScreenCaption *)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 captionForShowable:(id <SXFullScreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
@end


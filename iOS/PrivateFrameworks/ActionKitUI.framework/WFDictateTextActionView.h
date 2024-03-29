//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UITextView, WFDictateTextActionStopButton;
@protocol WFDictateTextActionViewDelegate;

__attribute__((visibility("hidden")))
@interface WFDictateTextActionView : UIView
{
    id <WFDictateTextActionViewDelegate> _delegate;
    UITextView *_textView;
    WFDictateTextActionStopButton *_stopButton;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WFDictateTextActionStopButton *stopButton; // @synthesize stopButton=_stopButton;
@property(nonatomic) __weak UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <WFDictateTextActionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateWithTranscription:(id)arg1;
- (void)stopButtonTapped;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 padded:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@protocol NCSizeObservingViewDelegate;

__attribute__((visibility("hidden")))
@interface NCSizeObservingView : UIView
{
    _Bool _delegateInterestedInSizeChanges;
    id <NCSizeObservingViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <NCSizeObservingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;

@end

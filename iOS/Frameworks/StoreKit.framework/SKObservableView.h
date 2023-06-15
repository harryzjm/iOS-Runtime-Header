//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@protocol SKObservableViewDelegate;

__attribute__((visibility("hidden")))
@interface SKObservableView : UIView
{
    id <SKObservableViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SKObservableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setHidden:(_Bool)arg1;
- (void)setAlpha:(double)arg1;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol UIDebuggingZoomDelegate;

__attribute__((visibility("hidden")))
@interface UIDebuggingZoomLoupeView
{
    id <UIDebuggingZoomDelegate> _delegate;
    struct CGPoint _currentlyInspectedPoint;
}

@property(nonatomic) __weak id <UIDebuggingZoomDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGPoint currentlyInspectedPoint; // @synthesize currentlyInspectedPoint=_currentlyInspectedPoint;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


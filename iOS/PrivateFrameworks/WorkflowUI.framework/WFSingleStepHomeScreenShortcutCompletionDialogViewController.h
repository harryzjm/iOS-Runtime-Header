//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSTimer;

@interface WFSingleStepHomeScreenShortcutCompletionDialogViewController
{
    NSTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void)viewDidAppear:(_Bool)arg1;
- (id)responseForInteractiveDismissal;
- (_Bool)allowsInteractiveDismissal;
- (void)platterInteractionDidFinish;
- (void)platterInteractionDidBegin;
- (void)startTimer;
- (void)loadView;

@end

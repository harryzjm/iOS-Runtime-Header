//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol WFTriggerComposeViewControllerDelegate;

@interface WFTriggerComposeViewController
{
    id <WFTriggerComposeViewControllerDelegate> delegate;
    unsigned long long _mode;
}

@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <WFTriggerComposeViewControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)didTapNext:(id)arg1;
- (id)doneBarButtonItem;
- (void)dismissForTutorial:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)emptyStateString;
- (void)viewDidLoad;
- (_Bool)isModalInPresentation;
- (id)initWithWorkflow:(id)arg1 mode:(unsigned long long)arg2 database:(id)arg3;

@end

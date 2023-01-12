//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <WorkflowEditor/WFTriggerConfigurationClass-Protocol.h>

@class NSString, WFTrigger;
@protocol WFTriggerConfigurationViewControllerDelegate;

@interface WFTriggerConfigurationViewController : UIViewController <WFTriggerConfigurationClass>
{
    WFTrigger *_trigger;
    id <WFTriggerConfigurationViewControllerDelegate> _delegate;
    unsigned long long _mode;
}

+ (Class)viewControllerClassForTriggerClass:(Class)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <WFTriggerConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WFTrigger *trigger; // @synthesize trigger=_trigger;
- (void)finish;
- (void)dismiss:(id)arg1;
- (void)viewDidLoad;
- (_Bool)isModalInPresentation;
@property(readonly, nonatomic) _Bool shouldEnableNextButton;
- (void)updateNextButtonEnabledState;
- (id)initWithTrigger:(id)arg1 mode:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

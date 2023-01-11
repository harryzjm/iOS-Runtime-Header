//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFCharacteristicTriggerBuilder, HUCharacteristicTriggerServicePickerContentViewController;
@protocol HUTriggerEditorDelegate;

@interface HUCharacteristicTriggerServicePickerViewController
{
}

+ (_Bool)adoptsDefaultGridLayoutMargins;
+ (unsigned long long)sourceForCharacteristicTriggerBuilder:(id)arg1;
+ (_Bool)canPickServicesFromSource:(unsigned long long)arg1 home:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType filter;
@property(nonatomic) __weak id <HUTriggerEditorDelegate> delegate;
@property(readonly, nonatomic) unsigned long long source;
@property(readonly, nonatomic) unsigned long long mode;
@property(readonly, nonatomic) HFCharacteristicTriggerBuilder *characteristicTriggerBuilder;
@property(readonly, nonatomic) HUCharacteristicTriggerServicePickerContentViewController *servicePickerContentViewController;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)viewDidLoad;
- (id)initWithCharacteristicTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 source:(unsigned long long)arg3 delegate:(id)arg4;
- (id)initWithInstructionsItem:(id)arg1 contentViewController:(id)arg2;

@end

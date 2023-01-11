//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFActionSetBuilder;
@protocol HUSceneServicePickerViewControllerDelegate;

@interface HUSceneServicePickerViewController
{
    id <HUSceneServicePickerViewControllerDelegate> _servicePickerDelegate;
    HFActionSetBuilder *_actionSetBuilder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HFActionSetBuilder *actionSetBuilder; // @synthesize actionSetBuilder=_actionSetBuilder;
@property(nonatomic) __weak id <HUSceneServicePickerViewControllerDelegate> servicePickerDelegate; // @synthesize servicePickerDelegate=_servicePickerDelegate;
- (void)_validateDoneButton;
- (id)_updateActionSetBuilder;
- (_Bool)_canSelectMediaAccessoryItem:(id)arg1;
- (void)_presentUnsupportedAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)canSelectItem:(id)arg1 indexPath:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)layoutOptionsForSection:(long long)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)didChangeSelection;
- (void)_done:(id)arg1;
- (void)_cancel:(id)arg1;
- (id)initWithServiceGridItemManager:(id)arg1;
- (id)initWithActionSetBuilder:(id)arg1 servicePickerDelegate:(id)arg2;

@end

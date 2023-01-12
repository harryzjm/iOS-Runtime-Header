//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContactProperty, CNContactStore, CNHealthStoreManager, CNUINavigationListViewController, NSString, UIAlertController;
@protocol CNScheduler;

__attribute__((visibility("hidden")))
@interface CNEmergencyContactAction
{
    _Bool _addingToEmergency;
    CNContactStore *_contactStore;
    CNHealthStoreManager *_healthStoreManager;
    CNContactProperty *_contactProperty;
    UIAlertController *_alertController;
    CNUINavigationListViewController *_listController;
    id <CNScheduler> _mainThreadScheduler;
    id <CNScheduler> _workQueue;
}

+ (id)log;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <CNScheduler> workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) id <CNScheduler> mainThreadScheduler; // @synthesize mainThreadScheduler=_mainThreadScheduler;
@property(retain, nonatomic) CNUINavigationListViewController *listController; // @synthesize listController=_listController;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) CNContactProperty *contactProperty; // @synthesize contactProperty=_contactProperty;
@property(retain, nonatomic) CNHealthStoreManager *healthStoreManager; // @synthesize healthStoreManager=_healthStoreManager;
@property(nonatomic) _Bool addingToEmergency; // @synthesize addingToEmergency=_addingToEmergency;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void)medicalIDViewControllerDidFinish:(id)arg1;
- (void)medicalIDViewControllerDidSave:(id)arg1;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (void)pickerDidCancel:(id)arg1;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)navigationListController:(id)arg1 didSelectItem:(id)arg2;
- (void)showRelationshipPickerForContactProperty:(id)arg1 sender:(id)arg2;
- (void)showConfirmRemoveAlertWithSender:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentDisambiguationAlertWithSender:(id)arg1;
- (void)createMedicalIDWithEmergencyContact:(id)arg1;
- (void)showHKMedicalIDViewControllerForMedicalID:(id)arg1;
- (void)performActionWithSender:(id)arg1;
- (void)performActionWithContactProperty:(id)arg1 relationship:(id)arg2;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (id)initWithContact:(id)arg1 healthStoreManager:(id)arg2 propertyItems:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


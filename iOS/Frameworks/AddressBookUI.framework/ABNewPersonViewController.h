//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AddressBookUI/CNContactViewControllerPrivateDelegate-Protocol.h>

@class CNContact, CNContactViewController, NSString;
@protocol ABNewPersonViewControllerDelegate;

@interface ABNewPersonViewController : UIViewController <CNContactViewControllerPrivateDelegate>
{
    void *_addressBook;
    void *_displayedPerson;
    id <ABNewPersonViewControllerDelegate> _newPersonViewDelegate;
    const void *_parentGroup;
    CNContactViewController *_cnContactViewController;
    void *_parentSource;
    CNContact *_mergeContact;
}

@property(retain, nonatomic) CNContact *mergeContact; // @synthesize mergeContact=_mergeContact;
@property(nonatomic) void *parentSource; // @synthesize parentSource=_parentSource;
@property(retain, nonatomic) CNContactViewController *cnContactViewController; // @synthesize cnContactViewController=_cnContactViewController;
@property(nonatomic) const void *parentGroup; // @synthesize parentGroup=_parentGroup;
- (void)save:(id)arg1;
- (_Bool)savesNewContactOnSuspend;
- (void)setSavesNewContactOnSuspend:(_Bool)arg1;
@property(nonatomic) _Bool showsCancelButton;
- (void)loadContactViewController;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (struct CGSize)preferredContentSize;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)loadView;
@property(nonatomic) const void *displayedPerson;
@property(nonatomic) const void *addressBook;
@property(nonatomic) id <ABNewPersonViewControllerDelegate> newPersonViewDelegate;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


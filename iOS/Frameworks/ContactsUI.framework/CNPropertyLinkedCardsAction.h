//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContactContentViewController, CNMutableContact;
@protocol CNContactContentViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNPropertyLinkedCardsAction
{
    id <CNContactContentViewControllerDelegate> _contactDelegate;
    CNContactContentViewController *_contactController;
    CNMutableContact *_linkedContact;
}

@property(retain) CNMutableContact *linkedContact; // @synthesize linkedContact=_linkedContact;
@property(retain) CNContactContentViewController *contactController; // @synthesize contactController=_contactController;
@property __weak id <CNContactContentViewControllerDelegate> contactDelegate; // @synthesize contactDelegate=_contactDelegate;
- (void).cxx_destruct;
- (void)setPreferredForName;
- (void)setPreferredForImage;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (void)dealloc;
- (id)initWithContact:(id)arg1;

@end


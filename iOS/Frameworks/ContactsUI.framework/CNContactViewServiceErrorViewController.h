//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/CNContactContentViewController-Protocol.h>

@class NSString;
@protocol CNContactViewControllerPPTDelegate, CNContactViewHostProtocol;

__attribute__((visibility("hidden")))
@interface CNContactViewServiceErrorViewController <CNContactContentViewController>
{
    id <CNContactViewControllerPPTDelegate> pptDelegate;
    id <CNContactViewHostProtocol> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CNContactViewHostProtocol> delegate; // @synthesize delegate;
@property(nonatomic) __weak id <CNContactViewControllerPPTDelegate> pptDelegate; // @synthesize pptDelegate;
- (void)performConfirmedCancel;
- (void)toggleEditing;
- (void)editCancel;
- (void)didChangeToShowTitle:(_Bool)arg1;
- (void)didChangeToEditMode:(_Bool)arg1;
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

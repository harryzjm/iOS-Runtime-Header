//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CalDAV/CoreDAVTaskDelegate-Protocol.h>
#import <CalDAV/CoreDAVTaskGroupDelegate-Protocol.h>

@class CoreDAVUpdateACLTaskGroup, NSDictionary, NSMutableDictionary, NSSet, NSString, NSURL;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVAddDropBoxAttachmentsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate, CoreDAVTaskGroupDelegate>
{
    _Bool _attendeesCanManageDropBox;
    int _state;
    NSDictionary *_putFailureSizes;
    NSMutableDictionary *_sentAttachmentURLsToETags;
    NSURL *_dropboxURL;
    NSDictionary *_attachments;
    NSDictionary *_contentTypes;
    NSSet *_attendeePrincipalURLs;
    NSSet *_aceItems;
    CoreDAVUpdateACLTaskGroup *_updateACLTaskGroup;
}

+ (id)dropboxACEItemsForPrincipalURLs:(id)arg1 baseURL:(id)arg2 writable:(_Bool)arg3;
@property(retain, nonatomic) CoreDAVUpdateACLTaskGroup *updateACLTaskGroup; // @synthesize updateACLTaskGroup=_updateACLTaskGroup;
@property(retain, nonatomic) NSSet *aceItems; // @synthesize aceItems=_aceItems;
@property(retain, nonatomic) NSSet *attendeePrincipalURLs; // @synthesize attendeePrincipalURLs=_attendeePrincipalURLs;
@property(retain, nonatomic) NSDictionary *contentTypes; // @synthesize contentTypes=_contentTypes;
@property(retain, nonatomic) NSDictionary *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) NSURL *dropboxURL; // @synthesize dropboxURL=_dropboxURL;
@property(retain, nonatomic) NSMutableDictionary *sentAttachmentURLsToETags; // @synthesize sentAttachmentURLsToETags=_sentAttachmentURLsToETags;
@property(nonatomic) _Bool attendeesCanManageDropBox; // @synthesize attendeesCanManageDropBox=_attendeesCanManageDropBox;
@property(retain, nonatomic) NSDictionary *putFailureSizes; // @synthesize putFailureSizes=_putFailureSizes;
@property(nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)startTaskGroup;
- (void)_sendAttachments;
- (void)_makeDropBox;
- (void)_updateACLWithState:(int)arg1;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
@property(readonly, retain, nonatomic) NSDictionary *etags;
- (id)initWithAccountInfoProvider:(id)arg1 dropboxURL:(id)arg2 attachments:(id)arg3 contentTypes:(id)arg4 attendeePrincipalURLs:(id)arg5 attendeesCanManageDropBox:(_Bool)arg6 taskManager:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <CoreDAVTaskGroupDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


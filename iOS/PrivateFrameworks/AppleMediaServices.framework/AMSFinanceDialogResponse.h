//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSFinancePerformable-Protocol.h>

@class AMSDialogRequest, AMSURLTaskInfo, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSFinanceDialogResponse : NSObject <AMSFinancePerformable>
{
    _Bool _containsCommerceUIURL;
    NSDictionary *_dialogDictionary;
    AMSDialogRequest *_dialogRequest;
    long long _kind;
    AMSURLTaskInfo *_taskInfo;
}

+ (id)_updatedDialogResultFromResult:(id)arg1 engagementResult:(id)arg2 error:(id)arg3;
+ (void)_stashTIDContinueHeadersForResult:(id)arg1 info:(id)arg2;
+ (_Bool)_shouldSendOverIDS:(id)arg1 taskInfo:(id)arg2;
+ (id)_presentEngagementForResult:(id)arg1 taskInfo:(id)arg2;
+ (id)_presentIDSDialog:(id)arg1 taskInfo:(id)arg2;
+ (id)_presentDialog:(id)arg1 taskInfo:(id)arg2;
+ (_Bool)_credentialSource:(unsigned long long)arg1 satisfiesAuthenticationType:(unsigned long long)arg2;
+ (id)performFinanceDialog:(id)arg1 taskInfo:(id)arg2;
+ (id)handleDialogResult:(id)arg1 taskInfo:(id)arg2;
+ (long long)dialogKindForTaskInfo:(id)arg1 withResponseDictionary:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) AMSURLTaskInfo *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(nonatomic) long long kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) _Bool containsCommerceUIURL; // @synthesize containsCommerceUIURL=_containsCommerceUIURL;
@property(readonly, copy, nonatomic) NSDictionary *dialogDictionary; // @synthesize dialogDictionary=_dialogDictionary;
- (id)_URLForCommerceUIFromURL:(id)arg1 tidContinue:(_Bool)arg2;
- (_Bool)_isCommerceUIURL:(id)arg1 actionType:(long long)arg2 URLType:(long long)arg3;
- (id)_createRequestButtonsFromDialogDictionary:(id)arg1;
- (id)_createDialogRequest;
- (id)_createActionFromButtonDictionary:(id)arg1 title:(id)arg2;
- (long long)_actionTypeFromButtonDictionary:(id)arg1;
- (id)performWithTaskInfo:(id)arg1;
@property(readonly, nonatomic) AMSDialogRequest *dialogRequest; // @synthesize dialogRequest=_dialogRequest;
- (id)initWithDialogDictionary:(id)arg1 kind:(long long)arg2 taskInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

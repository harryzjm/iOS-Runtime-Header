//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICSharedListeningConnectionReport, IDSAccount, IDSPseudonym, IDSService, MSVTimer, NSDictionary, NSString, NSURL, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICLiveLinkQRConnectionDataSource : NSObject
{
    IDSService *_service;
    IDSAccount *_account;
    NSUUID *_groupSessionIdentifier;
    NSDictionary *_groupSessionOptions;
    NSURL *_sharedListeningSessionInviteURL;
    NSString *_sharedListeningSessionIdentifier;
    NSString *_sharedSessionToken;
    ICSharedListeningConnectionReport *_report;
    CDUnknownBlockType _dataSourceErrorHandler;
    IDSPseudonym *_pseudonym;
    MSVTimer *_pseudonymRenewalTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_externalIdentifier;
}

+ (id)dataSourceForExistingSharedListeningSession:(id)arg1 identity:(id)arg2;
+ (id)dataSourceForNewSharedListeningSessionWithIdentity:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) MSVTimer *pseudonymRenewalTimer; // @synthesize pseudonymRenewalTimer=_pseudonymRenewalTimer;
@property(retain, nonatomic) IDSPseudonym *pseudonym; // @synthesize pseudonym=_pseudonym;
@property(copy, nonatomic) CDUnknownBlockType dataSourceErrorHandler; // @synthesize dataSourceErrorHandler=_dataSourceErrorHandler;
@property(nonatomic) __weak ICSharedListeningConnectionReport *report; // @synthesize report=_report;
@property(retain, nonatomic) NSString *sharedSessionToken; // @synthesize sharedSessionToken=_sharedSessionToken;
@property(copy, nonatomic) NSString *sharedListeningSessionIdentifier; // @synthesize sharedListeningSessionIdentifier=_sharedListeningSessionIdentifier;
@property(retain, nonatomic) NSURL *sharedListeningSessionInviteURL; // @synthesize sharedListeningSessionInviteURL=_sharedListeningSessionInviteURL;
@property(retain, nonatomic) NSDictionary *groupSessionOptions; // @synthesize groupSessionOptions=_groupSessionOptions;
@property(retain, nonatomic) NSUUID *groupSessionIdentifier; // @synthesize groupSessionIdentifier=_groupSessionIdentifier;
@property(retain, nonatomic) IDSAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) IDSService *service; // @synthesize service=_service;
@property(readonly, nonatomic) CDUnknownBlockType trustHandler;
@property(readonly, nonatomic) NSString *applicationProtocol;
@property(readonly, nonatomic) NSString *rpcPath;
@property(readonly, nonatomic) NSString *pluginIdentifier;
- (id)sessionURLForBag:(id)arg1 error:(id *)arg2;
- (void)_joinSharedListeningSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_revokeUserPseudonymWithCompletion:(CDUnknownBlockType)arg1;
- (void)_renewUserPseudonym;
- (void)_beginPseudonymAutoRenewal;
- (void)_provisionUserPseudonymWithCompletion:(CDUnknownBlockType)arg1;
- (void)populateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithSharedListeningSessionIdentifier:(id)arg1 identity:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


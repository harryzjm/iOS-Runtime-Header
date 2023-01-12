//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DownloadInfo, MADActivityCommandRequest, MADActivityStats, NSMutableDictionary, NSMutableString, NSString;
@protocol OS_os_activity, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface MADActivityTracker : NSObject
{
    _Bool _validTracker;
    int _command;
    int _instanceCount;
    unsigned long long _topLevel;
    unsigned long long _initiatorType;
    NSString *_initiatorName;
    unsigned long long _category;
    NSObject<OS_os_activity> *_scopeActivity;
    NSString *_activityUUID;
    NSString *_activityName;
    NSString *_assetType;
    NSMutableString *_logLeader;
    NSMutableString *_failureReason;
    MADActivityStats *_stats;
    NSObject<OS_xpc_object> *_xpcConnection;
    MADActivityCommandRequest *_request;
    NSObject<OS_xpc_object> *_reply;
    DownloadInfo *_downloadInfo;
    unsigned long long _owner;
    MADActivityTracker *_parentTracker;
    NSMutableDictionary *_childDict;
}

+ (id)nameOfStatus:(unsigned long long)arg1;
+ (id)nameOfLayer:(unsigned long long)arg1;
+ (_Bool)persistedCommand:(int)arg1;
+ (unsigned long long)categoryForCommand:(int)arg1;
+ (unsigned long long)topLevelActivityForCommand:(int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *childDict; // @synthesize childDict=_childDict;
@property(retain, nonatomic) MADActivityTracker *parentTracker; // @synthesize parentTracker=_parentTracker;
@property(nonatomic) int instanceCount; // @synthesize instanceCount=_instanceCount;
@property(nonatomic) unsigned long long owner; // @synthesize owner=_owner;
@property(retain, nonatomic) DownloadInfo *downloadInfo; // @synthesize downloadInfo=_downloadInfo;
@property(retain, nonatomic) NSObject<OS_xpc_object> *reply; // @synthesize reply=_reply;
@property(retain, nonatomic) MADActivityCommandRequest *request; // @synthesize request=_request;
@property(nonatomic) int command; // @synthesize command=_command;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) MADActivityStats *stats; // @synthesize stats=_stats;
@property(readonly, nonatomic) NSMutableString *failureReason; // @synthesize failureReason=_failureReason;
@property(readonly, nonatomic) NSMutableString *logLeader; // @synthesize logLeader=_logLeader;
@property(nonatomic) _Bool validTracker; // @synthesize validTracker=_validTracker;
@property(readonly, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property(retain, nonatomic) NSString *activityName; // @synthesize activityName=_activityName;
@property(readonly, nonatomic) NSString *activityUUID; // @synthesize activityUUID=_activityUUID;
@property(retain, nonatomic) NSObject<OS_os_activity> *scopeActivity; // @synthesize scopeActivity=_scopeActivity;
@property(readonly, nonatomic) unsigned long long category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *initiatorName; // @synthesize initiatorName=_initiatorName;
@property(readonly, nonatomic) unsigned long long initiatorType; // @synthesize initiatorType=_initiatorType;
@property(readonly, nonatomic) unsigned long long topLevel; // @synthesize topLevel=_topLevel;
- (void)sendReply;
- (void)extendLogLeader:(id)arg1 withValue:(id)arg2;
- (void)assignOwner:(unsigned long long)arg1;
- (void)leaveOSActivityScope;
- (void)enterOSActivityScope;
- (void)perpareOSActivityScope;
- (void)failureResult:(int)arg1 ofResultName:(id)arg2 forReason:(id)arg3;
- (void)warningNote:(id)arg1 fromMethod:(id)arg2 warning:(id)arg3;
- (void)successWithIssue:(id)arg1;
- (void)assignParentTracker:(id)arg1;
- (void)usesChildDict;
- (void)associateDownloadInfo:(id)arg1;
- (void)associateCommandRequest:(id)arg1;
- (_Bool)associateEventualReply:(id)arg1 withCommand:(int)arg2;
- (void)associateActivityName:(id)arg1;
- (void)associateXPCConnection:(id)arg1;
- (void)invalidate;
- (id)init:(unsigned long long)arg1 fromInitiator:(unsigned long long)arg2 ofName:(id)arg3 withCategory:(unsigned long long)arg4 forAssetType:(id)arg5 associatedWith:(id)arg6;

@end


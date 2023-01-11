//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSObject, NSOrderedSet, PLAssetsdClientServiceSender;
@protocol OS_xpc_object;

@interface PHChangeRequestJob : PLDaemonJob
{
    NSOrderedSet *_inserts;
    NSOrderedSet *_updates;
    NSOrderedSet *_deletes;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_xpc_object> *_xpcInserts;
    NSObject<OS_xpc_object> *_xpcUpdates;
    NSObject<OS_xpc_object> *_xpcDeletes;
    PLAssetsdClientServiceSender *_clientSender;
}

+ (void)_addChangeRequests:(id)arg1 toXPCDict:(id)arg2 withKey:(const char *)arg3;
+ (void)applyPhotoKitInserts:(id)arg1 updates:(id)arg2 deletes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) PLAssetsdClientServiceSender *clientSender; // @synthesize clientSender=_clientSender;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcDeletes; // @synthesize xpcDeletes=_xpcDeletes;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcUpdates; // @synthesize xpcUpdates=_xpcUpdates;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcInserts; // @synthesize xpcInserts=_xpcInserts;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSOrderedSet *deletes; // @synthesize deletes=_deletes;
@property(copy, nonatomic) NSOrderedSet *updates; // @synthesize updates=_updates;
@property(copy, nonatomic) NSOrderedSet *inserts; // @synthesize inserts=_inserts;
- (void).cxx_destruct;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;
- (void)handleReply;
- (void)run;
- (long long)daemonOperation;

@end


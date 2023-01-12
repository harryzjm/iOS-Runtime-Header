//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContainerManagerCommon/NSCopying-Protocol.h>
#import <ContainerManagerCommon/NSObject-Protocol.h>

@class MCMFSNode, MCMPOSIXUser, NSURL;
@protocol MCMManagedPath;

@protocol MCMManagedPath <NSObject, NSCopying>
@property(retain, nonatomic) MCMFSNode *fsNode;
@property(readonly, nonatomic) MCMPOSIXUser *owner;
@property(readonly, nonatomic) unsigned long long ACLConfig;
@property(readonly, nonatomic) int dpClass;
@property(readonly, nonatomic) unsigned short mode;
@property(readonly, nonatomic) id <MCMManagedPath> parent;
@property(readonly, nonatomic) unsigned long long flags;
@property(readonly, nonatomic) NSURL *url;
@end


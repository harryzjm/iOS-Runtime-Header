//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriVideoIntents/NSObject-Protocol.h>

@class NSString;
@protocol TRINotificationToken;

@protocol TRINamespaceUpdateProtocol <NSObject>
@property(nonatomic, readonly) id <TRINotificationToken> token;
@property(nonatomic, readonly) NSString *namespaceName;
@property(nonatomic, readonly) unsigned int namespaceId;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Synapse/NSObject-Protocol.h>

@class NSString, NSUserActivity;

@protocol SYDocumentWorkflowsDataStore <NSObject>
- (_Bool)saveUserActivity:(NSUserActivity *)arg1 forRelatedUniqueIdentifier:(NSString *)arg2 sourceBundleIdentifier:(NSString *)arg3 error:(id *)arg4;
- (NSUserActivity *)fetchUserActivityWithRelatedUniqueIdentifier:(NSString *)arg1 error:(id *)arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DVTFoundation/DTXAllowedRPC-Protocol.h>

@class NSDictionary;

@protocol DVTDTApplicationWorkspaceClient <DTXAllowedRPC>
- (void)applicationUninstalled:(NSDictionary *)arg1;
- (void)applicationInstalled:(NSDictionary *)arg1;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NPKPassSyncEngine, NSData, NSString;

@protocol NPKPassSyncEngineDataSource <NSObject>
- (NSData *)passSyncEngine:(NPKPassSyncEngine *)arg1 dataForPassWithUniqueID:(NSString *)arg2;
@end


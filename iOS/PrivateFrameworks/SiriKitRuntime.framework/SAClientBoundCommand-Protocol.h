//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriKitRuntime/SAAceCommand-Protocol.h>
#import <SiriKitRuntime/SAAceReferable-Protocol.h>

@class NSArray, NSString;

@protocol SAClientBoundCommand <SAAceCommand, SAAceReferable>
@property(copy, nonatomic) NSArray *callbacks;
@property(copy, nonatomic) NSString *appId;
- (_Bool)requiresResponse;
@end


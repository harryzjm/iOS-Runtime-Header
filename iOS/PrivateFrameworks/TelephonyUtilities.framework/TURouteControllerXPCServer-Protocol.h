//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSString;

@protocol TURouteControllerXPCServer <NSObject>
- (oneway void)pickRouteWithUniqueIdentifier:(NSString *)arg1;
- (oneway void)routesByUniqueIdentifier:(void (^)(NSDictionary *))arg1;
@end


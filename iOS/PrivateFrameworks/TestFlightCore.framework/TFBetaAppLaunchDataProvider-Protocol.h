//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TestFlightCore/NSObject-Protocol.h>

@class NSString;

@protocol TFBetaAppLaunchDataProvider <NSObject>
- (void)loadLaunchScreenForIdentifier:(NSString *)arg1 withCompletionHandler:(void (^)(TFLaunchScreen *, NSError *))arg2;
@end

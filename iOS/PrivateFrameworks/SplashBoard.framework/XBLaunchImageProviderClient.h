//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/BSBaseXPCClient.h>

@class XBApplicationLaunchCompatibilityInfo;

@interface XBLaunchImageProviderClient : BSBaseXPCClient
{
    XBApplicationLaunchCompatibilityInfo *_appInfo;
}

+ (void)preheatServiceWithTimeout:(double)arg1;
- (void).cxx_destruct;
- (unsigned int)generateImageWithContext:(id)arg1;
- (id)initWithApplicationInfo:(id)arg1;
- (id)init;

@end

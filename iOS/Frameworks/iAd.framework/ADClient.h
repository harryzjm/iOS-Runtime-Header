//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ADClient : NSObject
{
}

+ (id)sharedClient;
- (void)prepareForAdRequests;
- (void)segmentDataForSignedInUserWithBlock:(CDUnknownBlockType)arg1;
- (void)addClientToSegments:(id)arg1 replaceExisting:(_Bool)arg2;
- (void)requestAttributionDetailsWithBlock:(CDUnknownBlockType)arg1;
- (void)lookupAdConversionDetails:(CDUnknownBlockType)arg1;
- (void)determineAppInstallationAttributionWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

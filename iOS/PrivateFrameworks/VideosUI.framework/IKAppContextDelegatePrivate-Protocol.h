//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/IKAppContextDelegate-Protocol.h>

@class IKAppContext, NSURL;

@protocol IKAppContextDelegatePrivate <IKAppContextDelegate>

@optional
- (void)appContext:(IKAppContext *)arg1 scriptForURL:(NSURL *)arg2 cachePolicy:(unsigned long long)arg3 completion:(void (^)(NSString *, NSError *, unsigned long long))arg4;
@end

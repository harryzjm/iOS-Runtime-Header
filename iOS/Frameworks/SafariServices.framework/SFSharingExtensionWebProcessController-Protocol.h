//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol SFSharingExtensionWebProcessController <NSObject>
- (void)finalizeJavaScriptForSharingExtension:(NSString *)arg1 arguments:(NSDictionary *)arg2;
- (void)evaluateJavaScriptForSharingExtension:(NSString *)arg1 javaScript:(NSString *)arg2 completionHandler:(void (^)(NSDictionary *))arg3;
@end


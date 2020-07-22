//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MessageUI/NSItemProviderWriting-Protocol.h>

@class NSArray, NSProgress, NSString, UIItemProvider;

@protocol UIItemProviderWriting <NSItemProviderWriting>
- (NSProgress *)loadDataWithTypeIdentifier:(NSString *)arg1 forItemProviderCompletionHandler:(void (^)(NSData *, NSError *))arg2;

@optional
+ (NSArray *)writableTypeIdentifiersForItemProvider;
- (void)registerLoadHandlersToItemProvider:(UIItemProvider *)arg1;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSItemProviderWriting-Protocol.h>

@class NSArray, NSProgress, NSString;

@protocol UIItemProviderWriting <NSItemProviderWriting>
- (NSProgress *)loadDataWithTypeIdentifier:(NSString *)arg1 forItemProviderCompletionHandler:(void (^)(NSData *, NSError *))arg2;

@optional
+ (NSArray *)writableTypeIdentifiersForItemProvider;
@end

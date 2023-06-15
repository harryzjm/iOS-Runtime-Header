//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StocksUI/NSObject-Protocol.h>

@class NSArray, NSProgress, NSString;

@protocol NSItemProviderWriting <NSObject>
+ (NSArray *)writableTypeIdentifiersForItemProvider;
- (NSProgress *)loadDataWithTypeIdentifier:(NSString *)arg1 forItemProviderCompletionHandler:(void (^)(NSData *, NSError *))arg2;

@optional
+ (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(NSString *)arg1;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
- (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(NSString *)arg1;
@end


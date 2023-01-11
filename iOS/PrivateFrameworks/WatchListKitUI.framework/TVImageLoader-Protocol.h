//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WatchListKitUI/NSObject-Protocol.h>

@class NSString, NSURL;
@protocol IKNetworkRequestLoader;

@protocol TVImageLoader <NSObject>
- (void)cancelLoad:(id)arg1;
- (NSString *)imageKeyForObject:(id)arg1;

@optional
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 requestLoader:(id <IKNetworkRequestLoader>)arg5 completionHandler:(void (^)(TVImage *, NSString *, NSDate *, unsigned long long, NSError *))arg6;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 completionHandler:(void (^)(TVImage *, NSString *, NSDate *, unsigned long long, NSError *))arg5;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 completionHandler:(void (^)(TVImage *, NSString *, NSDate *, unsigned long long, NSError *))arg4;
- (_Bool)hasImageCache;
- (NSURL *)URLForObject:(id)arg1;
@end


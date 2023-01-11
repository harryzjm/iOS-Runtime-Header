//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SilexVideo/NSObject-Protocol.h>

@class AVPlayerItem, NSError;

@protocol SVPlayerItemLoading <NSObject>
@property(readonly, copy, nonatomic) NSError *error;
@property(readonly, nonatomic) AVPlayerItem *item;
@property(readonly, nonatomic) unsigned long long state;
- (void)onLoadingStateChange:(void (^)(id <SVPlayerItemLoading>))arg1;
- (void)load;
@end

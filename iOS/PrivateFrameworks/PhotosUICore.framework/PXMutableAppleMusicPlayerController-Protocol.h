//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol PXMutableAppleMusicPlayerController
@property(nonatomic) double volume;
- (void)pause;
- (void)play;
- (void)prepareToPlayWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)setItemWithStoreID:(NSString *)arg1 startTime:(CDStruct_198678f7)arg2;
@end


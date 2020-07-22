//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSDictionary, NSObject, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRContentItemMetadata
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSURL *_assetURL;
    NSDictionary *_userInfo;
    NSDictionary *_appMetrics;
    NSDictionary *_nowPlayingInfo;
    NSDictionary *_collectionInfo;
    NSDate *_currentPlaybackDate;
    NSDictionary *_deviceSpecificUserInfo;
}

+ (void)initialize;
- (id)customDictionaryRepresentation;
@property(copy, nonatomic) NSDictionary *deviceSpecificUserInfo;
@property(copy, nonatomic) NSDate *currentPlaybackDate;
@property(copy, nonatomic) NSDictionary *collectionInfo;
@property(copy, nonatomic) NSDictionary *nowPlayingInfo;
@property(copy, nonatomic) NSDictionary *appMetrics;
@property(copy, nonatomic) NSDictionary *userInfo;
@property(copy, nonatomic) NSURL *assetURL;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)mergeFrom:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

@end

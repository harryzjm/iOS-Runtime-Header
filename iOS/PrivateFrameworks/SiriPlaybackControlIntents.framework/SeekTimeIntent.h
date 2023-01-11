//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntent.h>

@class DeviceQuery, NSArray, NSNumber;

@interface SeekTimeIntent : INIntent
{
}


// Remaining properties
@property(copy, nonatomic) NSArray *deviceContext; // @dynamic deviceContext;
@property(copy, nonatomic) DeviceQuery *deviceQuery; // @dynamic deviceQuery;
@property(copy, nonatomic) NSArray *devices; // @dynamic devices;
@property(copy, nonatomic) NSNumber *isSkipToEnd; // @dynamic isSkipToEnd;
@property(nonatomic) long long mediaType; // @dynamic mediaType;
@property(copy, nonatomic) NSNumber *playheadPosition; // @dynamic playheadPosition;
@property(copy, nonatomic) NSNumber *shouldStartPlaybackAfterSeek; // @dynamic shouldStartPlaybackAfterSeek;
@end

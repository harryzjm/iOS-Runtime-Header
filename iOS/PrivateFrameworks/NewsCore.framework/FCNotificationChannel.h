//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NTPBNotificationChannel;

@interface FCNotificationChannel : NSObject
{
    NTPBNotificationChannel *_pbNotificationChannel;
    NSString *_channelID;
}

@property(readonly, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPBNotificationChannel:(id)arg1;
- (id)initWithChannelID:(id)arg1;

@end


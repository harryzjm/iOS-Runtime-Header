//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Radio/NSCopying-Protocol.h>
#import <Radio/NSMutableCopying-Protocol.h>

@class NSData, NSDate, NSDictionary, NSString;

@interface RadioPlayEvent : NSObject <NSCopying, NSMutableCopying>
{
    NSDate *_datePlayed;
    long long _endReason;
    double _endTimeInTrack;
    NSString *_externalIdentifier;
    double _startTimeInTrack;
    long long _storeID;
    NSData *_timedMetadata;
    NSDictionary *_trackInfo;
    long long _type;
}

@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSDictionary *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(readonly, copy, nonatomic) NSData *timedMetadata; // @synthesize timedMetadata=_timedMetadata;
@property(readonly, nonatomic) long long storeID; // @synthesize storeID=_storeID;
@property(readonly, nonatomic) double startTimeInTrack; // @synthesize startTimeInTrack=_startTimeInTrack;
@property(readonly, copy, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
@property(readonly, nonatomic) double endTimeInTrack; // @synthesize endTimeInTrack=_endTimeInTrack;
@property(readonly, nonatomic) long long endReason; // @synthesize endReason=_endReason;
@property(readonly, nonatomic) NSDate *datePlayed; // @synthesize datePlayed=_datePlayed;
- (void).cxx_destruct;
- (id)playDictionary;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithType:(long long)arg1;

@end


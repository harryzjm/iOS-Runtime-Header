//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSMutableCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSNumber;

@interface ICRadioPlaybackHistoryItem : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSDate *_expirationDate;
    NSNumber *_pauseTime;
    NSDictionary *_serverTrackInfo;
    NSDate *_skipDate;
    long long _storeIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(readonly, copy, nonatomic) NSDate *skipDate; // @synthesize skipDate=_skipDate;
@property(readonly, copy, nonatomic) NSNumber *pauseTime; // @synthesize pauseTime=_pauseTime;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSDictionary *serverTrackInfo;
@property(readonly, copy, nonatomic) NSMutableDictionary *propertyListRepresentation;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (id)initWithTrack:(id)arg1;

@end

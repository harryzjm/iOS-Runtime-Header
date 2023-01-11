//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface ICMediaApplicationBanner : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_guid;
    NSString *_bundleIdentifier;
    NSString *_target;
    NSDictionary *_rawPayload;
    NSDate *_displayWindowStartTime;
    NSDate *_displayWindowEndTime;
    int _maxDisplayCount;
    int _displayCount;
    NSString *_setID;
    _Bool _hasBeenTapped;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool hasBeenTapped; // @synthesize hasBeenTapped=_hasBeenTapped;
@property(readonly, nonatomic) NSString *setID; // @synthesize setID=_setID;
@property(readonly, nonatomic) int displayCount; // @synthesize displayCount=_displayCount;
@property(readonly, nonatomic) int maxDisplayCount; // @synthesize maxDisplayCount=_maxDisplayCount;
@property(readonly, nonatomic) NSDate *displayWindowEndTime; // @synthesize displayWindowEndTime=_displayWindowEndTime;
@property(readonly, nonatomic) NSDate *displayWindowStartTime; // @synthesize displayWindowStartTime=_displayWindowStartTime;
@property(readonly, nonatomic) NSDictionary *rawPayload; // @synthesize rawPayload=_rawPayload;
@property(readonly, nonatomic) NSString *target; // @synthesize target=_target;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqualToBanner:(id)arg1;

@end

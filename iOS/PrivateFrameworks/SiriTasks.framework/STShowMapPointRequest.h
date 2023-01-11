//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFSiriRequest.h>

@class NSData, NSDate, NSString;

@interface STShowMapPointRequest : AFSiriRequest
{
    NSData *_placeData;
    NSString *_extSessionGuid;
    NSDate *_extSessionGuidCreatedTimestamp;
    _Bool _isCurrentLocation;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool isCurrentLocation; // @synthesize isCurrentLocation=_isCurrentLocation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)createResponse;
- (id)extSessionGuidCreatedTimestamp;
- (id)extSessionGuid;
- (id)mapPointData;
- (id)_initWithPlaceData:(id)arg1 extSessionGuid:(id)arg2 extSessionGuidCreatedTimestamp:(id)arg3;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface IAPNavigationAccessoryComponent : NSObject
{
    _Bool _isEnabled;
    _Bool __enabledModified;
    unsigned long long _identifier;
    NSString *_name;
    unsigned long long _maxLength_CurrentRoadName;
    unsigned long long _maxLength_DestinationRoadName;
    unsigned long long _maxLength_PostManeuverRoadName;
    unsigned long long _maxLength_ManeuverDescription;
    unsigned long long _maxCapacity_GuidanceManeuver;
}

@property _Bool _enabledModified; // @synthesize _enabledModified=__enabledModified;
@property unsigned long long maxCapacity_GuidanceManeuver; // @synthesize maxCapacity_GuidanceManeuver=_maxCapacity_GuidanceManeuver;
@property unsigned long long maxLength_ManeuverDescription; // @synthesize maxLength_ManeuverDescription=_maxLength_ManeuverDescription;
@property unsigned long long maxLength_PostManeuverRoadName; // @synthesize maxLength_PostManeuverRoadName=_maxLength_PostManeuverRoadName;
@property unsigned long long maxLength_DestinationRoadName; // @synthesize maxLength_DestinationRoadName=_maxLength_DestinationRoadName;
@property unsigned long long maxLength_CurrentRoadName; // @synthesize maxLength_CurrentRoadName=_maxLength_CurrentRoadName;
@property _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(retain) NSString *name; // @synthesize name=_name;
@property unsigned long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDict:(id)arg1;

@end


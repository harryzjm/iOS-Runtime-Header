//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/NSSecureCoding-Protocol.h>

@class NSDate, NSError, NSUUID;

@interface MNRealtimeUpdate : NSObject <NSSecureCoding>
{
    NSUUID *_routeID;
    NSDate *_lastUpdated;
    NSError *_error;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(readonly, nonatomic) NSUUID *routeID; // @synthesize routeID=_routeID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

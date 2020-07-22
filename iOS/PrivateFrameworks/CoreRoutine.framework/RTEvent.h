//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSSecureCoding-Protocol.h>
#import <CoreRoutine/RTTaggableLocation-Protocol.h>

@class NSDate, NSString, NSUUID;

@interface RTEvent : NSObject <RTTaggableLocation, NSSecureCoding>
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSUUID *_locationIdentifier;
    NSUUID *_microLocationIdentifier;
    long long _source;
    NSUUID *_identifier;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(retain, nonatomic) NSUUID *microLocationIdentifier; // @synthesize microLocationIdentifier=_microLocationIdentifier;
@property(retain, nonatomic) NSUUID *locationIdentifier; // @synthesize locationIdentifier=_locationIdentifier;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (_Bool)taggedWithLocationOfInterest;
- (_Bool)taggedWithMicroLocation;
- (void)tagWithLocationOfInterest:(id)arg1;
- (void)tagWithMicroLocation:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 source:(long long)arg3 identifier:(id)arg4;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 source:(long long)arg3;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTransitRoutingIncidentMessage-Protocol.h>
#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOPBTransitRoutingIncidentMessage, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTransitRoutingIncidentMessage : NSObject <GEOTransitRoutingIncidentMessage, NSSecureCoding>
{
    GEOPBTransitRoutingIncidentMessage *_routingIncidentMessage;
    NSArray *_transitIncidents;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSArray *transitIncidents;
@property(readonly, nonatomic) NSString *routingMessage;
- (id)_fakeTransitLineIncidentInLine:(id)arg1;
- (void)_populateTransitIncidentsWithDecoderData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initFakeLineIncidentMessageInLine:(id)arg1;
- (id)initWithIncidentMessage:(id)arg1 decoderData:(id)arg2;
- (id)initWithIncidentMessageIndex:(unsigned long long)arg1 decoderData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

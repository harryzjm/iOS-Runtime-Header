//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SASendInstrumentation <SAServerBoundCommand>
{
}

+ (id)sendInstrumentationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sendInstrumentation;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *payloadVersion;
@property(copy, nonatomic) NSArray *instrumentationBatch;
@property(copy, nonatomic) NSString *eventTransmittedTimestampRefId;
@property(copy, nonatomic) NSNumber *eventTransmittedRelativeToBootTimeTimestampNs;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

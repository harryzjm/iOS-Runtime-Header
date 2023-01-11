//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>
#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSNumber, NSString;

@interface SAPerformDataDetectionMatch <SAServerBoundCommand, SAAceSerializable>
{
}

+ (id)performDataDetectionMatchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)performDataDetectionMatch;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSNumber *location;
@property(copy, nonatomic) NSNumber *length;
@property(copy, nonatomic) NSString *dataDetectionType;
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

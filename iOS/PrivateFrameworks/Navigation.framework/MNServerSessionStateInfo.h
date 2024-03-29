//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface MNServerSessionStateInfo : NSObject
{
    NSData *_sessionState;
    NSUUID *_uniqueRouteID;
    NSData *_directionsResponseID;
    NSData *_etauResponseID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *etauResponseID; // @synthesize etauResponseID=_etauResponseID;
@property(readonly, nonatomic) NSData *directionsResponseID; // @synthesize directionsResponseID=_directionsResponseID;
@property(readonly, nonatomic) NSUUID *uniqueRouteID; // @synthesize uniqueRouteID=_uniqueRouteID;
@property(readonly, nonatomic) NSData *sessionState; // @synthesize sessionState=_sessionState;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateWithSessionState:(id)arg1;
- (void)updateWithETAUResponse:(id)arg1;
- (void)updateWithRoute:(id)arg1;

@end


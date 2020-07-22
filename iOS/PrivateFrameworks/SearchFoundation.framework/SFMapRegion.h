//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFMapRegion-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFMapRegion : NSObject <SFMapRegion, NSSecureCoding, NSCopying>
{
    CDStruct_d6cfdf4e _has;
    double _southLat;
    double _westLng;
    double _northLat;
    double _eastLng;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double eastLng; // @synthesize eastLng=_eastLng;
@property(nonatomic) double northLat; // @synthesize northLat=_northLat;
@property(nonatomic) double westLng; // @synthesize westLng=_westLng;
@property(nonatomic) double southLat; // @synthesize southLat=_southLat;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasEastLng;
- (_Bool)hasNorthLat;
- (_Bool)hasWestLng;
- (_Bool)hasSouthLat;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


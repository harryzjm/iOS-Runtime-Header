//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MapKit/NSSecureCoding-Protocol.h>

@interface _MXExtensionBaseMapRequest : NSObject <NSSecureCoding>
{
    CDStruct_02837cd9 _mapRect;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) CDStruct_02837cd9 mapRect; // @synthesize mapRect=_mapRect;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

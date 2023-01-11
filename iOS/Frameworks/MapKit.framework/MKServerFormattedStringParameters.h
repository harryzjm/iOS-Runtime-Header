//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/NSCopying-Protocol.h>
#import <MapKit/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface MKServerFormattedStringParameters : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_variableOverides;
    CDStruct_57af2063 _options;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *variableOverides; // @synthesize variableOverides=_variableOverides;
@property(readonly, nonatomic) CDStruct_57af2063 options; // @synthesize options=_options;
- (unsigned long long)hash;
- (_Bool)isEqualToServerFormattedStringParameters:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInstructionsDistanceDetailLevel:(long long)arg1 variableOverrides:(id)arg2;
- (id)initWithOptions:(CDStruct_57af2063)arg1 variableOverrides:(id)arg2;

@end

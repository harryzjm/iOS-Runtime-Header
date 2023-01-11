//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFPin-Protocol.h>

@class NSData, NSDictionary, NSString, SFColor, SFLatLng;

@interface SFPin : NSObject <SFPin, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int pinBehavior:1;
    } _has;
    int _pinBehavior;
    SFLatLng *_location;
    SFColor *_pinColor;
    NSString *_label;
    NSString *_resultID;
    NSData *_mapsData;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int pinBehavior; // @synthesize pinBehavior=_pinBehavior;
@property(copy, nonatomic) NSData *mapsData; // @synthesize mapsData=_mapsData;
@property(copy, nonatomic) NSString *resultID; // @synthesize resultID=_resultID;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) SFColor *pinColor; // @synthesize pinColor=_pinColor;
@property(retain, nonatomic) SFLatLng *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasPinBehavior;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


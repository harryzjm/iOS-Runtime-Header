//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FlightUtilities/NSCopying-Protocol.h>
#import <FlightUtilities/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface FUAirline : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_IATACode;
    NSString *_FAACode;
    NSString *_name;
    NSString *_phoneNumber;
    NSURL *_URL;
}

+ (_Bool)supportsSecureCoding;
@property(retain) NSURL *URL; // @synthesize URL=_URL;
@property(retain) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *FAACode; // @synthesize FAACode=_FAACode;
@property(retain) NSString *IATACode; // @synthesize IATACode=_IATACode;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

@end

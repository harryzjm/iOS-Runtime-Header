//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FamilyCircleUI/NSCoding-Protocol.h>
#import <FamilyCircleUI/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface FACircleContext : NSObject <NSCoding, NSSecureCoding>
{
    NSString *_eventType;
    NSString *_clientName;
    NSString *_clientBundleID;
    NSDictionary *_additionalParameters;
}

+ (_Bool)supportsSecureCoding;
+ (id)contextWithData:(id)arg1;
@property(copy, nonatomic) NSDictionary *additionalParameters; // @synthesize additionalParameters=_additionalParameters;
@property(copy, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, copy, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(id)arg1;
- (id)init;
@property(readonly, copy, nonatomic) NSData *dataRepresentation;

@end


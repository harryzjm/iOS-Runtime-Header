//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMCharacteristicMetadata : NSObject <NSSecureCoding, HMObjectMerge>
{
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSNumber *_stepValue;
    NSNumber *_maxLength;
    NSString *_format;
    NSString *_units;
    NSString *_manufacturerDescription;
    NSArray *_validValues;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(copy, nonatomic) NSArray *validValues; // @synthesize validValues=_validValues;
@property(copy, nonatomic) NSString *manufacturerDescription; // @synthesize manufacturerDescription=_manufacturerDescription;
@property(copy, nonatomic) NSString *units; // @synthesize units=_units;
@property(copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) NSNumber *maxLength; // @synthesize maxLength=_maxLength;
@property(retain, nonatomic) NSNumber *stepValue; // @synthesize stepValue=_stepValue;
@property(retain, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(retain, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


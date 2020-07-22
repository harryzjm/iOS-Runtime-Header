//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface HFRelativePercentValue : NSObject <NSCopying, NAIdentifiable>
{
    NSNumber *_value;
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSNumber *_stepValue;
}

+ (id)na_identity;
@property(copy, nonatomic) NSNumber *stepValue; // @synthesize stepValue=_stepValue;
@property(copy, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(copy, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
@property(copy, nonatomic) NSNumber *value; // @synthesize value=_value;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithValue:(id)arg1 forCharacteristic:(id)arg2;
- (id)initWithCharacteristicReadResponse:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

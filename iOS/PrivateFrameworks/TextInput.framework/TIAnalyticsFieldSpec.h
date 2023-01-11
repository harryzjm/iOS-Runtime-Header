//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TIAnalyticsFieldSpec : NSObject
{
    NSString *_name;
}

+ (id)booleanFieldSpecWithName:(id)arg1;
+ (id)floatFieldSpecWithName:(id)arg1 minValue:(double)arg2 maxValue:(double)arg3;
+ (id)floatFieldSpecWithName:(id)arg1 maxValue:(double)arg2;
+ (id)floatFieldSpecWithName:(id)arg1 minValue:(double)arg2;
+ (id)floatFieldSpecWithName:(id)arg1;
+ (id)integerFieldSpecWithName:(id)arg1 minValue:(long long)arg2 maxValue:(long long)arg3;
+ (id)integerFieldSpecWithName:(id)arg1 maxValue:(long long)arg2;
+ (id)integerFieldSpecWithName:(id)arg1 minValue:(long long)arg2;
+ (id)integerFieldSpecWithName:(id)arg1;
+ (id)stringFieldSpecWithName:(id)arg1 allowedValues:(id)arg2;
+ (id)stringFieldSpecWithName:(id)arg1;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)errorFromValue:(id)arg1 code:(long long)arg2 message:(id)arg3;
- (id)errorFromNil;
- (_Bool)validate:(id)arg1 error:(id *)arg2;
- (id)initWithName:(id)arg1;

@end

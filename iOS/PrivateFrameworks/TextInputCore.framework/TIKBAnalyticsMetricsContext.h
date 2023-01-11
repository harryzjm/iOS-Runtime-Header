//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInput/TIAnalyticsMetricsContext.h>

@class NSDictionary, NSString;

@interface TIKBAnalyticsMetricsContext : TIAnalyticsMetricsContext
{
    unsigned char _keyboardType;
    NSString *_layoutName;
    long long _userInterfaceIdiom;
    NSDictionary *_testingParameters;
}

+ (long long)userInterfaceIdiomStringToEnum:(id)arg1;
+ (id)userInterfaceIdiomToString:(long long)arg1;
+ (unsigned char)keyboardTypeStringToEnum:(id)arg1;
+ (id)keyboardTypeEnumToString:(unsigned char)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *testingParameters; // @synthesize testingParameters=_testingParameters;
@property(readonly, nonatomic) long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(readonly, nonatomic) unsigned char keyboardType; // @synthesize keyboardType=_keyboardType;
@property(readonly, nonatomic) NSString *layoutName; // @synthesize layoutName=_layoutName;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithKeyboardState:(id)arg1 testingParameters:(id)arg2;
- (id)initWithKeyboardState:(id)arg1;
- (id)initWithInputLanguage:(id)arg1 inputRegion:(id)arg2 layoutName:(id)arg3 keyboardType:(unsigned char)arg4 userInterfaceIdiom:(long long)arg5 testingParameters:(id)arg6;
- (id)initWithInputLanguage:(id)arg1 inputRegion:(id)arg2 layoutName:(id)arg3 keyboardType:(unsigned char)arg4 userInterfaceIdiom:(long long)arg5;

@end

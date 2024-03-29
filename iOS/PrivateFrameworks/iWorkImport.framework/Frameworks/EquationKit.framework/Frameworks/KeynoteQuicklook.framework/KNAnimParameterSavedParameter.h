//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TSUBezierPath;

@interface KNAnimParameterSavedParameter : NSObject
{
    _Bool _hasMaxValue;
    _Bool _hasMinValue;
    _Bool _removed;
    _Bool _debugOnly;
    NSString *_name;
    unsigned long long _type;
    TSUBezierPath *_pathValue;
    double _doubleValue;
    double _maxValue;
    double _minValue;
    NSString *_parameterDescription;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *parameterDescription; // @synthesize parameterDescription=_parameterDescription;
@property(nonatomic) _Bool debugOnly; // @synthesize debugOnly=_debugOnly;
@property(nonatomic) _Bool removed; // @synthesize removed=_removed;
@property(nonatomic) _Bool hasMinValue; // @synthesize hasMinValue=_hasMinValue;
@property(nonatomic) _Bool hasMaxValue; // @synthesize hasMaxValue=_hasMaxValue;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(retain, nonatomic) TSUBezierPath *pathValue; // @synthesize pathValue=_pathValue;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)p_bezierPathFromSavedPathElements:(id)arg1;
- (id)p_savedPathFromPath:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


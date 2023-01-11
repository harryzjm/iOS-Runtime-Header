//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PPLabeledValue : NSObject
{
    unsigned int _fields;
    NSString *_label;
    NSString *_value;
    double _scoreBoost;
}

+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2 scoreBoost:(double)arg3 fields:(unsigned int)arg4;
+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2 scoreBoost:(double)arg3;
+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2;
@property(readonly, nonatomic) unsigned int fields; // @synthesize fields=_fields;
@property(readonly, nonatomic) double scoreBoost; // @synthesize scoreBoost=_scoreBoost;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)initWithLabel:(id)arg1 value:(id)arg2 scoreBoost:(double)arg3 fields:(unsigned int)arg4;

@end


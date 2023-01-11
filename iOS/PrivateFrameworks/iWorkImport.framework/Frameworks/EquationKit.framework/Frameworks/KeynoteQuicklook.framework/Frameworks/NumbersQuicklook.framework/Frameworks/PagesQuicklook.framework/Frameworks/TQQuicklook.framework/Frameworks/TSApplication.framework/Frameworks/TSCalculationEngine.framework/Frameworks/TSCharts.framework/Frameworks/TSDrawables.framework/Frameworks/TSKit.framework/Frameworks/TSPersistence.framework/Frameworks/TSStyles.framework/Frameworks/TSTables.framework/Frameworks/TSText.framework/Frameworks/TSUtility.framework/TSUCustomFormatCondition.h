//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSUtility/NSCopying-Protocol.h>

@class TSUCustomFormatData;

@interface TSUCustomFormatCondition : NSObject <NSCopying>
{
    int _conditionType;
    double _conditionValue;
    TSUCustomFormatData *_data;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TSUCustomFormatData *data; // @synthesize data=_data;
@property(readonly, nonatomic) double conditionValue; // @synthesize conditionValue=_conditionValue;
@property(readonly, nonatomic) int conditionType; // @synthesize conditionType=_conditionType;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(int)arg1 value:(double)arg2 data:(id)arg3;
- (id)init;

@end

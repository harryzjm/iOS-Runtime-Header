//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <QuartzCore/NSSecureCoding-Protocol.h>

@interface CAMediaTimingFunction : NSObject <NSSecureCoding>
{
    struct CAMediaTimingFunctionPrivate *_priv;
}

+ (_Bool)supportsSecureCoding;
+ (id)functionWithName:(id)arg1;
+ (id)functionWithControlPoints:(float)arg1:(float)arg2:(float)arg3:(float)arg4;
+ (void)CAMLParserEndElement:(id)arg1 content:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)getControlPointAtIndex:(unsigned long long)arg1 values:(float [2])arg2;
- (void)_getPoints:(double *)arg1;
- (void)dealloc;
- (id)initWithControlPoints:(float)arg1:(float)arg2:(float)arg3:(float)arg4;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)CAMLType;
- (float)_solveForInput:(float)arg1;
- (unsigned long long)CA_copyNumericValue:(double [20])arg1;
- (struct Object *)CA_copyRenderValue;

@end


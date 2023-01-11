//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUI/NSCoding-Protocol.h>
#import <CoreUI/NSCopying-Protocol.h>

@interface CUIPSDGradientStop : NSObject <NSCoding, NSCopying>
{
    double location;
}

+ (void)initialize;
- (_Bool)isOpacityStop;
- (_Bool)isColorStop;
- (_Bool)isDoubleStop;
- (void)setLocation:(double)arg1;
- (double)location;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(double)arg1;

@end

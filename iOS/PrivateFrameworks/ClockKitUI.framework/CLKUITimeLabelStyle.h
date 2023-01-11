//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClockKitUI/NSCopying-Protocol.h>

@class CLKFont;

@interface CLKUITimeLabelStyle : NSObject <NSCopying>
{
    CLKFont *_threeDigitFont;
    CLKFont *_fourDigitFont;
    CLKFont *_designatorFont;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CLKFont *designatorFont; // @synthesize designatorFont=_designatorFont;
@property(retain, nonatomic) CLKFont *fourDigitFont; // @synthesize fourDigitFont=_fourDigitFont;
@property(retain, nonatomic) CLKFont *threeDigitFont; // @synthesize threeDigitFont=_threeDigitFont;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLKDevice;

@interface NTKWhistlerAnalogColorPalette : NSObject
{
    CLKDevice *_device;
}

+ (id)swatchColorForColor:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)mainColorForColor:(unsigned long long)arg1;
- (id)complicationForegroundColor:(unsigned long long)arg1;
- (id)dialPlatterTextColorForColor:(unsigned long long)arg1;
- (id)dialFillColorForColor:(unsigned long long)arg1;
- (id)minuteTicksColorForColor:(unsigned long long)arg1;
- (id)hourTicksColorForColor:(unsigned long long)arg1;
- (id)secondHandColorForColor:(unsigned long long)arg1;
- (id)handFillColorForColor:(unsigned long long)arg1;
- (id)handStrokeColorForColor:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1;

@end


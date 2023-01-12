//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AdPlatformsCommon/NSSecureCoding-Protocol.h>

@class NSArray;

@interface PCNativeColor : NSObject <NSSecureCoding>
{
    NSArray *_lightModeColors;
    NSArray *_darkModeColors;
    long long _gradientOrientation;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long gradientOrientation; // @synthesize gradientOrientation=_gradientOrientation;
@property(retain, nonatomic) NSArray *darkModeColors; // @synthesize darkModeColors=_darkModeColors;
@property(retain, nonatomic) NSArray *lightModeColors; // @synthesize lightModeColors=_lightModeColors;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

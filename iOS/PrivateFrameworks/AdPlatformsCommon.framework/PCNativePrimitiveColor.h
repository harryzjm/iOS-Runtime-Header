//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AdPlatformsCommon/NSSecureCoding-Protocol.h>

@interface PCNativePrimitiveColor : NSObject <NSSecureCoding>
{
    long long _rawValue;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long rawValue; // @synthesize rawValue=_rawValue;
@property(readonly, nonatomic) unsigned char alpha;
@property(readonly, nonatomic) unsigned char blue;
@property(readonly, nonatomic) unsigned char green;
@property(readonly, nonatomic) unsigned char red;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithRGBA:(long long)arg1;

@end

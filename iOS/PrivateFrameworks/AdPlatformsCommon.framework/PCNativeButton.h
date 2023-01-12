//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AdPlatformsCommon/NSSecureCoding-Protocol.h>

@class NSString, PCNativeButtonStyle;

@interface PCNativeButton : NSObject <NSSecureCoding>
{
    long long _type;
    NSString *_text;
    NSString *_accessibleText;
    PCNativeButtonStyle *_style;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) PCNativeButtonStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *accessibleText; // @synthesize accessibleText=_accessibleText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

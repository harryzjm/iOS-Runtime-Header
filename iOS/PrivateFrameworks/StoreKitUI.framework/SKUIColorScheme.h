//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>
#import <StoreKitUI/NSSecureCoding-Protocol.h>

@class UIColor;

@interface SKUIColorScheme : NSObject <NSCopying, NSSecureCoding>
{
    UIColor *_backgroundColor;
    UIColor *_highlightedTextColor;
    UIColor *_primaryTextColor;
    UIColor *_secondaryTextColor;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) UIColor *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property(copy, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property(copy, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long schemeStyle;
- (id)initWithColorSchemeDictionary:(id)arg1;

@end


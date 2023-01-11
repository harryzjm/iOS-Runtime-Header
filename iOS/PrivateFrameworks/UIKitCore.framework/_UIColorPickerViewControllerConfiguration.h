//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface _UIColorPickerViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    _Bool __shouldUseDarkGridInDarkMode;
    _Bool _showsAlpha;
    _Bool __isEmbedded;
    long long __userInterfaceStyleForGrid;
    NSString *_title;
    double __keyboardSpace;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) double _keyboardSpace; // @synthesize _keyboardSpace=__keyboardSpace;
@property(nonatomic) _Bool _isEmbedded; // @synthesize _isEmbedded=__isEmbedded;
@property(nonatomic) _Bool showsAlpha; // @synthesize showsAlpha=_showsAlpha;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long _userInterfaceStyleForGrid; // @synthesize _userInterfaceStyleForGrid=__userInterfaceStyleForGrid;
@property(nonatomic) _Bool _shouldUseDarkGridInDarkMode; // @synthesize _shouldUseDarkGridInDarkMode=__shouldUseDarkGridInDarkMode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IFColor, NSUUID;

__attribute__((visibility("hidden")))
@interface ISImageStyleDescriptor : NSObject
{
    _Bool _templateVariant;
    _Bool _selectedVariant;
    IFColor *_tintColor;
}

+ (_Bool)supportsSecureCoding;
+ (id)defaultStyleDescriptor;
- (void).cxx_destruct;
@property(retain, nonatomic) IFColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) _Bool selectedVariant; // @synthesize selectedVariant=_selectedVariant;
@property(nonatomic) _Bool templateVariant; // @synthesize templateVariant=_templateVariant;
@property(readonly) NSUUID *digest; // @dynamic digest;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


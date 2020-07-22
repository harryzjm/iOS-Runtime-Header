//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, PKColor;

@interface PKPassDisplayProfile <NSSecureCoding, NSCopying>
{
    _Bool _tallCode;
    _Bool _hasBackgroundImage;
    _Bool _hasStripImage;
    long long _passStyle;
    PKColor *_backgroundColor;
    PKColor *_foregroundColor;
    PKColor *_labelColor;
    PKColor *_stripColor;
    NSData *_manifestHash;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool hasStripImage; // @synthesize hasStripImage=_hasStripImage;
@property(nonatomic) _Bool hasBackgroundImage; // @synthesize hasBackgroundImage=_hasBackgroundImage;
@property(nonatomic) _Bool tallCode; // @synthesize tallCode=_tallCode;
@property(retain, nonatomic) NSData *manifestHash; // @synthesize manifestHash=_manifestHash;
@property(retain, nonatomic) PKColor *stripColor; // @synthesize stripColor=_stripColor;
@property(retain, nonatomic) PKColor *labelColor; // @synthesize labelColor=_labelColor;
@property(retain, nonatomic) PKColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(retain, nonatomic) PKColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long passStyle; // @synthesize passStyle=_passStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)type;
@property(readonly, nonatomic) long long layoutMode;
@property(readonly, nonatomic) _Bool showsStripImage;
@property(readonly, nonatomic) _Bool showsBackgroundImage;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;

@end


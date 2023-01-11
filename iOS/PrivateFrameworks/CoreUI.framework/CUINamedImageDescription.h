//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CUINamedImageDescription : NSObject
{
    double _scale;
    long long _idiom;
    long long _subtype;
    long long _sizeClassHorizontal;
    long long _sizeClassVertical;
    long long _displayGamut;
    long long _layoutDirection;
    int _blendMode;
    long long _templateRenderingMode;
    long long _imageType;
    CDStruct_3c058996 _edgeInsets;
    CDStruct_3c058996 _alignmentEdgeInsets;
    long long _resizingMode;
    int _exifOrientation;
}

@property(nonatomic) int exifOrientation; // @synthesize exifOrientation=_exifOrientation;
@property(nonatomic) long long resizingMode; // @synthesize resizingMode=_resizingMode;
@property(nonatomic) CDStruct_3c058996 alignmentEdgeInsets; // @synthesize alignmentEdgeInsets=_alignmentEdgeInsets;
@property(nonatomic) CDStruct_3c058996 edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) long long imageType; // @synthesize imageType=_imageType;
@property(nonatomic) long long templateRenderingMode; // @synthesize templateRenderingMode=_templateRenderingMode;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(nonatomic) long long displayGamut; // @synthesize displayGamut=_displayGamut;
@property(nonatomic) long long sizeClassVertical; // @synthesize sizeClassVertical=_sizeClassVertical;
@property(nonatomic) long long sizeClassHorizontal; // @synthesize sizeClassHorizontal=_sizeClassHorizontal;
@property(nonatomic) long long subtype; // @synthesize subtype=_subtype;
@property(nonatomic) long long idiom; // @synthesize idiom=_idiom;
@property(nonatomic) double scale; // @synthesize scale=_scale;
- (id)description;
@property(nonatomic) _Bool isTemplate;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLKComplicationTemplateGraphicCircular, CLKImageProvider, CLKTextProvider;

@interface StaticTemplateDescription : NSObject
{
    CLKImageProvider *_modularSmallTop;
    CLKTextProvider *_modularSmallBottom;
    CLKTextProvider *_utilityLarge;
    CLKTextProvider *_utilitySmall;
    CLKImageProvider *_utilityImageProvider;
    CLKTextProvider *_modularLargeHeader;
    CLKTextProvider *_modularLargeFirst;
    CLKTextProvider *_modularLargeSecond;
    CLKImageProvider *_circularSmallImage;
    CLKImageProvider *_circularMediumImage;
    CLKImageProvider *_extraLargeTop;
    CLKTextProvider *_extraLargeBottom;
    CLKTextProvider *_signatureBezel;
    CLKComplicationTemplateGraphicCircular *_signatureCircular;
    CLKTextProvider *_signatureCornerTextProvider;
}

@property(retain, nonatomic) CLKTextProvider *signatureCornerTextProvider; // @synthesize signatureCornerTextProvider=_signatureCornerTextProvider;
@property(retain, nonatomic) CLKComplicationTemplateGraphicCircular *signatureCircular; // @synthesize signatureCircular=_signatureCircular;
@property(retain, nonatomic) CLKTextProvider *signatureBezel; // @synthesize signatureBezel=_signatureBezel;
@property(retain, nonatomic) CLKTextProvider *extraLargeBottom; // @synthesize extraLargeBottom=_extraLargeBottom;
@property(retain, nonatomic) CLKImageProvider *extraLargeTop; // @synthesize extraLargeTop=_extraLargeTop;
@property(retain, nonatomic) CLKImageProvider *circularMediumImage; // @synthesize circularMediumImage=_circularMediumImage;
@property(retain, nonatomic) CLKImageProvider *circularSmallImage; // @synthesize circularSmallImage=_circularSmallImage;
@property(retain, nonatomic) CLKTextProvider *modularLargeSecond; // @synthesize modularLargeSecond=_modularLargeSecond;
@property(retain, nonatomic) CLKTextProvider *modularLargeFirst; // @synthesize modularLargeFirst=_modularLargeFirst;
@property(retain, nonatomic) CLKTextProvider *modularLargeHeader; // @synthesize modularLargeHeader=_modularLargeHeader;
@property(retain, nonatomic) CLKImageProvider *utilityImageProvider; // @synthesize utilityImageProvider=_utilityImageProvider;
@property(retain, nonatomic) CLKTextProvider *utilitySmall; // @synthesize utilitySmall=_utilitySmall;
@property(retain, nonatomic) CLKTextProvider *utilityLarge; // @synthesize utilityLarge=_utilityLarge;
@property(retain, nonatomic) CLKTextProvider *modularSmallBottom; // @synthesize modularSmallBottom=_modularSmallBottom;
@property(retain, nonatomic) CLKImageProvider *modularSmallTop; // @synthesize modularSmallTop=_modularSmallTop;
- (void).cxx_destruct;

@end


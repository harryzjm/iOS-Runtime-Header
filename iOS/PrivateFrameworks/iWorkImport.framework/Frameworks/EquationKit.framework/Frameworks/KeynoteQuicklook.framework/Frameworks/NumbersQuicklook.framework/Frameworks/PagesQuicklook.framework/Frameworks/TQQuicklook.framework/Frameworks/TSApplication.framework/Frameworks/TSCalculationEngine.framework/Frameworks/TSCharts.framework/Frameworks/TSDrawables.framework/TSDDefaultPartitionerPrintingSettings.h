//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSDDefaultPartitionerPrintingSettings : NSObject
{
    _Bool _isPrinting;
    _Bool _isDrawingIntoPDF;
    _Bool _shouldSuppressBackgrounds;
}

@property(readonly, nonatomic) _Bool shouldSuppressBackgrounds; // @synthesize shouldSuppressBackgrounds=_shouldSuppressBackgrounds;
@property(readonly, nonatomic) _Bool isDrawingIntoPDF; // @synthesize isDrawingIntoPDF=_isDrawingIntoPDF;
@property(readonly, nonatomic) _Bool isPrinting; // @synthesize isPrinting=_isPrinting;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCanvas:(id)arg1;

@end


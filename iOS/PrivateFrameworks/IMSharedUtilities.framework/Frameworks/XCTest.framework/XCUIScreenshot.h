//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, UIImage, XCTImage;

@interface XCUIScreenshot : NSObject
{
    XCTImage *_internalImage;
}

+ (long long)systemScreenshotQuality;
+ (void)setSystemScreenshotQuality:(long long)arg1;
+ (void)load;
@property(retain) XCTImage *internalImage; // @synthesize internalImage=_internalImage;
- (id)debugQuickLookObject;
@property(readonly, copy) NSData *PNGRepresentation;
@property(readonly, copy) UIImage *image;
- (void)dealloc;
- (id)initWithImage:(id)arg1;

@end


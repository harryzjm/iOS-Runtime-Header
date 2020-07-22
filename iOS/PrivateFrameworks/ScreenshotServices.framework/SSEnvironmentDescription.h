//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenshotServices/BSXPCCoding-Protocol.h>

@class BSSettings, NSArray, NSDate, NSString;

@interface SSEnvironmentDescription : NSObject <BSXPCCoding>
{
    NSArray *_elements;
    NSString *_identifier;
    NSString *_sessionIdentifier;
    unsigned long long _presentationMode;
    _Bool _isFromMainScreen;
    struct CGImage *_imageSurface;
    double _imageScale;
    NSDate *_date;
    struct CGSize _imagePixelSize;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) _Bool isFromMainScreen; // @synthesize isFromMainScreen=_isFromMainScreen;
@property(nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property(nonatomic) struct CGSize imagePixelSize; // @synthesize imagePixelSize=_imagePixelSize;
@property(nonatomic) struct CGImage *imageSurface; // @synthesize imageSurface=_imageSurface;
@property(readonly, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) BSSettings *bsSettings;
@property(readonly, nonatomic) NSArray *elementUnitRects;
- (struct CGSize)_imagePointSize;
@property(readonly, nonatomic) NSString *briefDescription;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithDisplayLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


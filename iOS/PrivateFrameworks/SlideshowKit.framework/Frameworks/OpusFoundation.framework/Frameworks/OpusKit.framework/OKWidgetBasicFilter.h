//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreImage/CIFilter.h>

#import <OpusKit/OKSettingsSupport-Protocol.h>

@class CIImage, NSString, OKPresentation;

@interface OKWidgetBasicFilter : CIFilter <OKSettingsSupport>
{
    CIImage *_inputImage;
    OKPresentation *_inputPresentation;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
@property(nonatomic) OKPresentation *inputPresentation; // @synthesize inputPresentation=_inputPresentation;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (id)outputImage;
- (id)inputKeys;
- (id)settingObjectForKey:(id)arg1;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

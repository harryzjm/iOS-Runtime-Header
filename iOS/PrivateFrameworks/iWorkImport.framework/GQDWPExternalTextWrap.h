//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQDWPExternalTextWrap : NSObject <GQDNameMappable>
{
    _Bool mFloatingWrapEnabled;
    _Bool mInlineWrapEnabled;
    float mMargin;
    float mAlphaThreshold;
    int mWrapStyle;
    int mWrapDirection;
    int mFloatingWrapType;
    int mAttachmentWrapType;
}

+ (const struct StateSpec *)stateForReading;
- (int)attachmentWrapType;
- (int)floatingWrapType;
- (int)wrapDirection;
- (int)wrapStyle;
- (float)alphaThreshold;
- (float)margin;
- (_Bool)inlineWrapEnabled;
- (_Bool)floatingWrapEnabled;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


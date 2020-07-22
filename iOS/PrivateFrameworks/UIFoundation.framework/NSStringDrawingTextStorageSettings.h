//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface NSStringDrawingTextStorageSettings : NSObject
{
    struct {
        float _hyphenationFactor;
        struct {
            unsigned int usesFontLeading:1;
            unsigned int usesScreenFonts:1;
            unsigned int showsInvisibleCharacters:1;
            unsigned int showsControlCharacters:1;
            unsigned int defaultAttachmentScaling:4;
            unsigned int typesetterBehavior:8;
            unsigned int reserved:20;
        } _flags;
    } _settings;
}

+ (id)threadSpecificStringDrawingTextStorageSettings:(_Bool)arg1;
- (id)init;

@end

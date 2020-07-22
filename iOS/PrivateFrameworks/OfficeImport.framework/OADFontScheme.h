//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString, OADFontCollection;

__attribute__((visibility("hidden")))
@interface OADFontScheme : NSObject
{
    NSString *_name;
    OADFontCollection *_majorFont;
    OADFontCollection *_minorFont;
}

@property(readonly, nonatomic) OADFontCollection *minorFont; // @synthesize minorFont=_minorFont;
@property(readonly, nonatomic) OADFontCollection *majorFont; // @synthesize majorFont=_majorFont;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)validateFontScheme;
- (id)fontForId:(int)arg1;
- (_Bool)isEmpty;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end

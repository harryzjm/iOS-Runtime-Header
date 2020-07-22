//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXFontFamilyProvider-Protocol.h>

@class NSArray, NSString;

@interface SXDocumentFontFamilyProvider : NSObject <SXFontFamilyProvider>
{
    NSArray *_fonts;
}

@property(readonly, nonatomic) NSArray *fonts; // @synthesize fonts=_fonts;
- (void).cxx_destruct;
- (id)fontsFromDocument:(id)arg1;
- (id)fontFamilies;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

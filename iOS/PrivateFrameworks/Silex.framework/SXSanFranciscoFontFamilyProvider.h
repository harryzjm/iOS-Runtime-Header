//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXFontFamilyProvider-Protocol.h>

@class NSString, SXSanFranciscoFontFamily;

@interface SXSanFranciscoFontFamilyProvider : NSObject <SXFontFamilyProvider>
{
    SXSanFranciscoFontFamily *_family;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SXSanFranciscoFontFamily *family; // @synthesize family=_family;
- (id)fontFamilies;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

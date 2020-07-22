//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXFontFamily-Protocol.h>

@class NSSet, NSString;

@interface SXFontFamily : NSObject <SXFontFamily>
{
    NSString *_familyName;
    NSSet *_fontFaces;
}

@property(readonly, nonatomic) NSSet *fontFaces; // @synthesize fontFaces=_fontFaces;
@property(readonly, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
- (void).cxx_destruct;
- (id)initWithFamilyName:(id)arg1 faces:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

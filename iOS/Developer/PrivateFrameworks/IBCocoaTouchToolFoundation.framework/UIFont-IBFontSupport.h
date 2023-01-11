//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIFont.h>

#import <IBCocoaTouchToolFoundation/IBBinaryArchiving-Protocol.h>

@class NSString;

@interface UIFont (IBFontSupport) <IBBinaryArchiving>
+ (id)ibPlaceholderFontWithName:(id)arg1 family:(id)arg2 pointSize:(double)arg3;
+ (id)decodeWithBinaryUnarchiver:(id)arg1;
+ (id)ib_unregisterFontsAtURLs:(id)arg1;
+ (id)ib_registerFontsAtURLs:(id)arg1;
+ (id)ib_customFonts;
+ (id)ib_availableFonts;
- (id)ibFontDescription;
- (void)getFontSize:(long long *)arg1 andPointSize:(double *)arg2;
- (void)ibSwizzledEncodeWithCoder:(id)arg1;
@property(nonatomic) double ibPointSize;
@property(retain, nonatomic) NSString *ibFamily;
@property(retain, nonatomic) NSString *ibFontName;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (const char *)cStringClassNameForBinaryArchiver:(id)arg1;
- (id)ib_URL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

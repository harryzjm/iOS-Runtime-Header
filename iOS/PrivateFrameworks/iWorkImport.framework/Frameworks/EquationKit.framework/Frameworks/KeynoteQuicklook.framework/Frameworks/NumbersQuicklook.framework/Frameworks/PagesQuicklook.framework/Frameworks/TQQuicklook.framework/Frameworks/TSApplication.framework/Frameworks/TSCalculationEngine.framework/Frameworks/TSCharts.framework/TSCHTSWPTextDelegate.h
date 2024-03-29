//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSULocale, TSWPPadding;
@protocol TSWPStyleProviding;

@interface TSCHTSWPTextDelegate : NSObject
{
    _Bool shouldHyphenate;
    _Bool forceWesternLineBreaking;
    int _verticalAlignment;
    double maxWidthForChildren;
    TSULocale *locale;
    id <TSWPStyleProviding> styleProvidingSource;
    TSWPPadding *_padding;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TSWPPadding *padding; // @synthesize padding=_padding;
@property(nonatomic) int verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) _Bool forceWesternLineBreaking; // @synthesize forceWesternLineBreaking;
@property(nonatomic) __weak id <TSWPStyleProviding> styleProvidingSource; // @synthesize styleProvidingSource;
@property(nonatomic) _Bool shouldHyphenate; // @synthesize shouldHyphenate;
@property(retain, nonatomic) TSULocale *locale; // @synthesize locale;
@property(nonatomic) double maxWidthForChildren; // @synthesize maxWidthForChildren;

@end


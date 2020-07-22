//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSCopying-Protocol.h>

@class NSArray, UIColor;

@interface SUPageSectionGroup : NSObject <NSCopying>
{
    long long _defaultSectionIndex;
    NSArray *_sections;
    long long _style;
    UIColor *_tintColor;
    long long _tintStyle;
}

@property(nonatomic) long long tintStyle; // @synthesize tintStyle=_tintStyle;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) long long defaultSectionIndex; // @synthesize defaultSectionIndex=_defaultSectionIndex;
- (long long)_sectionStyleForString:(id)arg1;
- (_Bool)loadFromDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithSectionsDictionary:(id)arg1;

@end


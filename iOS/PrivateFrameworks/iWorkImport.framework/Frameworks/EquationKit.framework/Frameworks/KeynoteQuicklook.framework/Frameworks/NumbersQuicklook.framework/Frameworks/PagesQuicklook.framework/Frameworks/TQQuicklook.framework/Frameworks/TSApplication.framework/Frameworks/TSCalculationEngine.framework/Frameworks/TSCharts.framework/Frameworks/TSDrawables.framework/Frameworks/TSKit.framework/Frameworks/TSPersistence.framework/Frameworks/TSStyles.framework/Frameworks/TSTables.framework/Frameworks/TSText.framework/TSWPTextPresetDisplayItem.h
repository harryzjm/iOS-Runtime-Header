//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TSWPTextStylePreset;

@interface TSWPTextPresetDisplayItem : NSObject
{
    TSWPTextStylePreset *_preset;
    NSString *_displayName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) TSWPTextStylePreset *preset; // @synthesize preset=_preset;
- (id)description;
- (void)saveToArchive:(struct TextPresetDisplayItemArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct TextPresetDisplayItemArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithPreset:(id)arg1 displayName:(id)arg2;

@end

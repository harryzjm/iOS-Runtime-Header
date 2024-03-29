//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IBUIFontDescription, NSString;

@interface IBUIEditableStringArea : NSObject
{
    _Bool _wraps;
    IBUIFontDescription *_fontDescription;
    long long _textAlignment;
    struct CGRect _sceneRect;
}

+ (id)editableAreaForObject:(id)arg1 probingInternalKeyPaths:(id)arg2;
+ (id)editableAreaForLabel:(id)arg1;
+ (id)emptyArea;
- (void).cxx_destruct;
@property(nonatomic) _Bool wraps; // @synthesize wraps=_wraps;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(copy, nonatomic) IBUIFontDescription *fontDescription; // @synthesize fontDescription=_fontDescription;
@property(nonatomic) struct CGRect sceneRect; // @synthesize sceneRect=_sceneRect;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


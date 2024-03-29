//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIKBScreenTraits, UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKBKeyplaneTransformationContext : NSObject
{
    _Bool _usesScriptSwitch;
    UIKBTree *_activeKeyboard;
    UIKBTree *_activeKeyplane;
    NSString *_currentKeyplaneName;
    UIKBScreenTraits *_screenTraits;
    double _resizingOffset;
    struct CGSize _keyboardSize;
}

- (void).cxx_destruct;
@property(nonatomic) double resizingOffset; // @synthesize resizingOffset=_resizingOffset;
@property(nonatomic) _Bool usesScriptSwitch; // @synthesize usesScriptSwitch=_usesScriptSwitch;
@property(retain, nonatomic) UIKBScreenTraits *screenTraits; // @synthesize screenTraits=_screenTraits;
@property(retain, nonatomic) NSString *currentKeyplaneName; // @synthesize currentKeyplaneName=_currentKeyplaneName;
@property(nonatomic) struct CGSize keyboardSize; // @synthesize keyboardSize=_keyboardSize;
@property(retain, nonatomic) UIKBTree *activeKeyplane; // @synthesize activeKeyplane=_activeKeyplane;
@property(retain, nonatomic) UIKBTree *activeKeyboard; // @synthesize activeKeyboard=_activeKeyboard;

@end


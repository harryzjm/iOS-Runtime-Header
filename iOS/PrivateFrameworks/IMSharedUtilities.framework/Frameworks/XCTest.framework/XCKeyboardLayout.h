//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, XCKeyboardKeyMap;

@interface XCKeyboardLayout : NSObject
{
    struct __GSKeyboard *_source;
    NSString *_identifier;
    NSData *_data;
    NSArray *_keyMaps;
    XCKeyboardKeyMap *_primaryKeyMap;
}

+ (id)unicodeHexKeyboardLayout;
+ (id)currentKeyboardLayout;
+ (void)enumerateKeyboardLayoutsUsingBlock:(CDUnknownBlockType)arg1;
+ (id)keyboardLayoutWithInputSource:(struct __GSKeyboard *)arg1;
+ (id)keyboardLayoutWithIdentifier:(id)arg1;
@property(readonly) XCKeyboardKeyMap *primaryKeyMap; // @synthesize primaryKeyMap=_primaryKeyMap;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)deactivate:(id)arg1 error:(id *)arg2;
- (id)activateWithError:(id *)arg1;
- (id)_setActiveLayoutState:(id)arg1 error:(id *)arg2;
- (void)enumerateKeyMapsUsingBlock:(CDUnknownBlockType)arg1;
- (id)description;
- (id)keyMapForKeyboardType:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithInputSource:(struct __GSKeyboard *)arg1;
- (id)init;

@end

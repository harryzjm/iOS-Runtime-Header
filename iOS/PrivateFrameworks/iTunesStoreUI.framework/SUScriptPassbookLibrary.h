//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, PKPassLibrary;

@interface SUScriptPassbookLibrary
{
    PKPassLibrary *_passLibrary;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) NSArray *passes;
- (id)_className;
- (id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (void)dealloc;
- (id)initWithPassLibrary:(id)arg1;

@end


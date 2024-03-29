//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DVTVersion, NSArray, NSString;

@interface DVTMacroNameRegistryRegistration : NSObject
{
    _Bool _listType;
    NSString *_macroName;
}

- (void).cxx_destruct;
@property(readonly, getter=isListType) _Bool listType; // @synthesize listType=_listType;
@property(readonly, copy) NSString *macroName; // @synthesize macroName=_macroName;
@property(readonly, copy) NSString *description;
@property(readonly) NSString *identifier;
- (id)initWithMacroName:(id)arg1 isListType:(_Bool)arg2;

// Remaining properties
@property(readonly) NSArray *aliases;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSString *displayDescription;
@property(readonly) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) DVTVersion *version;

@end


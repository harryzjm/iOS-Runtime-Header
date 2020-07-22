//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesStore/SSXPCCoding-Protocol.h>

@class NSDictionary, NSString;

@interface ISDialogButton : NSObject <SSXPCCoding>
{
    int _actionType;
    id _parameter;
    NSString *_title;
    long long _urlType;
    NSString *_subtarget;
    NSDictionary *_dictionary;
    _Bool _tidContinue;
}

+ (id)buttonWithTitle:(id)arg1;
@property long long urlType; // @synthesize urlType=_urlType;
@property(retain) NSString *title; // @synthesize title=_title;
@property(copy) NSString *subtarget; // @synthesize subtarget=_subtarget;
@property(readonly) _Bool shouldContinueTouchIDSession; // @synthesize shouldContinueTouchIDSession=_tidContinue;
@property(retain) id parameter; // @synthesize parameter=_parameter;
@property(retain) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property int actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (long long)_urlTypeForString:(id)arg1;
- (void)_openURLWithRequest:(id)arg1;
- (int)_actionTypeForString:(id)arg1;
- (void)setActionTypeWithString:(id)arg1;
- (void)performDefaultActionForDialog:(id)arg1;
- (void)loadFromDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1 superficial:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


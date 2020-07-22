//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class ASAsset, NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface _UIDefinitionValue : NSObject
{
    NSString *_localizedDictionaryName;
    NSString *_term;
    NSAttributedString *_definition;
    NSString *_longDefinition;
    ASAsset *_rawAsset;
}

@property(retain, nonatomic) ASAsset *rawAsset; // @synthesize rawAsset=_rawAsset;
@property(readonly) NSString *longDefinition; // @synthesize longDefinition=_longDefinition;
@property(readonly) NSAttributedString *definition; // @synthesize definition=_definition;
@property(readonly) NSString *term; // @synthesize term=_term;
@property(readonly) NSString *localizedDictionaryName; // @synthesize localizedDictionaryName=_localizedDictionaryName;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLocalizedDictionaryName:(id)arg1 term:(id)arg2 definition:(id)arg3 longDefinition:(id)arg4;

@end


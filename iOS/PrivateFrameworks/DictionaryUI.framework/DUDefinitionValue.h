//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAsset, NSAttributedString, NSDictionary, NSString;

@interface DUDefinitionValue : NSObject
{
    NSAttributedString *_definition;
    NSString *_longDefinition;
    NSDictionary *_definitionElements;
    NSString *_localizedDictionaryName;
    NSString *_term;
    MAAsset *_rawAsset;
    struct __CFArray *_foundRecordRefs;
}

- (void).cxx_destruct;
@property struct __CFArray *foundRecordRefs; // @synthesize foundRecordRefs=_foundRecordRefs;
@property(retain, nonatomic) MAAsset *rawAsset; // @synthesize rawAsset=_rawAsset;
@property(readonly) NSString *term; // @synthesize term=_term;
@property(readonly) NSString *localizedDictionaryName; // @synthesize localizedDictionaryName=_localizedDictionaryName;
- (id)description;
- (id)_HTMLDefinitionForType:(long long)arg1;
@property(readonly) NSDictionary *definitionElements; // @synthesize definitionElements=_definitionElements;
@property(readonly) NSString *longDefinition; // @synthesize longDefinition=_longDefinition;
@property(readonly) NSAttributedString *definition; // @synthesize definition=_definition;
- (void)dealloc;
- (id)initWithDefinitionDictionary:(id)arg1 term:(id)arg2;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CACodingCAMLWriterDelegate : NSObject
{
    NSString *_resourceDir;
    int _serial;
    NSString *_imageFormat;
    NSDictionary *_imageEncodeOptions;
    _Bool _skipHiddenLayers;
}

@property _Bool skipHiddenLayers; // @synthesize skipHiddenLayers=_skipHiddenLayers;
@property(copy) NSDictionary *imageEncodeOptions; // @synthesize imageEncodeOptions=_imageEncodeOptions;
@property(copy) NSString *imageFormat; // @synthesize imageFormat=_imageFormat;
- (_Bool)CAMLWriter:(id)arg1 shouldEncodeObject:(id)arg2;
- (id)CAMLWriter:(id)arg1 URLForResource:(id)arg2;
- (id)CAMLWriter:(id)arg1 typeForObject:(id)arg2;
- (id)initWithResourceDir:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

